/**
 * @file  SwimWanderDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "JsonUtil.hpp"
#include "BaseGoalDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SwimWanderDefinition.
 *
 */
class SwimWanderDefinition : public BaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SWIMWANDERDEFINITION
public:
    class SwimWanderDefinition& operator=(class SwimWanderDefinition const &) = delete;
    SwimWanderDefinition(class SwimWanderDefinition const &) = delete;
    SwimWanderDefinition() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @symbol ?buildSchema\@SwimWanderDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VSwimWanderDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SwimWanderDefinition>> &);

};
