/**
 * @file  RepeatUntilSuccessNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BehaviorNode.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RepeatUntilSuccessNode.
 *
 */
class RepeatUntilSuccessNode : public BehaviorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATUNTILSUCCESSNODE
public:
    class RepeatUntilSuccessNode& operator=(class RepeatUntilSuccessNode const &) = delete;
    RepeatUntilSuccessNode(class RepeatUntilSuccessNode const &) = delete;
    RepeatUntilSuccessNode() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@RepeatUntilSuccessNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@RepeatUntilSuccessNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);

};
