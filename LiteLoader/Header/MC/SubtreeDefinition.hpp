/**
 * @file  SubtreeDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BehaviorDefinition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SubtreeDefinition.
 *
 */
class SubtreeDefinition : public BehaviorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBTREEDEFINITION
public:
    class SubtreeDefinition& operator=(class SubtreeDefinition const &) = delete;
    SubtreeDefinition(class SubtreeDefinition const &) = delete;
    SubtreeDefinition() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2022520095
     */
    virtual ~SubtreeDefinition();
    /**
     * @vftbl  1
     * @symbol ?load@SubtreeDefinition@@UEAAXVValue@Json@@AEBVBehaviorFactory@@@Z
     * @hash   263026259
     */
    virtual void load(class Json::Value, class BehaviorFactory const &);

};