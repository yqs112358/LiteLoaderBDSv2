/**
 * @file  DimensionConversionData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DimensionConversionData.
 *
 */
class DimensionConversionData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONCONVERSIONDATA
public:
    class DimensionConversionData& operator=(class DimensionConversionData const &) = delete;
    DimensionConversionData(class DimensionConversionData const &) = delete;
    DimensionConversionData() = delete;
#endif

public:
    /**
     * @symbol ?getNetherScale\@DimensionConversionData\@\@QEBAHXZ
     */
    MCAPI int getNetherScale() const;
    /**
     * @symbol ?getOverworldSpawnPoint\@DimensionConversionData\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const & getOverworldSpawnPoint() const;

};
