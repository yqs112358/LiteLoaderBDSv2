/**
 * @file  DeferredCommandBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DeferredCommandBase.
 *
 */
class DeferredCommandBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDCOMMANDBASE
public:
    class DeferredCommandBase& operator=(class DeferredCommandBase const &) = delete;
    DeferredCommandBase(class DeferredCommandBase const &) = delete;
    DeferredCommandBase() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@DeferredScriptCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands &) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DEFERREDCOMMANDBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~DeferredCommandBase();
#endif

};
