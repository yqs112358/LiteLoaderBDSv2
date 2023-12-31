/**
 * @file  LootItemKilledByPlayerOrPetsCondition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "LootItemCondition.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LootItemKilledByPlayerOrPetsCondition.
 *
 */
class LootItemKilledByPlayerOrPetsCondition : public LootItemCondition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOTITEMKILLEDBYPLAYERORPETSCONDITION
public:
    class LootItemKilledByPlayerOrPetsCondition& operator=(class LootItemKilledByPlayerOrPetsCondition const &) = delete;
    LootItemKilledByPlayerOrPetsCondition(class LootItemKilledByPlayerOrPetsCondition const &) = delete;
    LootItemKilledByPlayerOrPetsCondition() = delete;
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
    virtual bool applies(class Random &, class LootTableContext &);

};
