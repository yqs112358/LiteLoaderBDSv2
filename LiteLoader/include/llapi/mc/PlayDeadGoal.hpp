/**
 * @file  PlayDeadGoal.hpp
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
 * @brief MC class PlayDeadGoal.
 *
 */
class PlayDeadGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYDEADGOAL
public:
    class PlayDeadGoal& operator=(class PlayDeadGoal const &) = delete;
    PlayDeadGoal(class PlayDeadGoal const &) = delete;
    PlayDeadGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@PlayDeadGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@PlayDeadGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@PlayDeadGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@PlayDeadGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@PlayDeadGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0PlayDeadGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI PlayDeadGoal(class Mob &);

};
