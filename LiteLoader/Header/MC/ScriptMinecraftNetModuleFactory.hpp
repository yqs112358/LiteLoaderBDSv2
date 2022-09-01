/**
 * @file  ScriptMinecraftNetModuleFactory.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Bedrock.hpp"
#include "TextObjectText.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptMinecraftNetModuleFactory.
 *
 */
class ScriptMinecraftNetModuleFactory : public TextObjectText {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTNETMODULEFACTORY
public:
    class ScriptMinecraftNetModuleFactory& operator=(class ScriptMinecraftNetModuleFactory const &) = delete;
    ScriptMinecraftNetModuleFactory(class ScriptMinecraftNetModuleFactory const &) = delete;
    ScriptMinecraftNetModuleFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1218933135
     */
    virtual ~ScriptMinecraftNetModuleFactory();
    /**
     * @symbol ??0ScriptMinecraftNetModuleFactory@@QEAA@V?$NonOwnerPointer@VScheduler@@@Bedrock@@@Z
     * @hash   1659655987
     */
    MCAPI ScriptMinecraftNetModuleFactory(class Bedrock::NonOwnerPointer<class Scheduler>);
    /**
     * @symbol ?getModuleUUIDAsString@ScriptMinecraftNetModuleFactory@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   148091648
     */
    MCAPI static std::string getModuleUUIDAsString();

//private:

private:
MCAPI static char const * ModuleName;
MCAPI static class mce::UUID const ModuleUUID;

};