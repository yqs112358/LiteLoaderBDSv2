/**
 * @file  ReloadCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ServerCommand.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ReloadCommand.
 *
 */
class ReloadCommand : public ServerCommand {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RELOADCOMMAND
public:
    class ReloadCommand& operator=(class ReloadCommand const &) = delete;
    ReloadCommand(class ReloadCommand const &) = delete;
    ReloadCommand() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?collectOptionalArguments\@Command\@\@MEAA_NXZ
     */
    virtual bool collectOptionalArguments();
    /**
     * @vftbl 2
     * @symbol ?execute\@ReloadCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup\@ReloadCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};
