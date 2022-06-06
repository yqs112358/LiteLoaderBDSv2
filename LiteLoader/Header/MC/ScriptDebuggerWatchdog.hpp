// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptDebuggerWatchdog {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTDEBUGGERWATCHDOG
public:
    class ScriptDebuggerWatchdog& operator=(class ScriptDebuggerWatchdog const &) = delete;
    ScriptDebuggerWatchdog(class ScriptDebuggerWatchdog const &) = delete;
    ScriptDebuggerWatchdog() = delete;
#endif

public:
    /*0*/ virtual ~ScriptDebuggerWatchdog();
    /*1*/ virtual bool requireClose() const;
    /*2*/ virtual void startListenTimeout();
    /*3*/ virtual bool listenTimeoutExpired() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTDEBUGGERWATCHDOG
#endif
    MCAPI ScriptDebuggerWatchdog(class std::chrono::duration<int, struct std::ratio<60, 1>>);
    MCAPI void startLeaveGame();

protected:

private:

};