// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlayerInteractionSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINTERACTIONSYSTEM
public:
    class PlayerInteractionSystem& operator=(class PlayerInteractionSystem const &) = delete;
    PlayerInteractionSystem(class PlayerInteractionSystem const &) = delete;
    PlayerInteractionSystem() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYERINTERACTIONSYSTEM
#endif
    MCAPI bool getInteraction(class Actor &, class Player &, class ActorInteraction &);

protected:

private:

};