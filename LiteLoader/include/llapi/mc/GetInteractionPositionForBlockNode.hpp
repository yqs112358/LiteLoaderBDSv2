/**
 * @file  GetInteractionPositionForBlockNode.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Facing.hpp"
#include "BehaviorNode.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class GetInteractionPositionForBlockNode.
 *
 */
class GetInteractionPositionForBlockNode : public BehaviorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETINTERACTIONPOSITIONFORBLOCKNODE
public:
    class GetInteractionPositionForBlockNode& operator=(class GetInteractionPositionForBlockNode const &) = delete;
    GetInteractionPositionForBlockNode(class GetInteractionPositionForBlockNode const &) = delete;
    GetInteractionPositionForBlockNode() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@GetInteractionPositionForBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor &);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@GetInteractionPositionForBlockNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor &);

//private:
    /**
     * @symbol ?parseFacingNameFromString\@GetInteractionPositionForBlockNode\@\@AEAA?AW4Name\@Facing\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class Facing::Name parseFacingNameFromString(std::string);

private:

};
