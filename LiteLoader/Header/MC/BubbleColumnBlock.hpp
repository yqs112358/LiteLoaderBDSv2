// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BubbleColumnBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUBBLECOLUMNBLOCK
public:
    class BubbleColumnBlock& operator=(class BubbleColumnBlock const &) = delete;
    BubbleColumnBlock(class BubbleColumnBlock const &) = delete;
    BubbleColumnBlock() = delete;
#endif

public:
    /*0*/ virtual ~BubbleColumnBlock();
    /*5*/ virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /*10*/ virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /*11*/ virtual bool addCollisionShapes(class Block const &, class BlockSource &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /*19*/ virtual void __unk_vfn_19();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual bool canContainLiquid() const;
    /*66*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*81*/ virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const *) const;
    /*87*/ virtual bool mayPick(class BlockSource const &, class Block const &, bool) const;
    /*97*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*99*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*112*/ virtual void entityInside(class BlockSource &, class BlockPos const &, class Actor &) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*141*/ virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const &);
    /*148*/ virtual void __unk_vfn_148();
    /*152*/ virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*181*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*184*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*187*/ virtual void __unk_vfn_187();
    /*190*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*199*/ virtual void __unk_vfn_199();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUBBLECOLUMNBLOCK
#endif
    MCAPI BubbleColumnBlock(std::string const &, int);
    MCAPI static bool addBubbleColumnSegment(class BlockSource &, class BlockPos const &);
    MCAPI static void spawnBubbles(class BlockSource &, class BlockPos const &);

protected:

private:
    MCAPI static void createParticles(class BlockSource &, class BlockPos const &, class Random &, bool);
    MCAPI static bool getFlowDownward(class Block const &);

};