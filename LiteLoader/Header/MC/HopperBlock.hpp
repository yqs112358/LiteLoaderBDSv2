// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class HopperBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HOPPERBLOCK
public:
    class HopperBlock& operator=(class HopperBlock const &) = delete;
    HopperBlock(class HopperBlock const &) = delete;
    HopperBlock() = delete;
#endif


public:
    /*0*/ virtual ~HopperBlock();
    /*9*/ virtual void addAABBs(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &) const;
    /*11*/ virtual bool addCollisionShapes(class Block const &, class BlockSource const &, class BlockPos const &, class AABB const *, std::vector<class AABB> &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /*19*/ virtual void __unk_vfn_19();
    /*22*/ virtual bool canProvideSupport(class Block const &, unsigned char, enum BlockSupportType) const;
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void __unk_vfn_60();
    /*71*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*73*/ virtual void __unk_vfn_73();
    /*77*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*78*/ virtual enum BlockProperty getRedstoneProperty(class BlockSource &, class BlockPos const &) const;
    /*80*/ virtual void __unk_vfn_80();
    /*94*/ virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /*101*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*102*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*106*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*128*/ virtual int getComparatorSignal(class BlockSource &, class BlockPos const &, class Block const &, unsigned char) const;
    /*132*/ virtual void __unk_vfn_132();
    /*148*/ virtual void __unk_vfn_148();
    /*157*/ virtual void __unk_vfn_157();
    /*165*/ virtual void onRemove(class BlockSource &, class BlockPos const &) const;
    /*168*/ virtual void __unk_vfn_168();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*171*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*177*/ virtual void __unk_vfn_177();
    /*178*/ virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /*179*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*188*/ virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HOPPERBLOCK
    MCVAPI bool hasComparatorSignal() const;
    MCVAPI bool isContainerBlock() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI HopperBlock(std::string const &, int);
    MCAPI static class BlockPos getAttachedOffset(unsigned char);

//private:
    MCAPI class AABB _getSpoutAABB(class BlockSource const &, class BlockPos const &) const;
    MCAPI void _installCircuit(class BlockSource &, class BlockPos const &) const;


private:
    MCAPI static class BaseGameVersion const HOPPER_DOESNT_BREAK_FALLING_BLOCK_VERSION;


};