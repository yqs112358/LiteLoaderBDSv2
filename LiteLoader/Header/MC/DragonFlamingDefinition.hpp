// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DragonFlamingDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONFLAMINGDEFINITION
public:
    class DragonFlamingDefinition& operator=(class DragonFlamingDefinition const &) = delete;
    DragonFlamingDefinition(class DragonFlamingDefinition const &) = delete;
#endif

public:
    /*0*/ virtual ~DragonFlamingDefinition();
    /*1*/ virtual bool validateMobType(class Mob &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONFLAMINGDEFINITION
#endif
    MCAPI DragonFlamingDefinition();
    MCAPI void initialize(class EntityContext &, class DragonFlamingGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class DragonFlamingDefinition>> &);

protected:

private:

};