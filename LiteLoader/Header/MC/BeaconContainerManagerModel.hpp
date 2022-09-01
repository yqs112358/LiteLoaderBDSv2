/**
 * @file  BeaconContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LevelContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BeaconContainerManagerModel.
 *
 */
class BeaconContainerManagerModel : public LevelContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEACONCONTAINERMANAGERMODEL
public:
    class BeaconContainerManagerModel& operator=(class BeaconContainerManagerModel const &) = delete;
    BeaconContainerManagerModel(class BeaconContainerManagerModel const &) = delete;
    BeaconContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -73001593
     */
    virtual ~BeaconContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@BeaconContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   -936528506
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@BeaconContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   696981257
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@BeaconContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   445406930
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  17
     * @symbol ?_postInit@BeaconContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   858578045
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0BeaconContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   429591564
     */
    MCAPI BeaconContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);
MCAPI static int const PAYMENT_SLOT;

//private:
    /**
     * @symbol ?_resetSelectionState@BeaconContainerManagerModel@@AEAAXXZ
     * @hash   -402482104
     */
    MCAPI void _resetSelectionState();

private:

};