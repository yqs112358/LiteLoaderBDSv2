// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"
#include "DiggerItem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ShovelItem : public DiggerItem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOVELITEM
public:
    class ShovelItem& operator=(class ShovelItem const &) = delete;
    ShovelItem(class ShovelItem const &) = delete;
    ShovelItem() = delete;
#endif


public:
    /*0*/ virtual ~ShovelItem();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*45*/ virtual bool canDestroySpecial(class Block const &) const;
    /*52*/ virtual void __unk_vfn_52();
    /*54*/ virtual void __unk_vfn_54();
    /*63*/ virtual int getEnchantSlot() const;
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*136*/ virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHOVELITEM
#endif
    MCAPI ShovelItem(std::string const &, int, class Item::Tier const &);



};