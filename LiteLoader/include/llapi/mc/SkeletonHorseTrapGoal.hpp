/**
 * @file  SkeletonHorseTrapGoal.hpp
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
 * @brief MC class SkeletonHorseTrapGoal.
 *
 */
class SkeletonHorseTrapGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SKELETONHORSETRAPGOAL
public:
    class SkeletonHorseTrapGoal& operator=(class SkeletonHorseTrapGoal const &) = delete;
    SkeletonHorseTrapGoal(class SkeletonHorseTrapGoal const &) = delete;
    SkeletonHorseTrapGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SkeletonHorseTrapGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 4
     * @symbol ?start\@SkeletonHorseTrapGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 6
     * @symbol ?tick\@SkeletonHorseTrapGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@SkeletonHorseTrapGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0SkeletonHorseTrapGoal\@\@QEAA\@AEAVHorse\@\@HM\@Z
     */
    MCAPI SkeletonHorseTrapGoal(class Horse &, int, float);

//private:
    /**
     * @symbol ?_createHorse\@SkeletonHorseTrapGoal\@\@AEAAPEAVHorse\@\@AEBW4Difficulty\@\@\@Z
     */
    MCAPI class Horse * _createHorse(enum class Difficulty const &);
    /**
     * @symbol ?_createSkeleton\@SkeletonHorseTrapGoal\@\@AEAAPEAVSkeleton\@\@AEBW4Difficulty\@\@AEBVHorse\@\@\@Z
     */
    MCAPI class Skeleton * _createSkeleton(enum class Difficulty const &, class Horse const &);

private:

};
