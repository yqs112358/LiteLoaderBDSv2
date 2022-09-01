/**
 * @file  SmeltItemFunction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SmeltItemFunction.
 *
 */
class SmeltItemFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SMELTITEMFUNCTION
public:
    class SmeltItemFunction& operator=(class SmeltItemFunction const &) = delete;
    SmeltItemFunction(class SmeltItemFunction const &) = delete;
    SmeltItemFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -708733812
     */
    virtual ~SmeltItemFunction();
    /**
     * @vftbl  1
     * @symbol ?apply@SmeltItemFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   250412602
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @vftbl  3
     * @symbol ?apply@SmeltItemFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
     * @hash   275119007
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);
    /**
     * @symbol ?deserialize@SmeltItemFunction@@SA?AV?$unique_ptr@VLootItemFunction@@U?$default_delete@VLootItemFunction@@@std@@@std@@VValue@Json@@AEAV?$vector@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@V?$allocator@V?$unique_ptr@VLootItemCondition@@U?$default_delete@VLootItemCondition@@@std@@@std@@@2@@3@@Z
     * @hash   -8224785
     */
    MCAPI static std::unique_ptr<class LootItemFunction> deserialize(class Json::Value, std::vector<std::unique_ptr<class LootItemCondition>> &);

};