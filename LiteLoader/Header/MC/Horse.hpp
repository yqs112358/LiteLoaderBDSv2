/**
 * @file  Horse.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Horse.
 *
 */
class Horse : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSE
public:
    class Horse& operator=(class Horse const &) = delete;
    Horse(class Horse const &) = delete;
    Horse() = delete;
#endif

public:
    /**
     * @vftbl  8
     * @symbol ?reloadHardcoded@Horse@@EEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     * @hash   -36273230
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @hash   -323893205
     */
    virtual ~Horse();
    /**
     * @vftbl  36
     * @symbol ?getInterpolatedRidingOffset@Horse@@UEBA?AVVec3@@M@Z
     * @hash   -1828516612
     */
    virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  49
     * @symbol ?normalTick@Horse@@UEAAXXZ
     * @hash   1637898910
     */
    virtual void normalTick();
    /**
     * @vftbl  52
     * @symbol ?positionPassenger@Horse@@UEAAXAEAVActor@@M@Z
     * @hash   322301382
     */
    virtual void positionPassenger(class Actor &, float);
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
     * @symbol ?getShadowRadius@Horse@@UEBAMXZ
     * @hash   447514089
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
     * @vftbl  92
     * @symbol ?isImmobile@Horse@@MEBA_NXZ
     * @hash   -152496956
     */
    virtual bool isImmobile() const;
    /**
     * @vftbl  96
     * @hash   -108131711
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl  99
     * @hash   -105361148
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
     * @vftbl  122
     * @symbol ?onFailedTame@Horse@@UEAAXXZ
     * @hash   1197217627
     */
    virtual void onFailedTame();
    /**
     * @vftbl  126
     * @symbol ?setStanding@Horse@@UEAAX_N@Z
     * @hash   742142004
     */
    virtual void setStanding(bool);
    /**
     * @vftbl  141
     * @symbol ?feed@Horse@@UEAAXH@Z
     * @hash   -1427509049
     */
    virtual void feed(int);
    /**
     * @vftbl  142
     * @symbol ?handleEntityEvent@Horse@@UEAAXW4ActorEvent@@H@Z
     * @hash   627284553
     */
    virtual void handleEntityEvent(enum ActorEvent, int);
    /**
     * @vftbl  174
     * @symbol ?canFreeze@Horse@@UEBA_NXZ
     * @hash   -1832760750
     */
    virtual bool canFreeze() const;
    /**
     * @vftbl  182
     * @hash   1509264059
     */
    virtual void __unk_vfn_182();
    /**
     * @vftbl  184
     * @symbol ?getControllingPlayer@Horse@@UEBA?AUActorUniqueID@@XZ
     * @hash   -1086478422
     */
    virtual struct ActorUniqueID getControllingPlayer() const;
    /**
     * @vftbl  186
     * @symbol ?causeFallDamage@Horse@@MEAAXMMVActorDamageSource@@@Z
     * @hash   417685590
     */
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    /**
     * @vftbl  187
     * @symbol ?handleFallDistanceOnServer@Horse@@MEAAXMM_N@Z
     * @hash   -1400103537
     */
    virtual void handleFallDistanceOnServer(float, float, bool);
    /**
     * @vftbl  191
     * @symbol ?onSynchedDataUpdate@Horse@@UEAAXH@Z
     * @hash   -721614475
     */
    virtual void onSynchedDataUpdate(int);
    /**
     * @vftbl  196
     * @hash   1590605982
     */
    virtual void __unk_vfn_196();
    /**
     * @vftbl  219
     * @symbol ?openContainerComponent@Horse@@UEAAXAEAVPlayer@@@Z
     * @hash   500470819
     */
    virtual void openContainerComponent(class Player &);
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
     * @vftbl  253
     * @symbol ?die@Horse@@UEAAXAEBVActorDamageSource@@@Z
     * @hash   2050873136
     */
    virtual void die(class ActorDamageSource const &);
    /**
     * @vftbl  267
     * @symbol ?updateEntitySpecificMolangVariables@Horse@@UEAAXAEAVRenderParams@@@Z
     * @hash   42895445
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  269
     * @hash   -1906709211
     */
    virtual void __unk_vfn_269();
    /**
     * @vftbl  270
     * @symbol ?_hurt@Horse@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     * @hash   -317123997
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  275
     * @symbol ?_playStepSound@Horse@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1046072603
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  277
     * @hash   -1873192414
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @hash   -1895428993
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  297
     * @symbol ?travel@Horse@@UEAAXMMM@Z
     * @hash   2034804814
     */
    virtual void travel(float, float, float);
    /**
     * @vftbl  300
     * @symbol ?aiStep@Horse@@UEAAXXZ
     * @hash   -1760160562
     */
    virtual void aiStep();
    /**
     * @vftbl  313
     * @hash   -1210176411
     */
    virtual void __unk_vfn_313();
    /**
     * @vftbl  317
     * @hash   -1157463639
     */
    virtual void __unk_vfn_317();
    /**
     * @vftbl  322
     * @symbol ?getArmorValue@Horse@@UEBAHXZ
     * @hash   512418006
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  351
     * @hash   -1055222849
     */
    virtual void __unk_vfn_351();
    /**
     * @vftbl  365
     * @hash   -1022899614
     */
    virtual void __unk_vfn_365();
    /**
     * @vftbl  367
     * @symbol ?setType@Horse@@UEAAXH@Z
     * @hash   -965298711
     */
    virtual void setType(int);
    /**
     * @vftbl  368
     * @symbol ?getType@Horse@@UEBAHXZ
     * @hash   999331582
     */
    virtual int getType() const;
    /**
     * @vftbl  369
     * @symbol ?setHorseEating@Horse@@UEAAX_N@Z
     * @hash   -1369926851
     */
    virtual void setHorseEating(bool);
    /**
     * @vftbl  370
     * @symbol ?getStandAnim@Horse@@UEBAMM@Z
     * @hash   1062787054
     */
    virtual float getStandAnim(float) const;
    /**
     * @vftbl  371
     * @symbol ?isAdult@Horse@@UEBA_NXZ
     * @hash   1056805483
     */
    virtual bool isAdult() const;
    /**
     * @vftbl  372
     * @symbol ?isHorseEating@Horse@@UEBA_NXZ
     * @hash   -30973128
     */
    virtual bool isHorseEating() const;
    /**
     * @vftbl  373
     * @symbol ?isMouthOpen@Horse@@UEBA_NXZ
     * @hash   -1508868542
     */
    virtual bool isMouthOpen() const;
    /**
     * @vftbl  374
     * @symbol ?isTailMoving@Horse@@UEBA_NXZ
     * @hash   -182668893
     */
    virtual bool isTailMoving() const;
    /**
     * @vftbl  375
     * @symbol ?makeMad@Horse@@UEAAXXZ
     * @hash   -723600228
     */
    virtual void makeMad();
    /**
     * @vftbl  376
     * @symbol ?tameToPlayer@Horse@@UEAA_NAEAVPlayer@@_N@Z
     * @hash   -1879576682
     */
    virtual bool tameToPlayer(class Player &, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HORSE
    /**
     * @symbol ?useNewAi@Horse@@MEBA_NXZ
     * @hash   -1863483371
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @symbol ??0Horse@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     * @hash   1378830553
     */
    MCAPI Horse(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?postNormalTick@Horse@@QEAAXXZ
     * @hash   1745408379
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?postTravel@Horse@@QEAAXPEAVActor@@_NW4HorsePostTravelType@@@Z
     * @hash   682242783
     */
    MCAPI void postTravel(class Actor *, bool, enum HorsePostTravelType);
MCAPI static int const DONKEY_CHEST_COUNT;
    /**
     * @symbol ?getInterpolatedRidingOffset@Horse@@SA?AVVec3@@AEBVVec2@@MMM@Z
     * @hash   981837608
     */
    MCAPI static class Vec3 getInterpolatedRidingOffset(class Vec2 const &, float, float, float);

//private:
    /**
     * @symbol ?openMouth@Horse@@AEAAXXZ
     * @hash   287480028
     */
    MCAPI void openMouth();
    /**
     * @symbol ?setHorseFlag@Horse@@AEAAXW4HorseFlags@@_N@Z
     * @hash   -1541147032
     */
    MCAPI void setHorseFlag(enum HorseFlags, bool);
    /**
     * @symbol ?setHorseType@Horse@@AEAA_NAEAW4ActorType@@@Z
     * @hash   -954912122
     */
    MCAPI bool setHorseType(enum ActorType &);

private:
MCAPI static int const DATA_AGE;

};