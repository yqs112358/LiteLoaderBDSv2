/**
 * @file  OnIgniteDefinition.hpp
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
 * @brief MC structure OnIgniteDefinition.
 *
 */
struct OnIgniteDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONIGNITEDEFINITION
public:
    struct OnIgniteDefinition& operator=(struct OnIgniteDefinition const &) = delete;
    OnIgniteDefinition(struct OnIgniteDefinition const &) = delete;
    OnIgniteDefinition() = delete;
#endif
public:
    /**
     * @symbol ?buildSchema@OnIgniteDefinition@@SAXAEAV?$shared_ptr@V?$JsonSchemaObjectNode@VEmptyClass@JsonUtil@@UOnIgniteDefinition@@@JsonUtil@@@std@@@Z
     * @hash   947718810
     */
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct OnIgniteDefinition>> &);

};