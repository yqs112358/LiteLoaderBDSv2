/**
 * @file  ResourcePackRepository.hpp
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
 * @brief MC class ResourcePackRepository.
 *
 */
class ResourcePackRepository {

#define AFTER_EXTRA
// Add Member There
public:
struct KnownPackContainer {
    KnownPackContainer() = delete;
    KnownPackContainer(KnownPackContainer const&) = delete;
    KnownPackContainer(KnownPackContainer const&&) = delete;
};
LIAPI void setCustomResourcePackPath(PackType, const std::string& path);

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKREPOSITORY
public:
    class ResourcePackRepository& operator=(class ResourcePackRepository const &) = delete;
    ResourcePackRepository(class ResourcePackRepository const &) = delete;
    ResourcePackRepository() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1039425083
     */
    virtual ~ResourcePackRepository();
    /**
     * @vftbl  1
     * @symbol ?getResourcePacksByPackId@ResourcePackRepository@@UEBAXAEBV?$vector@UPackInstanceId@@V?$allocator@UPackInstanceId@@@std@@@std@@AEAV?$vector@VPackInstance@@V?$allocator@VPackInstance@@@std@@@3@@Z
     * @hash   -2101778823
     */
    virtual void getResourcePacksByPackId(std::vector<struct PackInstanceId> const &, std::vector<class PackInstance> &) const;
    /**
     * @vftbl  2
     * @symbol ?getResourcePackForPackId@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
     * @hash   1849012802
     */
    virtual class ResourcePack * getResourcePackForPackId(struct PackIdVersion const &) const;
    /**
     * @vftbl  3
     * @symbol ?getResourcePackByUUID@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBVUUID@mce@@@Z
     * @hash   -1928026222
     */
    virtual class ResourcePack * getResourcePackByUUID(class mce::UUID const &) const;
    /**
     * @vftbl  4
     * @symbol ?getResourcePackForPackIdOwned@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
     * @hash   -1630994355
     */
    virtual class ResourcePack * getResourcePackForPackIdOwned(struct PackIdVersion const &) const;
    /**
     * @vftbl  5
     * @symbol ?getResourcePackSatisfiesPackId@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@_N@Z
     * @hash   2061431296
     */
    virtual class ResourcePack * getResourcePackSatisfiesPackId(struct PackIdVersion const &, bool) const;
    /**
     * @vftbl  6
     * @symbol ?getResourcePackContainingModule@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBUPackIdVersion@@@Z
     * @hash   -1625225509
     */
    virtual class ResourcePack * getResourcePackContainingModule(struct PackIdVersion const &) const;
    /**
     * @vftbl  7
     * @symbol ?getResourcePackInPath@ResourcePackRepository@@UEBAPEAVResourcePack@@AEBVPath@Core@@@Z
     * @hash   -32011208
     */
    virtual class ResourcePack * getResourcePackInPath(class Core::Path const &) const;
    /**
     * @vftbl  8
     * @symbol ?isResourcePackLoaded@ResourcePackRepository@@UEAA_NAEBUPackIdVersion@@AEBW4PackOrigin@@@Z
     * @hash   -1132578199
     */
    virtual bool isResourcePackLoaded(struct PackIdVersion const &, enum PackOrigin const &);
    /**
     * @vftbl  9
     * @symbol ?getPackLoadingReport@ResourcePackRepository@@UEBAPEBVPackSourceReport@@XZ
     * @hash   2110261969
     */
    virtual class PackSourceReport const * getPackLoadingReport() const;
    /**
     * @vftbl  10
     * @symbol ?getVanillaPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
     * @hash   1802219922
     */
    virtual class ResourcePack * getVanillaPack() const;
    /**
     * @vftbl  11
     * @symbol ?getChemistryPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
     * @hash   1801298043
     */
    virtual class ResourcePack * getChemistryPack() const;
    /**
     * @vftbl  12
     * @symbol ?getChemistryServerPack@ResourcePackRepository@@UEBAPEAVResourcePack@@XZ
     * @hash   147052446
     */
    virtual class ResourcePack * getChemistryServerPack() const;
    /**
     * @vftbl  13
     * @symbol ?setServicePacks@ResourcePackRepository@@UEAA_NV?$vector@UPackIdVersion@@V?$allocator@UPackIdVersion@@@std@@@std@@@Z
     * @hash   -659320558
     */
    virtual bool setServicePacks(std::vector<struct PackIdVersion>);
    /**
     * @vftbl  14
     * @symbol ?addServicePacksToStack@ResourcePackRepository@@UEBAXAEAVResourcePackStack@@@Z
     * @hash   2002862877
     */
    virtual void addServicePacksToStack(class ResourcePackStack &) const;
    /**
     * @vftbl  15
     * @symbol ?addCachedResourcePacks@ResourcePackRepository@@UEAAXPEBV?$unordered_map@VContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@VContentIdentity@@@3@U?$equal_to@VContentIdentity@@@3@V?$allocator@U?$pair@$$CBVContentIdentity@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@3@@std@@@Z
     * @hash   -558063961
     */
    virtual void addCachedResourcePacks(class std::unordered_map<class ContentIdentity, std::string, struct std::hash<class ContentIdentity>, struct std::equal_to<class ContentIdentity>, class std::allocator<struct std::pair<class ContentIdentity const, std::string>>> const *);
    /**
     * @vftbl  16
     * @symbol ?addWorldResourcePacks@ResourcePackRepository@@UEAAXAEBVPath@Core@@@Z
     * @hash   262671876
     */
    virtual void addWorldResourcePacks(class Core::Path const &);
    /**
     * @vftbl  17
     * @symbol ?addPremiumWorldTemplateResourcePacks@ResourcePackRepository@@UEAAXAEBVPath@Core@@AEBVContentIdentity@@@Z
     * @hash   1684182409
     */
    virtual void addPremiumWorldTemplateResourcePacks(class Core::Path const &, class ContentIdentity const &);
    /**
     * @vftbl  18
     * @symbol ?removePacksLoadedFromCache@ResourcePackRepository@@UEAAXXZ
     * @hash   1872574611
     */
    virtual void removePacksLoadedFromCache();
    /**
     * @vftbl  19
     * @symbol ?removePacksLoadedFromWorld@ResourcePackRepository@@UEAAXXZ
     * @hash   286585939
     */
    virtual void removePacksLoadedFromWorld();
    /**
     * @vftbl  20
     * @symbol ?getResourcePacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -1952012395
     */
    virtual class Core::PathBuffer<std::string> const getResourcePacksPath() const;
    /**
     * @vftbl  21
     * @symbol ?getBehaviorPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -2017782815
     */
    virtual class Core::PathBuffer<std::string> const getBehaviorPacksPath() const;
    /**
     * @vftbl  22
     * @symbol ?getSkinPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -67997002
     */
    virtual class Core::PathBuffer<std::string> const getSkinPacksPath() const;
    /**
     * @vftbl  23
     * @symbol ?getDevelopmentResourcePacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   1923055446
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentResourcePacksPath() const;
    /**
     * @vftbl  24
     * @symbol ?getDevelopmentBehaviorPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   1862789634
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentBehaviorPacksPath() const;
    /**
     * @vftbl  25
     * @symbol ?getDevelopmentSkinPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -1457751305
     */
    virtual class Core::PathBuffer<std::string> const getDevelopmentSkinPacksPath() const;
    /**
     * @vftbl  26
     * @symbol ?getTreatmentPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -1968420169
     */
    virtual class Core::PathBuffer<std::string> const getTreatmentPacksPath() const;
    /**
     * @vftbl  27
     * @symbol ?getKnownPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@W4KnownPackType@@@Z
     * @hash   1806260534
     */
    virtual class Core::PathBuffer<std::string> const getKnownPacksPath(enum KnownPackType) const;
    /**
     * @vftbl  28
     * @symbol ?getKnownValidPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   -926048406
     */
    virtual class Core::PathBuffer<std::string> const getKnownValidPacksPath() const;
    /**
     * @vftbl  29
     * @symbol ?getKnownInvalidPacksPath@ResourcePackRepository@@UEBA?BV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
     * @hash   2001250575
     */
    virtual class Core::PathBuffer<std::string> const getKnownInvalidPacksPath() const;
    /**
     * @vftbl  30
     * @symbol ?refreshPacks@ResourcePackRepository@@UEAAXXZ
     * @hash   1695683573
     */
    virtual void refreshPacks();
    /**
     * @vftbl  31
     * @symbol ?requestReloadUserPacks@ResourcePackRepository@@UEAAXXZ
     * @hash   1505214909
     */
    virtual void requestReloadUserPacks();
    /**
     * @vftbl  32
     * @symbol ?requestReloadDynamicPackagePacks@ResourcePackRepository@@UEAAXXZ
     * @hash   1878328289
     */
    virtual void requestReloadDynamicPackagePacks();
    /**
     * @vftbl  33
     * @symbol ?getKeyProvider@ResourcePackRepository@@UEBA?AV?$not_null@V?$NonOwnerPointer@$$CBVIContentKeyProvider@@@Bedrock@@@gsl@@XZ
     * @hash   -1410187673
     */
    virtual class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> getKeyProvider() const;
    /**
     * @vftbl  34
     * @symbol ?getPackManifestFactory@ResourcePackRepository@@UEAAAEAVPackManifestFactory@@XZ
     * @hash   927844722
     */
    virtual class PackManifestFactory & getPackManifestFactory();
    /**
     * @vftbl  35
     * @symbol ?getPackSettingsFactory@ResourcePackRepository@@UEBAAEAVPackSettingsFactory@@XZ
     * @hash   1779352705
     */
    virtual class PackSettingsFactory & getPackSettingsFactory() const;
    /**
     * @vftbl  36
     * @symbol ?getPackSourceFactory@ResourcePackRepository@@UEAAAEAVPackSourceFactory@@XZ
     * @hash   1228695186
     */
    virtual class PackSourceFactory & getPackSourceFactory();
    /**
     * @vftbl  37
     * @symbol ?getPacksByResourceLocation@ResourcePackRepository@@UEBA?AV?$vector@PEAVResourcePack@@V?$allocator@PEAVResourcePack@@@std@@@std@@W4PackOrigin@@@Z
     * @hash   420545577
     */
    virtual std::vector<class ResourcePack *> getPacksByResourceLocation(enum PackOrigin) const;
    /**
     * @vftbl  38
     * @symbol ?getPacksByType@ResourcePackRepository@@UEBA?AV?$vector@PEAVResourcePack@@V?$allocator@PEAVResourcePack@@@std@@@std@@W4PackType@@@Z
     * @hash   -1930887138
     */
    virtual std::vector<class ResourcePack *> getPacksByType(enum PackType) const;
    /**
     * @vftbl  39
     * @symbol ?addKnownPackFromImport@ResourcePackRepository@@UEAAXAEBVPackManifest@@@Z
     * @hash   2090586873
     */
    virtual void addKnownPackFromImport(class PackManifest const &);
    /**
     * @vftbl  40
     * @symbol ?addInvalidPack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@W4PackType@@@Z
     * @hash   803426968
     */
    virtual void addInvalidPack(class ResourceLocation const &, enum PackType);
    /**
     * @vftbl  41
     * @symbol ?getInvalidPacks@ResourcePackRepository@@UEBAAEBV?$vector@VResourceLocation@@V?$allocator@VResourceLocation@@@std@@@std@@W4PackType@@@Z
     * @hash   -1353846388
     */
    virtual std::vector<class ResourceLocation> const & getInvalidPacks(enum PackType) const;
    /**
     * @vftbl  42
     * @symbol ?getInvalidPacks@ResourcePackRepository@@UEBA?AV?$vector@VResourceLocation@@V?$allocator@VResourceLocation@@@std@@@std@@AEBUInvalidPacksFilterGroup@@@Z
     * @hash   2118393345
     */
    virtual std::vector<class ResourceLocation> getInvalidPacks(struct InvalidPacksFilterGroup const &) const;
    /**
     * @vftbl  43
     * @symbol ?deletePack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
     * @hash   -1666748348
     */
    virtual void deletePack(class ResourceLocation const &);
    /**
     * @vftbl  44
     * @symbol ?deletePackFiles@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
     * @hash   732937205
     */
    virtual void deletePackFiles(class ResourceLocation const &);
    /**
     * @vftbl  45
     * @symbol ?postDeletePack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
     * @hash   -2009477804
     */
    virtual void postDeletePack(class ResourceLocation const &);
    /**
     * @vftbl  46
     * @symbol ?untrackInvalidPack@ResourcePackRepository@@UEAAXAEBVResourceLocation@@@Z
     * @hash   2114527402
     */
    virtual void untrackInvalidPack(class ResourceLocation const &);
    /**
     * @vftbl  47
     * @symbol ?registerResourcePackRemovedCallback@ResourcePackRepository@@UEAAXPEAXV?$function@$$A6AXPEAVResourcePack@@@Z@std@@@Z
     * @hash   1163121997
     */
    virtual void registerResourcePackRemovedCallback(void *, class std::function<void (class ResourcePack *)>);
    /**
     * @vftbl  48
     * @symbol ?unregisterResourcePackRemovedCallback@ResourcePackRepository@@UEAAXPEAX@Z
     * @hash   -1114832980
     */
    virtual void unregisterResourcePackRemovedCallback(void *);
    /**
     * @vftbl  49
     * @symbol ?isInitialized@ResourcePackRepository@@UEAA_NXZ
     * @hash   -1293010446
     */
    virtual bool isInitialized();
    /**
     * @symbol ??0ResourcePackRepository@@QEAA@AEAVIMinecraftEventing@@AEAVPackManifestFactory@@AEBV?$not_null@V?$NonOwnerPointer@VIContentAccessibilityProvider@@@Bedrock@@@gsl@@AEBV?$not_null@V?$NonOwnerPointer@VFilePathManager@Core@@@Bedrock@@@4@AEAVPackSourceFactory@@_N@Z
     * @hash   -1910475541
     */
    MCAPI ResourcePackRepository(class IMinecraftEventing &, class PackManifestFactory &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentAccessibilityProvider>> const &, class gsl::not_null<class Bedrock::NonOwnerPointer<class Core::FilePathManager>> const &, class PackSourceFactory &, bool);
MCAPI static class mce::UUID const CHEMISTRY_PACK_UUID;
MCAPI static class mce::UUID const CHEMISTRY_SERVER_PACK_UUID;

//private:
    /**
     * @symbol ?_detectKnownPacksChange@ResourcePackRepository@@AEAAXAEAUKnownPackContainer@1@AEBU21@W4KnownPackType@@@Z
     * @hash   -1410909421
     */
    MCAPI void _detectKnownPacksChange(struct ResourcePackRepository::KnownPackContainer &, struct ResourcePackRepository::KnownPackContainer const &, enum KnownPackType);
    /**
     * @symbol ?_findVanillaPacks@ResourcePackRepository@@AEAAXXZ
     * @hash   -361657518
     */
    MCAPI void _findVanillaPacks();
    /**
     * @symbol ?_initialize@ResourcePackRepository@@AEAAXXZ
     * @hash   919841354
     */
    MCAPI void _initialize();
    /**
     * @symbol ?_initializeCachedPackSource@ResourcePackRepository@@AEAAXXZ
     * @hash   278331760
     */
    MCAPI void _initializeCachedPackSource();
    /**
     * @symbol ?_initializePackSource@ResourcePackRepository@@AEAAXXZ
     * @hash   1006448414
     */
    MCAPI void _initializePackSource();
    /**
     * @symbol ?_initializeWorldPackSource@ResourcePackRepository@@AEAAXXZ
     * @hash   -481706622
     */
    MCAPI void _initializeWorldPackSource();
    /**
     * @symbol ?_loadLastKnownUserPacks@ResourcePackRepository@@AEAAXAEAUKnownPackContainer@1@W4KnownPackType@@@Z
     * @hash   1899065859
     */
    MCAPI void _loadLastKnownUserPacks(struct ResourcePackRepository::KnownPackContainer &, enum KnownPackType);
    /**
     * @symbol ?_loadPacks@ResourcePackRepository@@AEAAX_N@Z
     * @hash   783823284
     */
    MCAPI void _loadPacks(bool);
    /**
     * @symbol ?_packExists@ResourcePackRepository@@AEBA_NAEBVUUID@mce@@AEBVSemVersion@@W4PackOrigin@@@Z
     * @hash   514669286
     */
    MCAPI bool _packExists(class mce::UUID const &, class SemVersion const &, enum PackOrigin) const;
    /**
     * @symbol ?_reloadUserPacks@ResourcePackRepository@@AEAAXXZ
     * @hash   2145504898
     */
    MCAPI void _reloadUserPacks();
    /**
     * @symbol ?_removePack@ResourcePackRepository@@AEAA_NAEBVResourceLocation@@_N@Z
     * @hash   1621865231
     */
    MCAPI bool _removePack(class ResourceLocation const &, bool);
    /**
     * @symbol ?_saveKnownUserPacks@ResourcePackRepository@@AEAAXAEAUKnownPackContainer@1@W4KnownPackType@@@Z
     * @hash   773896404
     */
    MCAPI void _saveKnownUserPacks(struct ResourcePackRepository::KnownPackContainer &, enum KnownPackType);
    /**
     * @symbol ?_triggerRemoveResourcePackCallback@ResourcePackRepository@@AEAAXPEAVResourcePack@@@Z
     * @hash   1053210061
     */
    MCAPI void _triggerRemoveResourcePackCallback(class ResourcePack *);

private:

};