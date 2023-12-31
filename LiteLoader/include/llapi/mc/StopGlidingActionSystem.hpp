/**
 * @file  StopGlidingActionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class StopGlidingActionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPGLIDINGACTIONSYSTEM
public:
    class StopGlidingActionSystem& operator=(class StopGlidingActionSystem const &) = delete;
    StopGlidingActionSystem(class StopGlidingActionSystem const &) = delete;
    StopGlidingActionSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@StopGlidingActionSystem\@\@SA?AUTickingSystemWithInfo\@\@_N\@Z
     */
    MCAPI static struct TickingSystemWithInfo createSystem(bool);

};
