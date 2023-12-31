/**
 * @file  MeleeAttackDefinition.hpp
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
 * @brief MC class MeleeAttackDefinition.
 *
 */
class MeleeAttackDefinition : public BaseGoalDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MELEEATTACKDEFINITION
public:
    class MeleeAttackDefinition& operator=(class MeleeAttackDefinition const &) = delete;
    MeleeAttackDefinition(class MeleeAttackDefinition const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MELEEATTACKDEFINITION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MeleeAttackDefinition();
#endif
    /**
     * @symbol ??0MeleeAttackDefinition\@\@QEAA\@XZ
     */
    MCAPI MeleeAttackDefinition();
    /**
     * @symbol ?initialize\@MeleeAttackDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVMeleeAttackGoal\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class MeleeAttackGoal &) const;
    /**
     * @symbol ?buildSchema\@MeleeAttackDefinition\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VMeleeAttackDefinition\@\@\@JsonUtil\@\@\@3\@\@Z
     */
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class MeleeAttackDefinition>> &);

};
