/**
 * @file  HomeComponent.hpp
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
 * @brief MC class HomeComponent.
 *
 */
class HomeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOMECOMPONENT
public:
    class HomeComponent& operator=(class HomeComponent const &) = delete;
    HomeComponent(class HomeComponent const &) = delete;
#endif

public:
    /**
     * @symbol ??0HomeComponent@@QEAA@XZ
     * @hash   1812104042
     */
    MCAPI HomeComponent();
    /**
     * @symbol ?addAdditionalSaveData@HomeComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   992149752
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?getHomeDimension@HomeComponent@@QEBA?AV?$AutomaticID@VDimension@@H@@XZ
     * @hash   1994372290
     */
    MCAPI class AutomaticID<class Dimension, int> getHomeDimension() const;
    /**
     * @symbol ?getHomePos@HomeComponent@@QEBA?AVBlockPos@@XZ
     * @hash   -1594541554
     */
    MCAPI class BlockPos getHomePos() const;
    /**
     * @symbol ?getRestrictionRadius@HomeComponent@@QEBAHXZ
     * @hash   -1921934970
     */
    MCAPI int getRestrictionRadius() const;
    /**
     * @symbol ?hasRestriction@HomeComponent@@QEBA_NXZ
     * @hash   1406972116
     */
    MCAPI bool hasRestriction() const;
    /**
     * @symbol ?hasValidHomePos@HomeComponent@@QEBA_NXZ
     * @hash   1828834786
     */
    MCAPI bool hasValidHomePos() const;
    /**
     * @symbol ?isWithinRestriction@HomeComponent@@QEBA_NAEBVBlockPos@@@Z
     * @hash   1546658691
     */
    MCAPI bool isWithinRestriction(class BlockPos const &) const;
    /**
     * @symbol ??4HomeComponent@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   1943514400
     */
    MCAPI class HomeComponent & operator=(class HomeComponent &&);
    /**
     * @symbol ?readAdditionalSaveData@HomeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   537576252
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?setHome@HomeComponent@@QEAAXAEBVBlockPos@@AEBV?$AutomaticID@VDimension@@H@@@Z
     * @hash   1434732977
     */
    MCAPI void setHome(class BlockPos const &, class AutomaticID<class Dimension, int> const &);
    /**
     * @symbol ?tick@HomeComponent@@QEAAXAEAVActor@@@Z
     * @hash   -1547359630
     */
    MCAPI void tick(class Actor &);

};