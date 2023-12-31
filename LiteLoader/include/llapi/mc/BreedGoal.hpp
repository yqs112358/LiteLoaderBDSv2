/**
 * @file  BreedGoal.hpp
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
 * @brief MC class BreedGoal.
 *
 */
class BreedGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREEDGOAL
public:
    class BreedGoal& operator=(class BreedGoal const &) = delete;
    BreedGoal(class BreedGoal const &) = delete;
    BreedGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@BreedGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@BreedGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 5
     * @symbol ?stop\@BreedGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@BreedGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@BreedGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0BreedGoal\@\@QEAA\@AEAVMob\@\@M\@Z
     */
    MCAPI BreedGoal(class Mob &, float);

//private:
    /**
     * @symbol ?_breed\@BreedGoal\@\@AEAAXXZ
     */
    MCAPI void _breed();
    /**
     * @symbol ?_isCloseEnoughToBreed\@BreedGoal\@\@AEBA_NVVec3\@\@VVec2\@\@01\@Z
     */
    MCAPI bool _isCloseEnoughToBreed(class Vec3, class Vec2, class Vec3, class Vec2) const;
    /**
     * @symbol ?_moveToFreePartner\@BreedGoal\@\@AEBAPEAVMob\@\@XZ
     */
    MCAPI class Mob * _moveToFreePartner() const;

private:

};
