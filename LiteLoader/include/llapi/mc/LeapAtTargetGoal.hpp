/**
 * @file  LeapAtTargetGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Goal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LeapAtTargetGoal.
 *
 */
class LeapAtTargetGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEAPATTARGETGOAL
public:
    class LeapAtTargetGoal& operator=(class LeapAtTargetGoal const &) = delete;
    LeapAtTargetGoal(class LeapAtTargetGoal const &) = delete;
    LeapAtTargetGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@LeapAtTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@LeapAtTargetGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@LeapAtTargetGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@LeapAtTargetGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0LeapAtTargetGoal\@\@QEAA\@AEAVMob\@\@M_N1\@Z
     */
    MCAPI LeapAtTargetGoal(class Mob &, float, bool, bool);

};
