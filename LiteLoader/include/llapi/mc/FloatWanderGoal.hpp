/**
 * @file  FloatWanderGoal.hpp
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
 * @brief MC class FloatWanderGoal.
 *
 */
class FloatWanderGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOATWANDERGOAL
public:
    class FloatWanderGoal& operator=(class FloatWanderGoal const &) = delete;
    FloatWanderGoal(class FloatWanderGoal const &) = delete;
    FloatWanderGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@FloatWanderGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 6
     * @symbol ?tick\@FloatWanderGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@FloatWanderGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0FloatWanderGoal\@\@QEAA\@AEAVMob\@\@MMM_N1UFloatRange\@\@\@Z
     */
    MCAPI FloatWanderGoal(class Mob &, float, float, float, bool, bool, struct FloatRange);

//private:
    /**
     * @symbol ?_canReach\@FloatWanderGoal\@\@AEAA_NAEBVVec3\@\@M\@Z
     */
    MCAPI bool _canReach(class Vec3 const &, float);

private:

};
