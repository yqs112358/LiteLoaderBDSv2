/**
 * @file  IsChargedDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure IsChargedDefinition.
 *
 */
struct IsChargedDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ISCHARGEDDEFINITION
public:
    struct IsChargedDefinition& operator=(struct IsChargedDefinition const &) = delete;
    IsChargedDefinition(struct IsChargedDefinition const &) = delete;
    IsChargedDefinition() = delete;
#endif
public:
    /**
     * @symbol ?initialize@IsChargedDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   1610622
     */
    MCAPI void initialize(class EntityContext &);
    /**
     * @symbol ?uninitialize@IsChargedDefinition@@QEAAXAEAVEntityContext@@@Z
     * @hash   -1739595012
     */
    MCAPI void uninitialize(class EntityContext &);
    /**
     * @symbol ?buildSchema@IsChargedDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UIsChargedDefinition@@@JsonUtil@@@std@@@Z
     * @hash   -743495808
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsChargedDefinition>> &);

};