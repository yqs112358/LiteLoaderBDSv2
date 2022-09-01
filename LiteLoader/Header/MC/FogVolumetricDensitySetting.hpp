/**
 * @file  FogVolumetricDensitySetting.hpp
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
 * @brief MC structure FogVolumetricDensitySetting.
 *
 */
struct FogVolumetricDensitySetting {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGVOLUMETRICDENSITYSETTING
public:
    struct FogVolumetricDensitySetting& operator=(struct FogVolumetricDensitySetting const &) = delete;
    FogVolumetricDensitySetting(struct FogVolumetricDensitySetting const &) = delete;
    FogVolumetricDensitySetting() = delete;
#endif
public:
MCAPI static float const UNIFORM_MAX_DENSITY_HEIGHT;
MCAPI static float const UNIFORM_ZERO_DENSITY_HEIGHT;
MCAPI static struct FogVolumetricDensitySetting const ZERO_SETTING;

};