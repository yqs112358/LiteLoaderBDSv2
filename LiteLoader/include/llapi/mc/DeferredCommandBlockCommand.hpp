/**
 * @file  DeferredCommandBlockCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "DeferredCommandBase.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class DeferredCommandBlockCommand.
 *
 */
class DeferredCommandBlockCommand : public DeferredCommandBase {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEFERREDCOMMANDBLOCKCOMMAND
public:
    class DeferredCommandBlockCommand& operator=(class DeferredCommandBlockCommand const &) = delete;
    DeferredCommandBlockCommand(class DeferredCommandBlockCommand const &) = delete;
    DeferredCommandBlockCommand() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@DeferredCommandBlockCommand\@\@UEAAXAEAVMinecraftCommands\@\@\@Z
     */
    virtual void execute(class MinecraftCommands &);

};
