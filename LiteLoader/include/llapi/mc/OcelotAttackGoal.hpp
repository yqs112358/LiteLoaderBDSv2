/**
 * @file  OcelotAttackGoal.hpp
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
 * @brief MC class OcelotAttackGoal.
 *
 */
class OcelotAttackGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCELOTATTACKGOAL
public:
    class OcelotAttackGoal& operator=(class OcelotAttackGoal const &) = delete;
    OcelotAttackGoal(class OcelotAttackGoal const &) = delete;
    OcelotAttackGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@OcelotAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@OcelotAttackGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 5
     * @symbol ?stop\@OcelotAttackGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@OcelotAttackGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@OcelotAttackGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0OcelotAttackGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI OcelotAttackGoal(class Mob &);

};
