// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NpcUrlAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCURLACTION
public:
    class NpcUrlAction& operator=(class NpcUrlAction const &) = delete;
    NpcUrlAction(class NpcUrlAction const &) = delete;
#endif

public:
    /*0*/ virtual ~NpcUrlAction();
    /*1*/ virtual class Json::Value toJson();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NPCURLACTION
#endif
    MCAPI NpcUrlAction();

protected:

private:

};