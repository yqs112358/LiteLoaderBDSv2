/**
 * @file  WrittenBookItem.hpp
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
 * @brief MC class WrittenBookItem.
 *
 */
class WrittenBookItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WRITTENBOOKITEM
public:
    class WrittenBookItem& operator=(class WrittenBookItem const &) = delete;
    WrittenBookItem(class WrittenBookItem const &) = delete;
    WrittenBookItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1596304033
     */
    virtual ~WrittenBookItem();
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
     * @symbol ?isGlint@WrittenBookItem@@MEBA_NAEBVItemStackBase@@@Z
     * @hash   1739697635
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
     * @vftbl  60
     * @symbol ?requiresInteract@WrittenBookItem@@UEBA_NXZ
     * @hash   1907997673
     */
    virtual bool requiresInteract() const;
    /**
     * @vftbl  61
     * @symbol ?appendFormattedHovertext@WrittenBookItem@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   771094956
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
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
     * @vftbl  85
     * @symbol ?use@WrittenBookItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   376958587
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  96
     * @symbol ?buildDescriptionId@WrittenBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   403847639
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  119
     * @symbol ?getInteractText@WrittenBookItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPlayer@@@Z
     * @hash   635281182
     */
    virtual std::string getInteractText(class Player const &) const;
    /**
     * @symbol ??0WrittenBookItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -346747679
     */
    MCAPI WrittenBookItem(std::string const &, int);
MCAPI static int const MAX_GENERATION;
MCAPI static int const MAX_PAGES;
MCAPI static int const MAX_PAGE_LENGTH;
MCAPI static int const MAX_TITLE_LENGTH;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_AUTHOR;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_GENERATION;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_ID;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGES;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_PHOTO_NAME;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_PAGE_TEXT;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_RESOLVED;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_TITLE;
MCAPI static class gsl::basic_string_span<char const, -1> const TAG_XUID;
    /**
     * @symbol ?canBeCopied@WrittenBookItem@@SA_NPEBVCompoundTag@@@Z
     * @hash   1991718342
     */
    MCAPI static bool canBeCopied(class CompoundTag const *);
    /**
     * @symbol ?getGeneration@WrittenBookItem@@SAHPEBVCompoundTag@@@Z
     * @hash   -1220701340
     */
    MCAPI static int getGeneration(class CompoundTag const *);
    /**
     * @symbol ?getPageCount@WrittenBookItem@@SAHAEBVItemStack@@@Z
     * @hash   -367948651
     */
    MCAPI static int getPageCount(class ItemStack const &);
    /**
     * @symbol ?getPages@WrittenBookItem@@SA?AV?$vector@UPageContent@@V?$allocator@UPageContent@@@std@@@std@@AEBVItemStack@@@Z
     * @hash   -168858011
     */
    MCAPI static std::vector<struct PageContent> getPages(class ItemStack const &);

};