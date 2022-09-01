/**
 * @file  FeatureRegistry.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FeatureRegistry.
 *
 */
class FeatureRegistry {

#define AFTER_EXTRA
// Add Member There
public:
struct FeatureBinaryJsonFormat;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FEATUREREGISTRY
public:
    class FeatureRegistry& operator=(class FeatureRegistry const &) = delete;
    FeatureRegistry(class FeatureRegistry const &) = delete;
#endif

public:
    /**
     * @symbol ??0FeatureRegistry@@QEAA@XZ
     * @hash   81808751
     */
    MCAPI FeatureRegistry();
    /**
     * @symbol ?forEachFeature@FeatureRegistry@@QEBAXV?$function@$$A6AXAEBVHashedString@@V?$WeakRefT@UFeatureRefTraits@@@@@Z@std@@@Z
     * @hash   -1754549438
     */
    MCAPI void forEachFeature(class std::function<void (class HashedString const &, class WeakRefT<struct FeatureRefTraits>)>) const;
    /**
     * @symbol ?getLargeFeaturePasses@FeatureRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   1674278255
     */
    MCAPI std::vector<std::string> getLargeFeaturePasses() const;
    /**
     * @symbol ?getSmallFeaturePasses@FeatureRegistry@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     * @hash   1169331487
     */
    MCAPI std::vector<std::string> getSmallFeaturePasses() const;
    /**
     * @symbol ?isFeaturePassDefined@FeatureRegistry@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1551626267
     */
    MCAPI bool isFeaturePassDefined(std::string const &) const;
    /**
     * @symbol ?loadFromDefinitions@FeatureRegistry@@QEAAXAEAVIWorldRegistriesProvider@@AEBVResourcePackManager@@AEBVExperiments@@_N@Z
     * @hash   -191273363
     */
    MCAPI void loadFromDefinitions(class IWorldRegistriesProvider &, class ResourcePackManager const &, class Experiments const &, bool);
    /**
     * @symbol ?lookupByName@FeatureRegistry@@QEBA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1230201970
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupByName(std::string const &) const;
    /**
     * @symbol ?lookupOrReserveFeature@FeatureRegistry@@QEAA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -261565012
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> lookupOrReserveFeature(std::string const &);
    /**
     * @symbol ?reserveFeature@FeatureRegistry@@QEAA?AV?$WeakRefT@UFeatureRefTraits@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -750989130
     */
    MCAPI class WeakRefT<struct FeatureRefTraits> reserveFeature(std::string const &);
    /**
     * @symbol ?reverseLookupString@FeatureRegistry@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVIFeature@@@Z
     * @hash   -1223234515
     */
    MCAPI std::string const & reverseLookupString(class IFeature const &);
    /**
     * @symbol ?setLargeFeaturePasses@FeatureRegistry@@QEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   80588845
     */
    MCAPI void setLargeFeaturePasses(std::vector<std::string>);
    /**
     * @symbol ?setSmallFeaturePasses@FeatureRegistry@@QEAAXV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   1829007917
     */
    MCAPI void setSmallFeaturePasses(std::vector<std::string>);
MCAPI static std::string const AFTER_SKY_PASS;
MCAPI static std::string const AFTER_SURFACE_PASS;
MCAPI static std::string const AFTER_UNDERGROUND_PASS;
MCAPI static std::string const BEFORE_SKY_PASS;
MCAPI static std::string const BEFORE_SURFACE_PASS;
MCAPI static std::string const BEFORE_UNDERGROUND_PASS;
MCAPI static std::string const FINAL_PASS;
MCAPI static std::string const FIRST_PASS;
MCAPI static std::string const PREGENERATION_PASS;
MCAPI static std::string const SKY_PASS;
MCAPI static std::string const SURFACE_PASS;
MCAPI static std::string const UNDERGROUND_PASS;

//private:
    /**
     * @symbol ?_featureNamespaceFromInput@FeatureRegistry@@AEAA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
     * @hash   -850602690
     */
    MCAPI std::string const _featureNamespaceFromInput(std::string const &, std::string const &);
    /**
     * @symbol ?_registerFeature@FeatureRegistry@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VIFeature@@U?$default_delete@VIFeature@@@std@@@3@@Z
     * @hash   1341531862
     */
    MCAPI void _registerFeature(std::string const &, std::unique_ptr<class IFeature>);
    /**
     * @symbol ?_setupFeature@FeatureRegistry@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVIWorldRegistriesProvider@@AEBVResourcePackManager@@AEBV23@2AEBVSemVersion@@@Z
     * @hash   1456913427
     */
    MCAPI std::string _setupFeature(class IWorldRegistriesProvider &, class ResourcePackManager const &, std::string const &, std::string const &, class SemVersion const &);

private:

};