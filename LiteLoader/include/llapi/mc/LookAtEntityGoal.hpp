/**
 * @file  LookAtEntityGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "LookAtActorGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LookAtEntityGoal.
 *
 */
class LookAtEntityGoal : public LookAtActorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATENTITYGOAL
public:
    class LookAtEntityGoal& operator=(class LookAtEntityGoal const &) = delete;
    LookAtEntityGoal(class LookAtEntityGoal const &) = delete;
    LookAtEntityGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();

};
