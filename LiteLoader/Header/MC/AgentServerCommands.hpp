// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AgentServerCommands {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTSERVERCOMMANDS
public:
    class AgentServerCommands& operator=(class AgentServerCommands const &) = delete;
    AgentServerCommands(class AgentServerCommands const &) = delete;
    AgentServerCommands() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENTSERVERCOMMANDS
#endif
    MCAPI static void setupStandardServer(class Minecraft &, std::string const &);

protected:

private:

};