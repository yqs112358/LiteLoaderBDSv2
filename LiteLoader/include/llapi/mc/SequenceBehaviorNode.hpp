/**
 * @file  SequenceBehaviorNode.hpp
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
 * @brief MC class SequenceBehaviorNode.
 *
 */
class SequenceBehaviorNode : public BehaviorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEQUENCEBEHAVIORNODE
public:
    class SequenceBehaviorNode& operator=(class SequenceBehaviorNode const &) = delete;
    SequenceBehaviorNode(class SequenceBehaviorNode const &) = delete;
    SequenceBehaviorNode() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@SequenceBehaviorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@SequenceBehaviorNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);

};
