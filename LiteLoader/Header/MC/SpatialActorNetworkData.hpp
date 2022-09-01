/**
 * @file  SpatialActorNetworkData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpatialActorNetworkData.
 *
 */
class SpatialActorNetworkData {

#define AFTER_EXTRA
// Add Member There
public:
struct DebugSpatialPacketModifiers {
    DebugSpatialPacketModifiers() = delete;
    DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&) = delete;
    DebugSpatialPacketModifiers(DebugSpatialPacketModifiers const&&) = delete;
};
struct DebugSendRateModifiers {
    DebugSendRateModifiers() = delete;
    DebugSendRateModifiers(DebugSendRateModifiers const&) = delete;
    DebugSendRateModifiers(DebugSendRateModifiers const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPATIALACTORNETWORKDATA
public:
    class SpatialActorNetworkData& operator=(class SpatialActorNetworkData const &) = delete;
    SpatialActorNetworkData(class SpatialActorNetworkData const &) = delete;
    SpatialActorNetworkData() = delete;
#endif

public:
    /**
     * @symbol ??0SpatialActorNetworkData@@QEAA@AEAVActor@@@Z
     * @hash   -1248355204
     */
    MCAPI SpatialActorNetworkData(class Actor &);
    /**
     * @symbol ?enableAutoSend@SpatialActorNetworkData@@QEAAX_N@Z
     * @hash   -1125768726
     */
    MCAPI void enableAutoSend(bool);
    /**
     * @symbol ?getLastSentPositionForAddingEntity@SpatialActorNetworkData@@QEAA?AVVec3@@XZ
     * @hash   -2077269118
     */
    MCAPI class Vec3 getLastSentPositionForAddingEntity();
    /**
     * @symbol ?getLastSentRotationForAddingEntity@SpatialActorNetworkData@@QEAA?AVVec2@@XZ
     * @hash   511393050
     */
    MCAPI class Vec2 getLastSentRotationForAddingEntity();
    /**
     * @symbol ?getLastSentYBodyRotationForAddingEntity@SpatialActorNetworkData@@QEAAMXZ
     * @hash   -934741688
     */
    MCAPI float getLastSentYBodyRotationForAddingEntity();
    /**
     * @symbol ?getLastSentYHeadRotationForAddingEntity@SpatialActorNetworkData@@QEAAMXZ
     * @hash   1660005356
     */
    MCAPI float getLastSentYHeadRotationForAddingEntity();
    /**
     * @symbol ?handleClientData@SpatialActorNetworkData@@QEAAXAEBVMoveActorAbsoluteData@@@Z
     * @hash   -1619401314
     */
    MCAPI void handleClientData(class MoveActorAbsoluteData const &);
    /**
     * @symbol ?isAutoSendEnabled@SpatialActorNetworkData@@QEBA_NXZ
     * @hash   142903872
     */
    MCAPI bool isAutoSendEnabled() const;
    /**
     * @symbol ?sendUpdate@SpatialActorNetworkData@@QEAAX_N00@Z
     * @hash   -1340390038
     */
    MCAPI void sendUpdate(bool, bool, bool);
    /**
     * @symbol ?shouldSendMotionPredictionHintsPacket@SpatialActorNetworkData@@QEBA_NXZ
     * @hash   -1781343376
     */
    MCAPI bool shouldSendMotionPredictionHintsPacket() const;
    /**
     * @symbol ?shouldSendUpdate@SpatialActorNetworkData@@QEBA_N_N0@Z
     * @hash   -646096847
     */
    MCAPI bool shouldSendUpdate(bool, bool) const;
    /**
     * @symbol ?teleportEntity@SpatialActorNetworkData@@QEAAXAEBVVec3@@AEBVVec2@@M@Z
     * @hash   -1164140394
     */
    MCAPI void teleportEntity(class Vec3 const &, class Vec2 const &, float);
    /**
     * @symbol ?getDebugSpatialPacketModifiers@SpatialActorNetworkData@@SAAEAUDebugSpatialPacketModifiers@1@XZ
     * @hash   -2035741936
     */
    MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers & getDebugSpatialPacketModifiers();

//private:
    /**
     * @symbol ?_findRelevantPlayersToSendUpdate@SpatialActorNetworkData@@AEAA?AV?$vector@UNetworkIdentifierWithSubId@@V?$allocator@UNetworkIdentifierWithSubId@@@std@@@std@@XZ
     * @hash   57024019
     */
    MCAPI std::vector<struct NetworkIdentifierWithSubId> _findRelevantPlayersToSendUpdate();
    /**
     * @symbol ?_getOptimizationScore@SpatialActorNetworkData@@AEBA_KAEBUActorUniqueID@@@Z
     * @hash   -1791513083
     */
    MCAPI unsigned __int64 _getOptimizationScore(struct ActorUniqueID const &) const;
    /**
     * @symbol ?_initializeLastSentValues@SpatialActorNetworkData@@AEAAXXZ
     * @hash   1045500324
     */
    MCAPI void _initializeLastSentValues();
    /**
     * @symbol ?_shouldUpdateBasedOptimizationOnScore@SpatialActorNetworkData@@AEBA_NAEBUActorUniqueID@@@Z
     * @hash   431525373
     */
    MCAPI bool _shouldUpdateBasedOptimizationOnScore(struct ActorUniqueID const &) const;

private:
MCAPI static struct SpatialActorNetworkData::DebugSendRateModifiers mDebugSendRateModifiers;
MCAPI static struct SpatialActorNetworkData::DebugSpatialPacketModifiers mDebugSpatialPacketModifiers;

};