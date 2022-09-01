/**
 * @file  PackManifestFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PackManifestFactory.
 *
 */
class PackManifestFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKMANIFESTFACTORY
public:
    class PackManifestFactory& operator=(class PackManifestFactory const &) = delete;
    PackManifestFactory(class PackManifestFactory const &) = delete;
    PackManifestFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -208443696
     */
    virtual ~PackManifestFactory();
    /**
     * @vftbl  1
     * @symbol ?create@PackManifestFactory@@UEAA?AV?$unique_ptr@VPackManifest@@U?$default_delete@VPackManifest@@@std@@@std@@AEAVPackAccessStrategy@@AEBVResourceLocation@@AEAVPackReport@@PEAVSubpackInfoCollection@@@Z
     * @hash   1551441770
     */
    virtual std::unique_ptr<class PackManifest> create(class PackAccessStrategy &, class ResourceLocation const &, class PackReport &, class SubpackInfoCollection *);
    /**
     * @symbol ??0PackManifestFactory@@QEAA@AEAVIPackTelemetry@@@Z
     * @hash   -1205361657
     */
    MCAPI PackManifestFactory(class IPackTelemetry &);
MCAPI static class Core::PathBuffer<std::string> const MANIFEST_LOG_PATH;
MCAPI static std::string const MANIFEST_PACK_UUID_UPGRADE_SALT;
MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH;
MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH_OLD;
MCAPI static class Core::PathBuffer<std::string> const MANIFEST_PATH_OLD_BACKUP;
MCAPI static class SemVersion const REQUIRED_VANILLA_FOR_OLD_PACKS;
    /**
     * @symbol ?contentKeyLookup@PackManifestFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     * @hash   -200789047
     */
    MCAPI static std::string contentKeyLookup(std::string const &);
MCAPI static class std::unordered_map<std::string, std::vector<char> const, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::vector<char> const>>> mAlternateContentKeys;
MCAPI static class std::unordered_map<std::string, std::vector<char> const, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::vector<char> const>>> mContentKeys;

};