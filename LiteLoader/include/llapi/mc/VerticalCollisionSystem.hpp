/**
 * @file  VerticalCollisionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VerticalCollisionSystem.
 *
 */
class VerticalCollisionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VERTICALCOLLISIONSYSTEM
public:
    class VerticalCollisionSystem& operator=(class VerticalCollisionSystem const &) = delete;
    VerticalCollisionSystem(class VerticalCollisionSystem const &) = delete;
    VerticalCollisionSystem() = delete;
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
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol ?tick\@VerticalCollisionSystem\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UMinecartFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UVerticalCollisionFlag\@\@\@\@\@\@U?$Read\@USynchedActorDataComponent\@\@UMoveRequestComponent\@\@UAABBShapeComponent\@\@UDimensionTypeComponent\@\@UStateVectorComponent\@\@\@\@U?$Write\@UStateVectorComponent\@\@UWalkDistComponent\@\@\@\@U?$AddRemove\@UBounceComponent\@\@\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<struct Filter<class FlagComponent<struct MinecartFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct VerticalCollisionFlag>>, struct Read<struct SynchedActorDataComponent, struct MoveRequestComponent, struct AABBShapeComponent, struct DimensionTypeComponent, struct StateVectorComponent>, struct Write<struct StateVectorComponent, struct WalkDistComponent>, struct AddRemove<struct BounceComponent>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &);
    /**
     * @vftbl 6
     * @symbol ?singleTick\@VerticalCollisionSystem\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UMinecartFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UVerticalCollisionFlag\@\@\@\@\@\@U?$Read\@USynchedActorDataComponent\@\@UMoveRequestComponent\@\@UAABBShapeComponent\@\@UDimensionTypeComponent\@\@UStateVectorComponent\@\@\@\@U?$Write\@UStateVectorComponent\@\@UWalkDistComponent\@\@\@\@U?$AddRemove\@UBounceComponent\@\@\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct MinecartFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct VerticalCollisionFlag>>, struct Read<struct SynchedActorDataComponent, struct MoveRequestComponent, struct AABBShapeComponent, struct DimensionTypeComponent, struct StateVectorComponent>, struct Write<struct StateVectorComponent, struct WalkDistComponent>, struct AddRemove<struct BounceComponent>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class StrictEntityContext &);
    /**
     * @symbol ?create\@VerticalCollisionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?tickVerticalCollisionSystem\@VerticalCollisionSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UMinecartFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UVerticalCollisionFlag\@\@\@\@\@\@U?$Read\@USynchedActorDataComponent\@\@UMoveRequestComponent\@\@UAABBShapeComponent\@\@UDimensionTypeComponent\@\@UStateVectorComponent\@\@\@\@U?$Write\@UStateVectorComponent\@\@UWalkDistComponent\@\@\@\@U?$AddRemove\@UBounceComponent\@\@\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tickVerticalCollisionSystem(class StrictEntityContext const &, struct AABBShapeComponent const &, struct StateVectorComponent const &, class StrictExecutionContext<struct Filter<class FlagComponent<struct MinecartFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct VerticalCollisionFlag>>, struct Read<struct SynchedActorDataComponent, struct MoveRequestComponent, struct AABBShapeComponent, struct DimensionTypeComponent, struct StateVectorComponent>, struct Write<struct StateVectorComponent, struct WalkDistComponent>, struct AddRemove<struct BounceComponent>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>> &, class IConstBlockSource const &);

};
