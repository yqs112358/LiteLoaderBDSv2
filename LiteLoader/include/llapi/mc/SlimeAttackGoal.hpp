/**
 * @file  SlimeAttackGoal.hpp
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
 * @brief MC class SlimeAttackGoal.
 *
 */
class SlimeAttackGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEATTACKGOAL
public:
    class SlimeAttackGoal& operator=(class SlimeAttackGoal const &) = delete;
    SlimeAttackGoal(class SlimeAttackGoal const &) = delete;
    SlimeAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SlimeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SlimeAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@SlimeAttackGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 6
     * @symbol ?tick\@SlimeAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@SlimeAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SlimeAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SlimeAttackGoal(class Mob &);

};
