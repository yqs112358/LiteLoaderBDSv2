/**
 * @file  MoveTowardsRestrictionDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BaseGoalDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveTowardsRestrictionDefinition.
 *
 */
class MoveTowardsRestrictionDefinition : public BaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSRESTRICTIONDEFINITION
public:
    class MoveTowardsRestrictionDefinition& operator=(class MoveTowardsRestrictionDefinition const &) = delete;
    MoveTowardsRestrictionDefinition(class MoveTowardsRestrictionDefinition const &) = delete;
    MoveTowardsRestrictionDefinition() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ?initialize\@MoveTowardsRestrictionDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVMoveTowardsRestrictionGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class MoveTowardsRestrictionGoal &) const;

};
