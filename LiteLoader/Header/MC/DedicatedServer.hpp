/**
 * @file  DedicatedServer.hpp
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
 * @brief MC class DedicatedServer.
 *
 */
class DedicatedServer {

#define AFTER_EXTRA
// Add Member There
public:
enum StartResult;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEDICATEDSERVER
public:
    class DedicatedServer& operator=(class DedicatedServer const &) = delete;
    DedicatedServer(class DedicatedServer const &) = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEDICATEDSERVER
    /**
     * @symbol ?getAutomationClient@DedicatedServer@@EEBA?AV?$not_null@V?$NonOwnerPointer@VAutomationClient@Automation@@@Bedrock@@@gsl@@XZ
     * @hash   888776956
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Automation::AutomationClient>> getAutomationClient() const;
    /**
     * @symbol ?getEditorManager@DedicatedServer@@UEBA?AV?$NonOwnerPointer@VIEditorManager@Editor@@@Bedrock@@XZ
     * @hash   61797872
     */
    MCVAPI class Bedrock::NonOwnerPointer<class Editor::IEditorManager> getEditorManager() const;
    /**
     * @symbol ?getGameModule@DedicatedServer@@EEAAAEAVIGameModuleShared@@XZ
     * @hash   -691657935
     */
    MCVAPI class IGameModuleShared & getGameModule();
    /**
     * @symbol ?getPrimaryMinecraft@DedicatedServer@@EEAA?AV?$not_null@V?$NonOwnerPointer@VMinecraft@@@Bedrock@@@gsl@@XZ
     * @hash   1641207398
     */
    MCVAPI class gsl::not_null<class Bedrock::NonOwnerPointer<class Minecraft>> getPrimaryMinecraft();
    /**
     * @symbol ?isDedicatedServer@DedicatedServer@@EEBA_NXZ
     * @hash   816126240
     */
    MCVAPI bool isDedicatedServer() const;
    /**
     * @symbol ?isEditorModeEnabled@DedicatedServer@@EEBA_NXZ
     * @hash   -10845985
     */
    MCVAPI bool isEditorModeEnabled() const;
    /**
     * @symbol ?isEduMode@DedicatedServer@@EEBA_NXZ
     * @hash   -1987532921
     */
    MCVAPI bool isEduMode() const;
    /**
     * @symbol ?onNetworkMaxPlayersChanged@DedicatedServer@@EEAAXI@Z
     * @hash   1540209244
     */
    MCVAPI void onNetworkMaxPlayersChanged(unsigned int);
    /**
     * @symbol ?requestServerShutdown@DedicatedServer@@EEAA_NXZ
     * @hash   569873345
     */
    MCVAPI bool requestServerShutdown();
    /**
     * @symbol ?stop@DedicatedServer@@UEAA_NXZ
     * @hash   2003313193
     */
    MCVAPI bool stop();
    /**
     * @symbol ??1DedicatedServer@@UEAA@XZ
     * @hash   2024440520
     */
    MCVAPI ~DedicatedServer();
#endif
    /**
     * @symbol ??0DedicatedServer@@QEAA@XZ
     * @hash   1289771470
     */
    MCAPI DedicatedServer();
    /**
     * @symbol ?runDedicatedServerLoop@DedicatedServer@@QEAA?AW4StartResult@1@AEAVFilePathManager@Core@@AEAVPropertiesSettings@@AEAVLevelSettings@@AEAVAllowListFile@@AEAV?$unique_ptr@VPermissionsFile@@U?$default_delete@VPermissionsFile@@@std@@@std@@@Z
     * @hash   188108284
     */
    MCAPI enum DedicatedServer::StartResult runDedicatedServerLoop(class Core::FilePathManager &, class PropertiesSettings &, class LevelSettings &, class AllowListFile &, std::unique_ptr<class PermissionsFile> &);
    /**
     * @symbol ?start@DedicatedServer@@QEAA?AW4StartResult@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActivationArguments@Bedrock@@@Z
     * @hash   1035794177
     */
    MCAPI enum DedicatedServer::StartResult start(std::string const &, class Bedrock::ActivationArguments const &);

//private:
    /**
     * @symbol ?_getLevelName@DedicatedServer@@AEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVPropertiesSettings@@@Z
     * @hash   -1726407490
     */
    MCAPI std::string const & _getLevelName(class PropertiesSettings const &) const;
    /**
     * @symbol ?initializeHttp@DedicatedServer@@AEAAXW4Implementation@Http@Bedrock@@@Z
     * @hash   -176841080
     */
    MCAPI void initializeHttp(enum Bedrock::Http::Implementation);
    /**
     * @symbol ?initializeLogging@DedicatedServer@@AEAAXXZ
     * @hash   -631517863
     */
    MCAPI void initializeLogging();

private:

};