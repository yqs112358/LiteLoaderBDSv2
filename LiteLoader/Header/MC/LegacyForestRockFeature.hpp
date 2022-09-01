/**
 * @file  LegacyForestRockFeature.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Feature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyForestRockFeature.
 *
 */
class LegacyForestRockFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYFORESTROCKFEATURE
public:
    class LegacyForestRockFeature& operator=(class LegacyForestRockFeature const &) = delete;
    LegacyForestRockFeature(class LegacyForestRockFeature const &) = delete;
    LegacyForestRockFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1049798791
     */
    virtual ~LegacyForestRockFeature();
    /**
     * @vftbl  3
     * @symbol ?place@LegacyForestRockFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   2115320501
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ??0LegacyForestRockFeature@@QEAA@AEBVFeatureRegistry@@@Z
     * @hash   -1210187256
     */
    MCAPI LegacyForestRockFeature(class FeatureRegistry const &);

};