/**
 * @file  FossilFeature.hpp
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
 * @brief MC class FossilFeature.
 *
 */
class FossilFeature : public Feature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOSSILFEATURE
public:
    class FossilFeature& operator=(class FossilFeature const &) = delete;
    FossilFeature(class FossilFeature const &) = delete;
    FossilFeature() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1786912088
     */
    virtual ~FossilFeature();
    /**
     * @vftbl  3
     * @symbol ?place@FossilFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   1003260436
     */
    virtual bool place(class BlockSource &, class BlockPos const &, class Random &) const;

//private:

private:
MCAPI static std::string const STRUCTURE_LOCATION_FOSSIL[];

};