// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerLevelEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLEVELEVENTCOORDINATOR
public:
    class ServerLevelEventCoordinator& operator=(class ServerLevelEventCoordinator const &) = delete;
    ServerLevelEventCoordinator(class ServerLevelEventCoordinator const &) = delete;
    ServerLevelEventCoordinator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLEVELEVENTCOORDINATOR
#endif
    MCAPI void sendLevelAddedPlayer(class Level &, class Player &);
    MCAPI void sendLevelRemovedPlayer(class Level &, class Player &);
    MCAPI void sendLevelSaveData(class Level &, class CompoundTag &);

protected:

private:

};