/**
 * @file  StructurePoolBlockPredicateBlockMatchRandom.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "IStructurePoolBlockPredicate.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockPredicateBlockMatchRandom.
 *
 */
class StructurePoolBlockPredicateBlockMatchRandom : public IStructurePoolBlockPredicate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEBLOCKMATCHRANDOM
public:
    class StructurePoolBlockPredicateBlockMatchRandom& operator=(class StructurePoolBlockPredicateBlockMatchRandom const &) = delete;
    StructurePoolBlockPredicateBlockMatchRandom(class StructurePoolBlockPredicateBlockMatchRandom const &) = delete;
    StructurePoolBlockPredicateBlockMatchRandom() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateBlockMatchRandom\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @vftbl 2
     * @symbol ?test\@StructurePoolBlockPredicateBlockMatchRandom\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    /**
     * @vftbl 3
     * @symbol ?finalize\@IStructurePoolBlockPredicate\@\@UEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@\@Z
     */
    virtual bool finalize(class BlockSource &, class IRandom &);
    /**
     * @symbol ??0StructurePoolBlockPredicateBlockMatchRandom\@\@QEAA\@AEBVBlock\@\@M\@Z
     */
    MCAPI StructurePoolBlockPredicateBlockMatchRandom(class Block const &, float);

};
