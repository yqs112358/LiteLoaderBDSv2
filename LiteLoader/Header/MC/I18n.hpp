/**
 * @file  I18n.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
class Localization;

#undef BEFORE_EXTRA

/**
 * @brief MC class I18n.
 *
 */
class I18n {

#define AFTER_EXTRA
// Add Member There
public:
    LIAPI static Localization const* getLanguage(std::string const& languageCode);
    inline static std::string get(std::string const& key)
    {
        return get(key, mCurrentLanguage);
    }
    inline static std::string get(std::string const& key, std::vector<std::string> args)
    {
        return get(key, args, mCurrentLanguage);
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_I18N
public:
    class I18n& operator=(class I18n const &) = delete;
    I18n(class I18n const &) = delete;
    I18n() = delete;
#endif

public:
MCAPI static char const NeutralLangCode[];
    /**
     * @symbol ?addI18nObserver@I18n@@SAXAEAVI18nObserver@@@Z
     * @hash   -131021650
     */
    MCAPI static void addI18nObserver(class I18nObserver &);
    /**
     * @symbol ?appendLanguageStringsFromPack@I18n@@SAXAEBVPackManifest@@AEBV?$multimap@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@2@@std@@@2@@std@@@Z
     * @hash   -1519222219
     */
    MCAPI static void appendLanguageStringsFromPack(class PackManifest const &, class std::multimap<std::string, struct std::pair<std::string, std::string>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, struct std::pair<std::string, std::string>>>> const &);
    /**
     * @symbol ?chooseLanguage@I18n@@SAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1934944926
     */
    MCAPI static void chooseLanguage(std::string const &);
    /**
     * @symbol ?chooseLanguage@I18n@@SAXAEBVLocalization@@@Z
     * @hash   -582272352
     */
    MCAPI static void chooseLanguage(class Localization const &);
    /**
     * @symbol ?findAvailableLanguageNames@I18n@@SA?AV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@AEAVResourcePackManager@@@Z
     * @hash   -1482922087
     */
    MCAPI static class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> findAvailableLanguageNames(class ResourcePackManager &);
    /**
     * @symbol ?findAvailableLanguages@I18n@@SA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAVResourcePackManager@@@Z
     * @hash   1958999448
     */
    MCAPI static std::vector<std::string> findAvailableLanguages(class ResourcePackManager &);
    /**
     * @symbol ?get@I18n@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@PEBVLocalization@@@Z
     * @hash   1449488985
     */
    MCAPI static std::string get(std::string const &, std::vector<std::string> const &, class Localization const *);
    /**
     * @symbol ?get@I18n@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@PEBVLocalization@@@Z
     * @hash   1092509575
     */
    MCAPI static std::string get(std::string const &, class Localization const *);
    /**
     * @symbol ?getCurrentLanguage@I18n@@SA?AV?$optional_ref@$$CBVLocalization@@@@XZ
     * @hash   484537285
     */
    MCAPI static class optional_ref<class Localization const> getCurrentLanguage();
    /**
     * @symbol ?getLanguageCodesFromPack@I18n@@SA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEBVPackAccessStrategy@@@Z
     * @hash   -372545150
     */
    MCAPI static std::vector<std::string> getLanguageCodesFromPack(class PackAccessStrategy const &);
    /**
     * @symbol ?getPackKeywordValue@I18n@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPackManifest@@AEBV23@@Z
     * @hash   428359300
     */
    MCAPI static std::string getPackKeywordValue(class PackManifest const &, std::string const &);
    /**
     * @symbol ?getPackKeywordValueForTelemetry@I18n@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPackManifest@@AEBV23@@Z
     * @hash   -2101970876
     */
    MCAPI static std::string getPackKeywordValueForTelemetry(class PackManifest const &, std::string const &);
    /**
     * @symbol ?isPackKeyword@I18n@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   555309275
     */
    MCAPI static bool isPackKeyword(std::string const &);
    /**
     * @symbol ?loadAllLanguages@I18n@@SAXAEAVResourcePackManager@@@Z
     * @hash   1755489166
     */
    MCAPI static void loadAllLanguages(class ResourcePackManager &);
    /**
     * @symbol ?loadLanguageKeywordsFromPack@I18n@@SAXAEBVPackManifest@@AEBVPackAccessStrategy@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -114892277
     */
    MCAPI static void loadLanguageKeywordsFromPack(class PackManifest const &, class PackAccessStrategy const &, std::vector<std::string> const &);

//private:
    /**
     * @symbol ?_findAvailableLanguageNames@I18n@@CAXAEBVValue@Json@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
     * @hash   1854153236
     */
    MCAPI static void _findAvailableLanguageNames(class Json::Value const &, class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> &);
    /**
     * @symbol ?_findAvailableLanguages@I18n@@CAXAEBVValue@Json@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
     * @hash   -1441363146
     */
    MCAPI static void _findAvailableLanguages(class Json::Value const &, std::vector<std::string> &);
    /**
     * @symbol ?_findLocaleFor@I18n@@CAPEAVLocalization@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -851344062
     */
    MCAPI static class Localization * _findLocaleFor(std::string const &);
    /**
     * @symbol ?_generatePackKeyPrefix@I18n@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPackManifest@@@Z
     * @hash   897986819
     */
    MCAPI static std::string _generatePackKeyPrefix(class PackManifest const &);
    /**
     * @symbol ?_getAdditionalTranslationsBackupLocale@I18n@@CAPEAVLocalization@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   472699435
     */
    MCAPI static class Localization * _getAdditionalTranslationsBackupLocale(std::string const &, bool);
    /**
     * @symbol ?_getLocaleCodeFor@I18n@@CAAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
     * @hash   939026382
     */
    MCAPI static std::string & _getLocaleCodeFor(std::string const &);
    /**
     * @symbol ?_getPackKeywordLocale@I18n@@CAAEAVLocalization@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1001846638
     */
    MCAPI static class Localization & _getPackKeywordLocale(std::string const &);

private:
MCAPI static std::vector<std::unique_ptr<class Localization>> mAdditionalTranslationsBackup;
MCAPI static class std::mutex mAdditionalTranslationsBackupMutex;
MCAPI static class Localization const * mCurrentLanguage;
MCAPI static class Localization const * mCurrentPackMetaLanguage;
MCAPI static class Localization const mEmptyLanguage;
MCAPI static class std::unordered_map<std::string, std::vector<std::string>, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::vector<std::string>>>> mFormatDictionary;
MCAPI static std::vector<std::string> mLanguageCodes;
MCAPI static class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> mLanguageNames;
MCAPI static bool mLanguageSupportsHypenSplitting;
MCAPI static std::vector<std::unique_ptr<class Localization>> mLanguages;
MCAPI static std::vector<std::unique_ptr<class Localization>> mPackKeywordLanguages;
MCAPI static std::vector<std::string> const mPackReservedKeys;
MCAPI static class ResourcePackManager * mResourcePackManager;
MCAPI static class Core::Subject<class I18nObserver, class Core::SingleThreadedLock> mSubject;

};