/**
 * @file  StorageItemComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StorageItemComponent.
 *
 */
class StorageItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STORAGEITEMCOMPONENT
public:
    class StorageItemComponent& operator=(class StorageItemComponent const &) = delete;
    StorageItemComponent(class StorageItemComponent const &) = delete;
    StorageItemComponent() = delete;
#endif

public:
    /**
     * @symbol ?calculateAddableCount@StorageItemComponent@@QEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
     * @hash   -1614038010
     */
    MCAPI unsigned int calculateAddableCount(class ItemStack const &, class ItemStackBase const &) const;
    /**
     * @symbol ?tryAddItemStack@StorageItemComponent@@QEBA_NAEAVItemStack@@0@Z
     * @hash   1117798452
     */
    MCAPI bool tryAddItemStack(class ItemStack &, class ItemStack &) const;
    /**
     * @symbol ?tryGenerateUserData@StorageItemComponent@@QEBAXAEAVItemStack@@@Z
     * @hash   844937244
     */
    MCAPI void tryGenerateUserData(class ItemStack &) const;
    /**
     * @symbol ?tryRemoveItemStack@StorageItemComponent@@QEBA?AVItemStack@@AEAV2@@Z
     * @hash   -256193166
     */
    MCAPI class ItemStack tryRemoveItemStack(class ItemStack &) const;
    /**
     * @symbol ?tryRemoveOneFromItemStack@StorageItemComponent@@QEBA?AVItemStack@@AEAV2@@Z
     * @hash   -39143836
     */
    MCAPI class ItemStack tryRemoveOneFromItemStack(class ItemStack &) const;
    /**
     * @symbol ?use@StorageItemComponent@@QEBA_NAEAVItemStack@@AEAVPlayer@@@Z
     * @hash   525789704
     */
    MCAPI bool use(class ItemStack &, class Player &) const;
MCAPI static unsigned int const DEFAULT_MAX_CARRY_WEIGHT;
    /**
     * @symbol ?bindType@StorageItemComponent@@SAXXZ
     * @hash   954740259
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getIdentifier@StorageItemComponent@@SAAEBVHashedString@@XZ
     * @hash   2093672122
     */
    MCAPI static class HashedString const & getIdentifier();

//private:
    /**
     * @symbol ?_calculateAddableCountForBasicStorage@StorageItemComponent@@AEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
     * @hash   153894358
     */
    MCAPI unsigned int _calculateAddableCountForBasicStorage(class ItemStack const &, class ItemStackBase const &) const;
    /**
     * @symbol ?_getItemListSize@StorageItemComponent@@AEBAIAEAVItemStack@@@Z
     * @hash   -1324515392
     */
    MCAPI unsigned int _getItemListSize(class ItemStack &) const;
    /**
     * @symbol ?_getPerItemCost@StorageItemComponent@@AEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
     * @hash   1130872881
     */
    MCAPI unsigned int _getPerItemCost(class ItemStack const &, class ItemStackBase const &) const;
    /**
     * @symbol ?_storeItemInNewOrExistingSlot@StorageItemComponent@@AEBAXAEAVItemStack@@0I@Z
     * @hash   341276970
     */
    MCAPI void _storeItemInNewOrExistingSlot(class ItemStack &, class ItemStack &, unsigned int) const;
    /**
     * @symbol ?_updateRemainingWeight@StorageItemComponent@@AEBAXAEAVItemStack@@AEBV2@H@Z
     * @hash   -2101625378
     */
    MCAPI void _updateRemainingWeight(class ItemStack &, class ItemStack const &, int) const;

private:

};