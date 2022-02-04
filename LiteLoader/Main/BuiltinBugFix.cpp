#include <unordered_map>

#include <Main/Config.h>
#include <Main/LiteLoader.h>
#include <HookAPI.h>
#include <LoggerAPI.h>

#include <MC/InventoryTransactionPacket.hpp>
#include <MC/NetworkIdentifier.hpp>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/ClientCacheBlobStatusPacket.hpp>
#include <MC/BinaryStream.hpp>

#include <MC/SharedConstants.hpp>
#include <MC/PropertiesSettings.hpp>

using namespace LL;

bool ip_information_logged = false;

//Patch for CVE-2021-45384
TInstanceHook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z",
              ServerNetworkHandler, NetworkIdentifier *ni, void *packet) {
    if (globalConfig.enableFixDisconnectBug) {
        if (!getServerPlayer(*ni))
            return;
    }
    return original(this, ni, packet);
}

//Patch for CVE-2021-45383
TClasslessInstanceHook(bool, "?_read@ClientCacheBlobStatusPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z",
      ReadOnlyBinaryStream* a2)
{
    ReadOnlyBinaryStream pkt(a2->getData(), 0);
    pkt.getUnsignedVarInt();
    if (pkt.getUnsignedVarInt() >= 0xfff) return 0;
    if (pkt.getUnsignedVarInt() >= 0xfff) return 0;
    return original(this,a2);
}

TClasslessInstanceHook(void*, "?_read@PurchaseReceiptPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z", ReadOnlyBinaryStream* a2)
{
    return (void*)1;
}

//Fix the listening port twice.
TClasslessInstanceHook(__int64, "?LogIPSupport@RakPeerHelper@@AEAAXXZ") {
    if (globalConfig.enableFixListenPort) {
        if (!ip_information_logged) {
            ip_information_logged = true;
            return original(this);
        }
        return 0;
    } else {
        return original(this);
    }
}

// Fix abnormal items.
#include <mc/InventorySource.hpp>
#include <MC/InventoryTransaction.hpp>
#include <MC/InventoryAction.hpp>
#include <MC/IContainerManager.hpp>

TInstanceHook(void*, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z",
      ServerNetworkHandler , NetworkIdentifier const &netid, InventoryTransactionPacket *pk) {
    if (globalConfig.enableAntiGive) {
        auto *sp = (Player *) this->getServerPlayer(netid);
        auto *data = (InventoryTransaction *) (*((__int64 *) pk + 10) + 16);
        auto a = dAccess<std::unordered_map<InventorySource *, void *>, 0>(data);
        bool abnormal = false;
        for (auto &i: a)
            if ((int) *(&i.first) == 99999) {
                auto icm = sp->getContainerManager().lock();
                if (icm) {
                    auto id = VirtualCall<int>(icm.get(), 0x18);
                    if ((int) id == 22) return original(this, netid, pk);
                }
                abnormal = true;
            }
        if (abnormal) {
            logger.warn << "Player(" << sp->getRealName() << ") item data error!" << Logger::endl;
            return nullptr;
        }
    }
    return original(this, netid, pk);
}

#include <EventAPI.h>
void FixBugEvent()
{
}

//fix sleeping drop item
#include <mc/ItemActor.hpp>
#include <MC/MovementInterpolator.hpp>
TInstanceHook(ItemActor*, "?_drop@Actor@@IEAAPEBVItemActor@@AEBVItemStack@@_N@Z", Actor , ItemStack* a2, char a3)
{
    auto out = dAccess<MovementInterpolator*,0x510>(this);
    if (!dAccess<bool, 0x24>(out))
    {
        auto num = dAccess<int, 0x1c>(out);
        if (num > 0)
            if (num == 1)
            {
                auto v17 = *(Vec2*)((char*)out + 0x0c);
                this->setRot(v17);
            }
        --dAccess<int, 0x1c>(out);
    }
    return original(this, a2, a3);
}

THook(size_t, "??0PropertiesSettings@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z", PropertiesSettings* a1, std::string const& a2)
{
    if (true)
    {
        //logger.warn("If you turn on this feature, your server will not be displayed on the LAN");
        DWORD v4Flag, v6Flag;
        VirtualProtect((void*)&SharedConstants::NetworkDefaultGamePort, 4, PAGE_READWRITE, &v4Flag);
        *(unsigned short*)&SharedConstants::NetworkDefaultGamePort = a1->getServerPort();
        VirtualProtect((void*)&SharedConstants::NetworkDefaultGamePort, 4, v4Flag, NULL);

        VirtualProtect((void*)&SharedConstants::NetworkDefaultGamePortv6, 4, PAGE_READWRITE, &v6Flag);
        *(unsigned short*)&SharedConstants::NetworkDefaultGamePortv6 = a1->getServerPortv6();
        VirtualProtect((void*)&SharedConstants::NetworkDefaultGamePortv6, 4, v6Flag, NULL);
    }
    return original(a1,a2);
}