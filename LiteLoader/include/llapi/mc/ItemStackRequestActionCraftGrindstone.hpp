/**
 * @file  ItemStackRequestActionCraftGrindstone.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackRequestActionCraftGrindstone.
 *
 */
class ItemStackRequestActionCraftGrindstone {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKREQUESTACTIONCRAFTGRINDSTONE
public:
    class ItemStackRequestActionCraftGrindstone& operator=(class ItemStackRequestActionCraftGrindstone const &) = delete;
    ItemStackRequestActionCraftGrindstone(class ItemStackRequestActionCraftGrindstone const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getCraftAction\@ItemStackRequestActionCraftBase\@\@UEBAPEBV1\@XZ
     */
    virtual class ItemStackRequestActionCraftBase const * getCraftAction() const;
    /**
     * @vftbl 2
     * @symbol ?getFilteredStringIndex\@ItemStackRequestAction\@\@UEBAHXZ
     */
    virtual int getFilteredStringIndex() const;
    /**
     * @vftbl 3
     * @symbol ?postLoadItems_DEPRECATEDASKTYLAING\@ItemStackRequestActionCraftBase\@\@UEAAXAEAVBlockPalette\@\@_N\@Z
     */
    virtual void postLoadItems_DEPRECATEDASKTYLAING(class BlockPalette &, bool);
    /**
     * @vftbl 4
     * @symbol ?_write\@ItemStackRequestActionCraftGrindstone\@\@UEBAXAEAVBinaryStream\@\@\@Z
     */
    virtual void _write(class BinaryStream &) const;
    /**
     * @vftbl 5
     * @symbol ?_read\@ItemStackRequestActionCraftGrindstone\@\@UEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    virtual class Bedrock::Result<void, class std::error_code> _read(class ReadOnlyBinaryStream &);
    /**
     * @vftbl 6
     * @symbol ?getRecipeNetId\@ItemStackRequestActionCraftGrindstone\@\@UEBAAEBUItemStackNetIdVariant\@\@XZ
     */
    virtual struct ItemStackNetIdVariant const & getRecipeNetId() const;
    /**
     * @symbol ??0ItemStackRequestActionCraftGrindstone\@\@QEAA\@XZ
     */
    MCAPI ItemStackRequestActionCraftGrindstone();

};
