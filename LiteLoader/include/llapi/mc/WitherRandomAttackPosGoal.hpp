/**
 * @file  WitherRandomAttackPosGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RandomStrollGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WitherRandomAttackPosGoal.
 *
 */
class WitherRandomAttackPosGoal : public RandomStrollGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERRANDOMATTACKPOSGOAL
public:
    class WitherRandomAttackPosGoal& operator=(class WitherRandomAttackPosGoal const &) = delete;
    WitherRandomAttackPosGoal(class WitherRandomAttackPosGoal const &) = delete;
    WitherRandomAttackPosGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1122084471
     */
    virtual ~WitherRandomAttackPosGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@WitherRandomAttackPosGoal@@UEAA_NXZ
     * @hash   2091613767
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@WitherRandomAttackPosGoal@@UEAA_NXZ
     * @hash   -1715162603
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  4
     * @symbol ?start@WitherRandomAttackPosGoal@@UEAAXXZ
     * @hash   642220000
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@WitherRandomAttackPosGoal@@UEAAXXZ
     * @hash   -519938032
     */
    virtual void stop();
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1352071735
     */
    virtual void __unk_vfn_9();
    /**
     * @symbol ??0WitherRandomAttackPosGoal@@QEAA@AEAVMob@@MHH@Z
     * @hash   -2069197683
     */
    MCAPI WitherRandomAttackPosGoal(class Mob &, float, int, int);

};