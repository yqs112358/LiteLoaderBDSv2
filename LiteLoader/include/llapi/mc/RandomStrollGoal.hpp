/**
 * @file  RandomStrollGoal.hpp
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
 * @brief MC class RandomStrollGoal.
 *
 */
class RandomStrollGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANDOMSTROLLGOAL
public:
    class RandomStrollGoal& operator=(class RandomStrollGoal const &) = delete;
    RandomStrollGoal(class RandomStrollGoal const &) = delete;
    RandomStrollGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@RandomStrollGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@RandomStrollGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 4
     * @symbol ?start\@RandomStrollGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@RandomStrollGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@RandomStrollGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@RandomStrollGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl 10
     * @symbol ?_setWantedPosition\@RandomStrollGoal\@\@MEAA_NXZ
     */
    virtual bool _setWantedPosition();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANDOMSTROLLGOAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RandomStrollGoal();
#endif
    /**
     * @symbol ??0RandomStrollGoal\@\@QEAA\@AEAVMob\@\@MHHH\@Z
     */
    MCAPI RandomStrollGoal(class Mob &, float, int, int, int);

};
