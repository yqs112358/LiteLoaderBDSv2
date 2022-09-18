/**
 * @file  FishingEnchant.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FishingEnchant.
 *
 */
class FishingEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHINGENCHANT
public:
    class FishingEnchant& operator=(class FishingEnchant const &) = delete;
    FishingEnchant(class FishingEnchant const &) = delete;
    FishingEnchant() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   681800121
     */
    virtual ~FishingEnchant();
    /**
     * @vftbl  2
     * @symbol ?getMinCost@FishingEnchant@@UEBAHH@Z
     * @hash   1074861880
     */
    virtual int getMinCost(int) const;
    /**
     * @vftbl  3
     * @symbol ?getMaxCost@FishingEnchant@@UEBAHH@Z
     * @hash   315897110
     */
    virtual int getMaxCost(int) const;
    /**
     * @vftbl  5
     * @symbol ?getMaxLevel@FishingEnchant@@UEBAHXZ
     * @hash   -846014494
     */
    virtual int getMaxLevel() const;
    /**
     * @vftbl  10
     * @hash   -342706045
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @hash   -335047836
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @hash   -334124315
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @hash   -333200794
     */
    virtual void __unk_vfn_13();
    /**
     * @symbol ??0FishingEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_span@$$CBD$0?0@gsl@@2HH@Z
     * @hash   -1356093350
     */
    MCAPI FishingEnchant(enum class Enchant::Type, enum class Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

};