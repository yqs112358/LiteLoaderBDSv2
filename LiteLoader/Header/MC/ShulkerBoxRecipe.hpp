/**
 * @file  ShulkerBoxRecipe.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ShapelessRecipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShulkerBoxRecipe.
 *
 */
class ShulkerBoxRecipe : public ShapelessRecipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBOXRECIPE
public:
    class ShulkerBoxRecipe& operator=(class ShulkerBoxRecipe const &) = delete;
    ShulkerBoxRecipe(class ShulkerBoxRecipe const &) = delete;
    ShulkerBoxRecipe() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1549018569
     */
    virtual ~ShulkerBoxRecipe();
    /**
     * @vftbl  1
     * @symbol ?assemble@ShulkerBoxRecipe@@UEBAAEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@AEAVCraftingContainer@@@Z
     * @hash   1746881515
     */
    virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /**
     * @vftbl  12
     * @symbol ?itemsMatch@ShulkerBoxRecipe@@UEBA_NAEBVItemDescriptor@@0@Z
     * @hash   1411723512
     */
    virtual bool itemsMatch(class ItemDescriptor const &, class ItemDescriptor const &) const;
    /**
     * @vftbl  14
     * @symbol ?itemsMatch@ShulkerBoxRecipe@@UEBA_NAEBVItemDescriptor@@HHPEBVCompoundTag@@@Z
     * @hash   -1074138233
     */
    virtual bool itemsMatch(class ItemDescriptor const &, int, int, class CompoundTag const *) const;
    /**
     * @symbol ??0ShulkerBoxRecipe@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@AEBV?$vector@VRecipeIngredient@@V?$allocator@VRecipeIngredient@@@std@@@std@@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@4@VHashedString@@HPEBVUUID@mce@@@Z
     * @hash   -1622148209
     */
    MCAPI ShulkerBoxRecipe(class gsl::basic_string_span<char const, -1>, std::vector<class RecipeIngredient> const &, std::vector<class ItemInstance> const &, class HashedString, int, class mce::UUID const *);
MCAPI static class mce::UUID const ID;

};