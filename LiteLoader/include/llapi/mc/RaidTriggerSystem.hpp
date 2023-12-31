/**
 * @file  RaidTriggerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class RaidTriggerSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAIDTRIGGERSYSTEM
public:
    class RaidTriggerSystem& operator=(class RaidTriggerSystem const &) = delete;
    RaidTriggerSystem(class RaidTriggerSystem const &) = delete;
    RaidTriggerSystem() = delete;
#endif

public:

//private:
    /**
     * @symbol ?_doRaidTriggerSystem\@RaidTriggerSystem\@\@CAXAEBUDimensionTypeComponent\@\@AEBUStateVectorComponent\@\@AEAVActorOwnerComponent\@\@AEBUVillageManagerComponent\@\@\@Z
     */
    MCAPI static void _doRaidTriggerSystem(struct DimensionTypeComponent const &, struct StateVectorComponent const &, class ActorOwnerComponent &, struct VillageManagerComponent const &);
    /**
     * @symbol ?_tickRaidTriggerSystem\@RaidTriggerSystem\@\@CAXV?$OptionalGlobalT\@$$CBUVillageManagerComponent\@\@VEntityRegistryBase\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@$$CBV?$FlagComponent\@UActorTickedFlag\@\@\@\@$$CBV?$ActorFlagComponent\@URaidTriggerFlag\@\@\@\@\@\@$$CBUDimensionTypeComponent\@\@$$CBUStateVectorComponent\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickRaidTriggerSystem(class OptionalGlobalT<struct VillageManagerComponent const, class EntityRegistryBase>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorTickedFlag> const, class ActorFlagComponent<struct RaidTriggerFlag> const>, struct DimensionTypeComponent const, struct StateVectorComponent const, class ActorOwnerComponent>);

private:

};
