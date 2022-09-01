/**
 * @file  ResourcePackManager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePackManager.
 *
 */
class ResourcePackManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKMANAGER
public:
    class ResourcePackManager& operator=(class ResourcePackManager const &) = delete;
    ResourcePackManager(class ResourcePackManager const &) = delete;
    ResourcePackManager() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -858402124
     */
    virtual ~ResourcePackManager();
    /**
     * @vftbl  1
     * @symbol ?load@ResourcePackManager@@UEBA_NAEBVResourceLocation@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1979472439
     */
    virtual bool load(class ResourceLocation const &, std::string &) const;
    /**
     * @vftbl  2
     * @symbol ?load@ResourcePackManager@@UEBA_NAEBVResourceLocation@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     * @hash   1101379412
     */
    virtual bool load(class ResourceLocation const &, std::string &, std::vector<std::string> const &) const;
    /**
     * @vftbl  3
     * @symbol ?load@ResourcePackManager@@UEBA_NAEBVResourceLocationPair@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
     * @hash   -1205429046
     */
    virtual bool load(class ResourceLocationPair const &, std::string &, std::vector<std::string> const &) const;
    /**
     * @vftbl  4
     * @symbol ?loadAllVersionsOf@ResourcePackManager@@UEBA?AV?$vector@VLoadedResourceData@@V?$allocator@VLoadedResourceData@@@std@@@std@@AEBVResourceLocation@@@Z
     * @hash   1816440088
     */
    virtual std::vector<class LoadedResourceData> loadAllVersionsOf(class ResourceLocation const &) const;
    /**
     * @vftbl  5
     * @symbol ?isInStreamableLocation@ResourcePackManager@@UEBA_NAEBVResourceLocation@@@Z
     * @hash   -1714936676
     */
    virtual bool isInStreamableLocation(class ResourceLocation const &) const;
    /**
     * @vftbl  6
     * @symbol ?isInStreamableLocation@ResourcePackManager@@UEBA_NAEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -885129271
     */
    virtual bool isInStreamableLocation(class ResourceLocation const &, std::vector<std::string> const &) const;
    /**
     * @vftbl  7
     * @symbol ?getPath@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@@Z
     * @hash   -1902958695
     */
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &) const;
    /**
     * @vftbl  8
     * @symbol ?getPath@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -18431892
     */
    virtual class Core::PathBuffer<std::string> getPath(class ResourceLocation const &, std::vector<std::string> const &) const;
    /**
     * @vftbl  9
     * @symbol ?getPathContainingResource@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@@Z
     * @hash   157094429
     */
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &) const;
    /**
     * @vftbl  10
     * @symbol ?getPathContainingResource@ResourcePackManager@@UEBA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@AEBVResourceLocation@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -1267397158
     */
    virtual class Core::PathBuffer<std::string> getPathContainingResource(class ResourceLocation const &, std::vector<std::string>) const;
    /**
     * @vftbl  11
     * @symbol ?getPackStackIndexOfResource@ResourcePackManager@@UEBA?AU?$pair@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBVResourceLocation@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@@Z
     * @hash   1189035425
     */
    virtual struct std::pair<int, std::string const &> getPackStackIndexOfResource(class ResourceLocation const &, std::vector<std::string> const &) const;
    /**
     * @vftbl  12
     * @symbol ?hasCapability@ResourcePackManager@@UEBA_NV?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   -375261843
     */
    virtual bool hasCapability(class gsl::basic_string_span<char const, -1>) const;
    /**
     * @symbol ??0ResourcePackManager@@QEAA@V?$function@$$A6A?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ@std@@AEBV?$not_null@V?$NonOwnerPointer@$$CBVIContentTierManager@@@Bedrock@@@gsl@@_N@Z
     * @hash   -1700801194
     */
    MCAPI ResourcePackManager(class std::function<class Core::PathBuffer<std::string> (void)>, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentTierManager const>> const &, bool);
    /**
     * @symbol ?clearStack@ResourcePackManager@@QEAAXW4ResourcePackStackType@@_N@Z
     * @hash   -912899647
     */
    MCAPI void clearStack(enum ResourcePackStackType, bool);
    /**
     * @symbol ?composeFullStack@ResourcePackManager@@QEBAHAEAVResourcePackStack@@AEBV2@11@Z
     * @hash   2111185405
     */
    MCAPI int composeFullStack(class ResourcePackStack &, class ResourcePackStack const &, class ResourcePackStack const &, class ResourcePackStack const &) const;
    /**
     * @symbol ?getFullStackMinEngineVersion@ResourcePackManager@@QEBA?AVSemVersion@@XZ
     * @hash   -2134660862
     */
    MCAPI class SemVersion getFullStackMinEngineVersion() const;
    /**
     * @symbol ?getPackSourceReport@ResourcePackManager@@QEBAPEBVPackSourceReport@@XZ
     * @hash   1062202009
     */
    MCAPI class PackSourceReport const * getPackSourceReport() const;
    /**
     * @symbol ?getResourcesOfGroup@ResourcePackManager@@QEBA?AV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   504238993
     */
    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(std::string const &) const;
    /**
     * @symbol ?getResourcesOfGroup@ResourcePackManager@@QEBA?AV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPackInstance@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     * @hash   -229434088
     */
    MCAPI std::vector<class Core::PathBuffer<std::string>> getResourcesOfGroup(class PackInstance const &, std::string const &) const;
    /**
     * @symbol ?getStack@ResourcePackManager@@QEBAAEBVResourcePackStack@@W4ResourcePackStackType@@@Z
     * @hash   1107803889
     */
    MCAPI class ResourcePackStack const & getStack(enum ResourcePackStackType) const;
    /**
     * @symbol ?handlePendingStackChanges@ResourcePackManager@@QEAAXXZ
     * @hash   827969961
     */
    MCAPI void handlePendingStackChanges();
    /**
     * @symbol ?hasResource@ResourcePackManager@@QEBA_NAEBVResourceLocation@@@Z
     * @hash   775686185
     */
    MCAPI bool hasResource(class ResourceLocation const &) const;
    /**
     * @symbol ?loadAllVersionsOf@ResourcePackManager@@QEBA_NAEBVResourceLocation@@AEAVResourcePackMergeStrategy@@@Z
     * @hash   1785635656
     */
    MCAPI bool loadAllVersionsOf(class ResourceLocation const &, class ResourcePackMergeStrategy &) const;
    /**
     * @symbol ?registerResourcePackListener@ResourcePackManager@@QEAAXAEAVResourcePackListener@@@Z
     * @hash   2035958000
     */
    MCAPI void registerResourcePackListener(class ResourcePackListener &);
    /**
     * @symbol ?setPackSourceReport@ResourcePackManager@@QEAAX$$QEAVPackSourceReport@@@Z
     * @hash   -1111702210
     */
    MCAPI void setPackSourceReport(class PackSourceReport &&);
    /**
     * @symbol ?setStack@ResourcePackManager@@QEAA_NV?$unique_ptr@VResourcePackStack@@U?$default_delete@VResourcePackStack@@@std@@@std@@W4ResourcePackStackType@@_N@Z
     * @hash   -613842425
     */
    MCAPI bool setStack(std::unique_ptr<class ResourcePackStack>, enum ResourcePackStackType, bool);
    /**
     * @symbol ?unRegisterResourcePackListener@ResourcePackManager@@QEAAXAEAVResourcePackListener@@@Z
     * @hash   -845971072
     */
    MCAPI void unRegisterResourcePackListener(class ResourcePackListener &);

//private:
    /**
     * @symbol ?_calculateMinEngineVersionFromFullStack@ResourcePackManager@@AEAAXXZ
     * @hash   277490042
     */
    MCAPI void _calculateMinEngineVersionFromFullStack();
    /**
     * @symbol ?_composeFullStack@ResourcePackManager@@AEAAXXZ
     * @hash   767165820
     */
    MCAPI void _composeFullStack();
    /**
     * @symbol ?_getResourcesOfGroup@ResourcePackManager@@AEBAXAEBVPackInstance@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@4@@Z
     * @hash   -2078111352
     */
    MCAPI void _getResourcesOfGroup(class PackInstance const &, std::string const &, std::vector<class Core::PathBuffer<std::string>> &) const;
    /**
     * @symbol ?_updateLanguageSubpacks@ResourcePackManager@@AEAAXXZ
     * @hash   794647216
     */
    MCAPI void _updateLanguageSubpacks();

private:

};