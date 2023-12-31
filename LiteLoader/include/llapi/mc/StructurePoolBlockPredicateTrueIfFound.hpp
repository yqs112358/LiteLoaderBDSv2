/**
 * @file  StructurePoolBlockPredicateTrueIfFound.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "IStructurePoolBlockPredicate.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StructurePoolBlockPredicateTrueIfFound.
 *
 */
class StructurePoolBlockPredicateTrueIfFound : public IStructurePoolBlockPredicate {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATETRUEIFFOUND
public:
    class StructurePoolBlockPredicateTrueIfFound& operator=(class StructurePoolBlockPredicateTrueIfFound const &) = delete;
    StructurePoolBlockPredicateTrueIfFound(class StructurePoolBlockPredicateTrueIfFound const &) = delete;
    StructurePoolBlockPredicateTrueIfFound() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateTrueIfFound\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @vftbl 2
     * @symbol ?test\@StructurePoolBlockPredicateTrueIfFound\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    /**
     * @vftbl 3
     * @symbol ?finalize\@IStructurePoolBlockPredicate\@\@UEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@\@Z
     */
    virtual bool finalize(class BlockSource &, class IRandom &);
    /**
     * @symbol ??0StructurePoolBlockPredicateTrueIfFound\@\@QEAA\@AEBV?$set\@PEBVBlock\@\@U?$less\@PEBVBlock\@\@\@std\@\@V?$allocator\@PEBVBlock\@\@\@3\@\@std\@\@M\@Z
     */
    MCAPI StructurePoolBlockPredicateTrueIfFound(class std::set<class Block const *, struct std::less<class Block const *>, class std::allocator<class Block const *>> const &, float);

};
