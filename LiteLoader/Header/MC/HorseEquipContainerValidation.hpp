/**
 * @file  HorseEquipContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HorseEquipContainerValidation.
 *
 */
class HorseEquipContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEEQUIPCONTAINERVALIDATION
public:
    class HorseEquipContainerValidation& operator=(class HorseEquipContainerValidation const &) = delete;
    HorseEquipContainerValidation(class HorseEquipContainerValidation const &) = delete;
    HorseEquipContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1688252459
     */
    virtual ~HorseEquipContainerValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   1637182171
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @symbol ?isItemAllowedInSlot@HorseEquipContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     * @hash   441572299
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @vftbl  3
     * @symbol ?getAvailableSetCount@HorseEquipContainerValidation@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   -1675510920
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @symbol ?isItemAllowedToAdd@HorseEquipContainerValidation@@UEBA_NAEBVItemStack@@@Z
     * @hash   -792997562
     */
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @vftbl  5
     * @symbol ?isItemAllowedToRemove@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVItemStackBase@@@Z
     * @hash   817668127
     */
    virtual bool isItemAllowedToRemove(class ContainerScreenContext const &, class ItemStackBase const &) const;
    /**
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   364345310
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   1582723394
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @vftbl  8
     * @hash   -1366295496
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol ?getContainerSize@HorseEquipContainerValidation@@UEBAHAEBVContainerScreenContext@@AEBVContainer@@@Z
     * @hash   -506139959
     */
    virtual int getContainerSize(class ContainerScreenContext const &, class Container const &) const;
    /**
     * @symbol ??0HorseEquipContainerValidation@@QEAA@AEBVContainerScreenContext@@@Z
     * @hash   -1772422300
     */
    MCAPI HorseEquipContainerValidation(class ContainerScreenContext const &);

};