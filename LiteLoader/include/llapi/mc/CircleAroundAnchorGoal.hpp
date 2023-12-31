/**
 * @file  CircleAroundAnchorGoal.hpp
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
 * @brief MC class CircleAroundAnchorGoal.
 *
 */
class CircleAroundAnchorGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCLEAROUNDANCHORGOAL
public:
    class CircleAroundAnchorGoal& operator=(class CircleAroundAnchorGoal const &) = delete;
    CircleAroundAnchorGoal(class CircleAroundAnchorGoal const &) = delete;
    CircleAroundAnchorGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@CircleAroundAnchorGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 4
     * @symbol ?start\@CircleAroundAnchorGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@CircleAroundAnchorGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@CircleAroundAnchorGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@CircleAroundAnchorGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0CircleAroundAnchorGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI CircleAroundAnchorGoal(class Mob &);

//private:
    /**
     * @symbol ?_calculateHeightOffset\@CircleAroundAnchorGoal\@\@AEBAMXZ
     */
    MCAPI float _calculateHeightOffset() const;
    /**
     * @symbol ?_selectNext\@CircleAroundAnchorGoal\@\@AEAAXXZ
     */
    MCAPI void _selectNext();
    /**
     * @symbol ?_setAnchorAboveTarget\@CircleAroundAnchorGoal\@\@AEAAXXZ
     */
    MCAPI void _setAnchorAboveTarget();

private:

};
