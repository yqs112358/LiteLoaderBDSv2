/**
 * @file  NpcDialoguePacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcDialoguePacket.
 *
 */
class NpcDialoguePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDIALOGUEPACKET
public:
    class NpcDialoguePacket& operator=(class NpcDialoguePacket const &) = delete;
    NpcDialoguePacket(class NpcDialoguePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -604929777
     */
    virtual ~NpcDialoguePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@NpcDialoguePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   411428365
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@NpcDialoguePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -368820038
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@NpcDialoguePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1305602877
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@NpcDialoguePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -490901827
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0NpcDialoguePacket@@QEAA@XZ
     * @hash   502510765
     */
    MCAPI NpcDialoguePacket();
    /**
     * @symbol ??0NpcDialoguePacket@@QEAA@UActorUniqueID@@@Z
     * @hash   -463789702
     */
    MCAPI NpcDialoguePacket(struct ActorUniqueID);
    /**
     * @symbol ?initializePacket@NpcDialoguePacket@@SA_NAEAV1@PEBVNpcDialogueStorage@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -741427768
     */
    MCAPI static bool initializePacket(class NpcDialoguePacket &, class NpcDialogueStorage const *, std::string const &);

};