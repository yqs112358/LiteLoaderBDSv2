/**
 * @file  EnchantedBookItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnchantedBookItem.
 *
 */
class EnchantedBookItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCHANTEDBOOKITEM
public:
    class EnchantedBookItem& operator=(class EnchantedBookItem const &) = delete;
    EnchantedBookItem(class EnchantedBookItem const &) = delete;
    EnchantedBookItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1451599426
     */
    virtual ~EnchantedBookItem();
    /**
     * @vftbl  7
     * @hash   -1353918777
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -332277273
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -330430231
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @symbol ?isGlint@EnchantedBookItem@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   381892637
     */
    virtual bool isGlint(class ItemStackBase const &) const;
    /**
     * @vftbl  52
     * @hash   -219607711
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @hash   -217760669
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  63
     * @symbol ?getEnchantSlot@EnchantedBookItem@@UEBAHXZ
     * @hash   -622149816
     */
    virtual int getEnchantSlot() const;
    /**
     * @vftbl  64
     * @symbol ?getEnchantValue@EnchantedBookItem@@UEBAHXZ
     * @hash   -2039232475
     */
    virtual int getEnchantValue() const;
    /**
     * @vftbl  67
     * @hash   -186360955
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  71
     * @hash   -163272930
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -162349409
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @hash   -158655325
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @hash   -1115441236
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @hash   -1114517715
     */
    virtual void __unk_vfn_81();
    /**
     * @symbol ??0EnchantedBookItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_N@Z
     * @hash   116854717
     */
    MCAPI EnchantedBookItem(std::string const &, int, bool);

};