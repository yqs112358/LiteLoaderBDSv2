/**
 * @file  PredictedMovementValues.hpp
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
 * @brief MC structure PredictedMovementValues.
 *
 */
struct PredictedMovementValues {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTEDMOVEMENTVALUES
public:
    struct PredictedMovementValues& operator=(struct PredictedMovementValues const &) = delete;
    PredictedMovementValues(struct PredictedMovementValues const &) = delete;
    PredictedMovementValues() = delete;
#endif
public:
MCAPI static __int64 const DEFAULT_INTERPOLATION_WINDOW_SIZE_IN_TICKS;
MCAPI static bool const DEFAULT_USE_AGGRESSIVE_TICK_INTERVAL;
MCAPI static __int64 const SMALL_INTERPOLATION_WINDOW_SIZE_IN_TICKS;

};