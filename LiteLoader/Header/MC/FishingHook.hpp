/**
 * @file  FishingHook.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FishingHook.
 *
 */
class FishingHook : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHINGHOOK
public:
    class FishingHook& operator=(class FishingHook const &) = delete;
    FishingHook(class FishingHook const &) = delete;
    FishingHook() = delete;
#endif

public:
    /**
     * @vftbl  8
     * @symbol ?reloadHardcoded@FishingHook@@MEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   1897099897
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -1233442405
     */
    virtual ~FishingHook();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  49
     * @symbol ?normalTick@FishingHook@@UEAAXXZ
     * @hash   8142942
     */
    virtual void normalTick();
    /**
     * @vftbl  61
     * @hash   -198636769
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  68
     * @hash   -185437434
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl  80
     * @symbol ?getShadowRadius@FishingHook@@UEBAMXZ
     * @hash   -1382752247
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  82
     * @hash   -133720258
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  85
     * @hash   -137684383
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl  88
     * @hash   -128179132
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl  96
     * @hash   -108131711
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl  99
     * @hash   -98626460
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl  106
     * @hash   1332943623
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl  108
     * @hash   1334790665
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  109
     * @hash   1328979498
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  111
     * @hash   1356955169
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl  142
     * @symbol ?handleEntityEvent@FishingHook@@UEAAXW4ActorEvent@@H@Z
     * @hash   22640633
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @vftbl  166
     * @symbol ?save@FishingHook@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   65841203
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  172
     * @symbol ?getSourceUniqueID@FishingHook@@UEBA?AUActorUniqueID@@XZ
     * @hash   -2146754503
     */
    virtual struct ActorUniqueID getSourceUniqueID() const;
    /**
     * @vftbl  181
     * @symbol ?canChangeDimensionsUsingPortal@FishingHook@@UEBA_NXZ
     * @hash   1813953646
     */
    virtual bool canChangeDimensionsUsingPortal() const;
    /**
     * @vftbl  182
     * @hash   1509264059
     */
    virtual void __unk_vfn_182();
    /**
     * @vftbl  196
     * @hash   1590605982
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  222
     * @hash   -2034256014
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  223
     * @hash   -2020032253
     */
    virtual void __unk_vfn_223();
    /**
     * @vftbl  248
     * @hash   -2007175034
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @hash   -786620466
     */
    virtual void __unk_vfn_251();
    /**
     * @vftbl  254
     * @symbol ?shouldDropDeathLoot@FishingHook@@UEBA_NXZ
     * @hash   1704770021
     */
    virtual bool shouldDropDeathLoot() const;
    /**
     * @vftbl  269
     * @hash   -1906709211
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl  277
     * @hash   -1873192414
     */
    virtual void __unk_vfn_277();
    /**
     * @symbol ??0FishingHook@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   -125485895
     */
    MCAPI FishingHook(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getOwner@FishingHook@@QEAAPEAVActor@@XZ
     * @hash   93506691
     */
    MCAPI class Actor * getOwner();
    /**
     * @symbol ?postNormalTick@FishingHook@@QEAAXXZ
     * @hash   -976314101
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?retrieve@FishingHook@@QEAAHXZ
     * @hash   484350720
     */
    MCAPI int retrieve();
MCAPI static float const BOBBER_SIZE;

//protected:
    /**
     * @symbol ?_fishPosEvent@FishingHook@@IEAAXXZ
     * @hash   1939303203
     */
    MCAPI void _fishPosEvent();
    /**
     * @symbol ?_fishTeaseEvent@FishingHook@@IEAAXXZ
     * @hash   -989028779
     */
    MCAPI void _fishTeaseEvent();
    /**
     * @symbol ?_fishhookEvent@FishingHook@@IEAAXXZ
     * @hash   465334422
     */
    MCAPI void _fishhookEvent();
    /**
     * @symbol ?_getWaterPercentage@FishingHook@@IEAAMXZ
     * @hash   -597433928
     */
    MCAPI float _getWaterPercentage();
    /**
     * @symbol ?_hitCheck@FishingHook@@IEAA?AVHitResult@@XZ
     * @hash   431558259
     */
    MCAPI class HitResult _hitCheck();
    /**
     * @symbol ?_pullCloser@FishingHook@@IEAAXAEAVActor@@M@Z
     * @hash   -464886625
     */
    MCAPI void _pullCloser(class Actor &, float);
    /**
     * @symbol ?_serverHooked@FishingHook@@IEAA_NXZ
     * @hash   2057602564
     */
    MCAPI bool _serverHooked();
    /**
     * @symbol ?_serverLured@FishingHook@@IEAA_NXZ
     * @hash   -84602058
     */
    MCAPI bool _serverLured();
    /**
     * @symbol ?_updateGravity@FishingHook@@IEAAXXZ
     * @hash   -1501532260
     */
    MCAPI void _updateGravity();
    /**
     * @symbol ?_updateServer@FishingHook@@IEAAXXZ
     * @hash   522565297
     */
    MCAPI void _updateServer();

protected:

};