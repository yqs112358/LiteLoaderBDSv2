/**
 * @file  RemoveAllPassengersSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RemoveAllPassengersSystem.
 *
 */
class RemoveAllPassengersSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEALLPASSENGERSSYSTEM
public:
    class RemoveAllPassengersSystem& operator=(class RemoveAllPassengersSystem const &) = delete;
    RemoveAllPassengersSystem(class RemoveAllPassengersSystem const &) = delete;
    RemoveAllPassengersSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@RemoveAllPassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?removeAllPassengers\@RemoveAllPassengersSystem\@\@SAXAEBUVehicleComponent\@\@_NAEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void removeAllPassengers(struct VehicleComponent const &, bool, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>> &);

//private:
    /**
     * @symbol ?_tick\@RemoveAllPassengersSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@U?$Exclude\@VRideableComponent\@\@\@\@$$CBUVehicleComponent\@\@V?$Optional\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct Exclude<class RideableComponent>, struct VehicleComponent const, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>>);

private:

};
