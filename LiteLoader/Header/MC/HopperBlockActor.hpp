/**
 * @file  HopperBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HopperBlockActor.
 *
 */
class HopperBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERBLOCKACTOR
public:
    class HopperBlockActor& operator=(class HopperBlockActor const &) = delete;
    HopperBlockActor(class HopperBlockActor const &) = delete;
    HopperBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPPERBLOCKACTOR
    /**
     * @symbol ?_getUpdatePacket@HopperBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   -867224971
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol ?_onUpdatePacket@HopperBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   640479309
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ?getContainer@HopperBlockActor@@UEAAPEAVContainer@@XZ
     * @hash   1543853891
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol ?getContainer@HopperBlockActor@@UEBAPEBVContainer@@XZ
     * @hash   1116132031
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol ?getContainerSize@HopperBlockActor@@UEBAHXZ
     * @hash   -770237525
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol ?getItem@HopperBlockActor@@UEBAAEBVItemStack@@H@Z
     * @hash   938223248
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol ?getMaxStackSize@HopperBlockActor@@UEBAHXZ
     * @hash   1627334906
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol ?getName@HopperBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -170538929
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol ?load@HopperBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -359566029
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?onMove@HopperBlockActor@@UEAAXXZ
     * @hash   2051243339
     */
    MCVAPI void onMove();
    /**
     * @symbol ?onNeighborChanged@HopperBlockActor@@UEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -651380524
     */
    MCVAPI void onNeighborChanged(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?save@HopperBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -525622366
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol ?serverInitItemStackIds@HopperBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     * @hash   2121690277
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol ?setContainerChanged@HopperBlockActor@@UEAAXH@Z
     * @hash   -2117236401
     */
    MCVAPI void setContainerChanged(int);
    /**
     * @symbol ?setItem@HopperBlockActor@@UEAAXHAEBVItemStack@@@Z
     * @hash   616269493
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol ?startOpen@HopperBlockActor@@UEAAXAEAVPlayer@@@Z
     * @hash   520503548
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol ?stopOpen@HopperBlockActor@@UEAAXAEAVPlayer@@@Z
     * @hash   1543964956
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol ?tick@HopperBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1968313900
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol ??0HopperBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -616623969
     */
    MCAPI HopperBlockActor(class BlockPos const &);
    /**
     * @symbol ?checkForSmeltEverythingAchievement@HopperBlockActor@@QEAAXAEAVBlockSource@@@Z
     * @hash   1987660884
     */
    MCAPI void checkForSmeltEverythingAchievement(class BlockSource &);
    /**
     * @symbol ?getAttachedFurnace@HopperBlockActor@@QEAAPEAVFurnaceBlockActor@@AEAVBlockSource@@@Z
     * @hash   1461147412
     */
    MCAPI class FurnaceBlockActor * getAttachedFurnace(class BlockSource &);
    /**
     * @symbol ?isAttachedToChestAndFurnace@HopperBlockActor@@QEAA_NAEAVBlockSource@@@Z
     * @hash   737336607
     */
    MCAPI bool isAttachedToChestAndFurnace(class BlockSource &);
    /**
     * @symbol ?updateCooldownAfterMove@HopperBlockActor@@QEAAXAEBUTick@@H@Z
     * @hash   -244995503
     */
    MCAPI void updateCooldownAfterMove(struct Tick const &, int);

//private:
    /**
     * @symbol ?_ensureTickingOrder@HopperBlockActor@@AEAAXAEAVBlockSource@@H@Z
     * @hash   448956305
     */
    MCAPI void _ensureTickingOrder(class BlockSource &, int);
    /**
     * @symbol ?_tick@HopperBlockActor@@AEAAXAEAVBlockSource@@H@Z
     * @hash   1960428279
     */
    MCAPI void _tick(class BlockSource &, int);
    /**
     * @symbol ?isAttachedToContainerType@HopperBlockActor@@AEAA_NAEAVBlockSource@@W4ContainerType@@@Z
     * @hash   -845663417
     */
    MCAPI bool isAttachedToContainerType(class BlockSource &, enum ContainerType);
    /**
     * @symbol ?isSourceOfContainerType@HopperBlockActor@@AEAA_NAEAVBlockSource@@W4ContainerType@@@Z
     * @hash   256377188
     */
    MCAPI bool isSourceOfContainerType(class BlockSource &, enum ContainerType);

private:

};