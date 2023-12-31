/**
 * @file  StructurePoolBlockPredicateAxisAlignedPosition.hpp
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
 * @brief MC class StructurePoolBlockPredicateAxisAlignedPosition.
 *
 */
class StructurePoolBlockPredicateAxisAlignedPosition : public IStructurePoolBlockPredicate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEAXISALIGNEDPOSITION
public:
    class StructurePoolBlockPredicateAxisAlignedPosition& operator=(class StructurePoolBlockPredicateAxisAlignedPosition const &) = delete;
    StructurePoolBlockPredicateAxisAlignedPosition(class StructurePoolBlockPredicateAxisAlignedPosition const &) = delete;
    StructurePoolBlockPredicateAxisAlignedPosition() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?test\@StructurePoolBlockPredicateAxisAlignedPosition\@\@UEBA_NAEBVBlock\@\@AEAVRandomize\@\@\@Z
     */
    virtual bool test(class Block const &, class Randomize &) const;
    /**
     * @vftbl 2
     * @symbol ?test\@StructurePoolBlockPredicateAxisAlignedPosition\@\@UEBA_NAEBVBlockPos\@\@0AEAVRandomize\@\@\@Z
     */
    virtual bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    /**
     * @vftbl 3
     * @symbol ?finalize\@IStructurePoolBlockPredicate\@\@UEAA_NAEAVBlockSource\@\@AEAVIRandom\@\@\@Z
     */
    virtual bool finalize(class BlockSource &, class IRandom &);
    /**
     * @symbol ??0StructurePoolBlockPredicateAxisAlignedPosition\@\@QEAA\@MMHHE\@Z
     */
    MCAPI StructurePoolBlockPredicateAxisAlignedPosition(float, float, int, int, unsigned char);

};
