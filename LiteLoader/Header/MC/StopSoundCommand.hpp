/**
 * @file  StopSoundCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StopSoundCommand.
 *
 */
class StopSoundCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPSOUNDCOMMAND
public:
    class StopSoundCommand& operator=(class StopSoundCommand const &) = delete;
    StopSoundCommand(class StopSoundCommand const &) = delete;
    StopSoundCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2055518376
     */
    virtual ~StopSoundCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@StopSoundCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1747990373
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@StopSoundCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   1444776428
     */
    MCAPI static void setup(class CommandRegistry &);

};