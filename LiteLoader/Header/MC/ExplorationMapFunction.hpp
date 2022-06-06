// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ExplorationMapFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLORATIONMAPFUNCTION
public:
    class ExplorationMapFunction& operator=(class ExplorationMapFunction const &) = delete;
    ExplorationMapFunction(class ExplorationMapFunction const &) = delete;
    ExplorationMapFunction() = delete;
#endif

public:
    /*0*/ virtual ~ExplorationMapFunction();
    /*1*/ virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /*3*/ virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXPLORATIONMAPFUNCTION
#endif
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

protected:

private:

};