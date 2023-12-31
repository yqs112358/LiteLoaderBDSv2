/**
 * @file  WaitTicksNode.hpp
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
 * @brief MC class WaitTicksNode.
 *
 */
class WaitTicksNode : public BehaviorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITTICKSNODE
public:
    class WaitTicksNode& operator=(class WaitTicksNode const &) = delete;
    WaitTicksNode(class WaitTicksNode const &) = delete;
    WaitTicksNode() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@WaitTicksNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@WaitTicksNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);

};
