/**
 * @file  EnchantingContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantingContainerManagerModel.
 *
 */
class EnchantingContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTINGCONTAINERMANAGERMODEL
public:
    class EnchantingContainerManagerModel& operator=(class EnchantingContainerManagerModel const &) = delete;
    EnchantingContainerManagerModel(class EnchantingContainerManagerModel const &) = delete;
    EnchantingContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   586290050
     */
    virtual ~EnchantingContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@EnchantingContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   91831643
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@EnchantingContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -759972636
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@EnchantingContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   674493629
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol ?setData@EnchantingContainerManagerModel@@UEAAXHH@Z
     * @hash   -1269247457
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@EnchantingContainerManagerModel@@UEAAXXZ
     * @hash   -1864369387
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@EnchantingContainerManagerModel@@UEAA_NM@Z
     * @hash   608003723
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@EnchantingContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   1588398114
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0EnchantingContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   1158889297
     */
    MCAPI EnchantingContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);
    /**
     * @symbol ?getEnchantOptions@EnchantingContainerManagerModel@@QEBAAEBV?$vector@VItemEnchantOption@@V?$allocator@VItemEnchantOption@@@std@@@std@@XZ
     * @hash   16740348
     */
    MCAPI std::vector<class ItemEnchantOption> const & getEnchantOptions() const;
    /**
     * @symbol ?recalculateOptions@EnchantingContainerManagerModel@@QEAAXXZ
     * @hash   98055705
     */
    MCAPI void recalculateOptions();
MCAPI static int const NUM_OPTIONS;

};