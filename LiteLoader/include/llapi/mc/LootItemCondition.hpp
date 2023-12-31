/**
 * @file  LootItemCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemCondition.
 *
 */
class LootItemCondition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMCONDITION
public:
    class LootItemCondition& operator=(class LootItemCondition const &) = delete;
    LootItemCondition(class LootItemCondition const &) = delete;
    LootItemCondition() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?applies\@LootItemKilledByPlayerOrPetsCondition\@\@UEAA_NAEAVRandom\@\@AEAVLootTableContext\@\@\@Z
     */
    virtual bool applies(class Random &, class LootTableContext &) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LOOTITEMCONDITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LootItemCondition();
#endif
    /**
     * @symbol ?deserialize\@LootItemCondition\@\@SA?AV?$unique_ptr\@VLootItemCondition\@\@U?$default_delete\@VLootItemCondition\@\@\@std\@\@\@std\@\@VValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class LootItemCondition> deserialize(class Json::Value);

};
