/**
 * @file  MoveToLavaGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "MoveToLiquidGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveToLavaGoal.
 *
 */
class MoveToLavaGoal : public MoveToLiquidGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOLAVAGOAL
public:
    class MoveToLavaGoal& operator=(class MoveToLavaGoal const &) = delete;
    MoveToLavaGoal(class MoveToLavaGoal const &) = delete;
    MoveToLavaGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ??0MoveToLavaGoal\@\@QEAA\@AEAVMob\@\@MHHHM\@Z
     */
    MCAPI MoveToLavaGoal(class Mob &, float, int, int, int, float);

};
