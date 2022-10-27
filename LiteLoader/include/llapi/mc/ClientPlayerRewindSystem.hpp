/**
 * @file  ClientPlayerRewindSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientPlayerRewindSystem.
 *
 */
class ClientPlayerRewindSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTPLAYERREWINDSYSTEM
public:
    class ClientPlayerRewindSystem& operator=(class ClientPlayerRewindSystem const &) = delete;
    ClientPlayerRewindSystem(class ClientPlayerRewindSystem const &) = delete;
    ClientPlayerRewindSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@ClientPlayerRewindSystem@@SA?AUTickingSystemWithInfo@@XZ
     * @hash   -913132106
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doClientPlayerRewindSystem@ClientPlayerRewindSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@AEAVReplayStateComponent@@@Z
     * @hash   591143964
     */
    MCAPI static void _doClientPlayerRewindSystem(class StrictEntityContext const &, class ActorOwnerComponent &, class ReplayStateComponent &);

private:

};