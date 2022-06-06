// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class WanderingTraderScheduler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WANDERINGTRADERSCHEDULER
public:
    class WanderingTraderScheduler& operator=(class WanderingTraderScheduler const &) = delete;
    WanderingTraderScheduler(class WanderingTraderScheduler const &) = delete;
    WanderingTraderScheduler() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WANDERINGTRADERSCHEDULER
#endif
    MCAPI WanderingTraderScheduler(class Level &);
    MCAPI bool isWanderingTraderCurrentlyManaged(class Actor const &);
    MCAPI void readSaveData();
    MCAPI void tick();
    MCAPI void writeSaveData() const;
    MCAPI ~WanderingTraderScheduler();

protected:

private:
    MCAPI bool _doesWanderingTraderExist() const;
    MCAPI class std::optional<class BlockPos> _findClosestSpawnablePositionInColumn(class BlockPos const &, class BlockSource &);
    MCAPI class Actor * _getRandomPlayerInOverworld() const;
    MCAPI class BlockPos _getRandomXZAroundPos(class BlockPos const &, int, bool);
    MCAPI class std::optional<class BlockPos> _getSpawnPosFromNearestVillageToPlayerPos(class BlockPos const &, class BlockSource &);
    MCAPI bool _isPosSafeForSpawning(class BlockPos const &, class BlockSource &);
    MCAPI static float const CHANCE_TO_SPAWN_IN_WILDERNESS;
    MCAPI static std::vector<float> const CHANCE_TO_SPAWN_PER_DAY;
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_MEETING_AREA;
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER;
    MCAPI static int const DISTANCE_IN_BLOCKS_FROM_PLAYER_SQUARE;
    MCAPI static int const LENGTH_OF_DAY_IN_TICKS;

};