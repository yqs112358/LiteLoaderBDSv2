/**
 * @file  InstantDespawnSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ITickingSystem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InstantDespawnSystem.
 *
 */
class InstantDespawnSystem : public ITickingSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSTANTDESPAWNSYSTEM
public:
    class InstantDespawnSystem& operator=(class InstantDespawnSystem const &) = delete;
    InstantDespawnSystem(class InstantDespawnSystem const &) = delete;
    InstantDespawnSystem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@InstantDespawnSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);
    /**
     * @symbol ?createInstantDespawningPlayerCleanupSystem\@InstantDespawnSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createInstantDespawningPlayerCleanupSystem();

//private:
    /**
     * @symbol ?_tickComponent\@InstantDespawnSystem\@\@CAXAEAVActorOwnerComponent\@\@AEAVInstantDespawnComponent\@\@\@Z
     */
    MCAPI static void _tickComponent(class ActorOwnerComponent &, class InstantDespawnComponent &);

private:

};
