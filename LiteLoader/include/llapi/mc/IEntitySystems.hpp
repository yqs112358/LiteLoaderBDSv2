/**
 * @file  IEntitySystems.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class IEntitySystems.
 *
 */
class IEntitySystems {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IENTITYSYSTEMS
public:
    class IEntitySystems& operator=(class IEntitySystems const &) = delete;
    IEntitySystems(class IEntitySystems const &) = delete;
    IEntitySystems() = delete;
#endif

public:
    /**
     * @symbol ?registerTickingSystem\@IEntitySystems\@\@QEAAXV?$initializer_list\@V?$typeid_t\@USystemCategory\@\@\@Bedrock\@\@\@std\@\@V?$unique_ptr\@VITickingSystem\@\@U?$default_delete\@VITickingSystem\@\@\@std\@\@\@3\@AEBUSystemInfo\@\@UEntitySystemTickingMode\@\@\@Z
     */
    MCAPI void registerTickingSystem(class std::initializer_list<class Bedrock::typeid_t<struct SystemCategory>>, std::unique_ptr<class ITickingSystem>, struct SystemInfo const &, struct EntitySystemTickingMode);

};
