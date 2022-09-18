/**
 * @file  ProjectileComponent.hpp
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
 * @brief MC class ProjectileComponent.
 *
 */
class ProjectileComponent {

#define AFTER_EXTRA
// Add Member There
public:
enum class EAxis;

#undef AFTER_EXTRA
public:
    /**
     * @symbol ??0ProjectileComponent@@QEAA@XZ
     * @hash   984424368
     */
    MCAPI ProjectileComponent();
    /**
     * @symbol ??0ProjectileComponent@@QEAA@AEBV0@@Z
     * @hash   73812001
     */
    MCAPI ProjectileComponent(class ProjectileComponent const &);
    /**
     * @symbol ?addAdditionalSaveData@ProjectileComponent@@QEBAXAEAVCompoundTag@@@Z
     * @hash   1402475512
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?getAnchor@ProjectileComponent@@QEAA?AW4ProjectileAnchor@@XZ
     * @hash   1780104482
     */
    MCAPI enum class ProjectileAnchor getAnchor();
    /**
     * @symbol ?getCatchFire@ProjectileComponent@@QEBA_NXZ
     * @hash   -265153208
     */
    MCAPI bool getCatchFire() const;
    /**
     * @symbol ?getEnchantChanneling@ProjectileComponent@@QEBA_NXZ
     * @hash   -888995848
     */
    MCAPI bool getEnchantChanneling() const;
    /**
     * @symbol ?getGravity@ProjectileComponent@@QEAAMXZ
     * @hash   46091158
     */
    MCAPI float getGravity();
    /**
     * @symbol ?getIsDangerous@ProjectileComponent@@QEAA_NXZ
     * @hash   588664888
     */
    MCAPI bool getIsDangerous();
    /**
     * @symbol ?getKnockbackForce@ProjectileComponent@@QEBAMXZ
     * @hash   -831008894
     */
    MCAPI float getKnockbackForce() const;
    /**
     * @symbol ?getNoPhysics@ProjectileComponent@@QEBA_NXZ
     * @hash   -647473528
     */
    MCAPI bool getNoPhysics() const;
    /**
     * @symbol ?getOffset@ProjectileComponent@@QEAA?AVVec3@@XZ
     * @hash   -51329594
     */
    MCAPI class Vec3 getOffset();
    /**
     * @symbol ?getShootSound@ProjectileComponent@@QEAA?AW4LevelSoundEvent@@XZ
     * @hash   -981420230
     */
    MCAPI enum class LevelSoundEvent getShootSound();
    /**
     * @symbol ?getShootTarget@ProjectileComponent@@QEAA_NXZ
     * @hash   1470122888
     */
    MCAPI bool getShootTarget();
    /**
     * @symbol ?getShooterAngle@ProjectileComponent@@QEBA?AVVec3@@AEAVActor@@@Z
     * @hash   1787548817
     */
    MCAPI class Vec3 getShooterAngle(class Actor &) const;
    /**
     * @symbol ?getThrowPower@ProjectileComponent@@QEBAMXZ
     * @hash   -702820352
     */
    MCAPI float getThrowPower() const;
    /**
     * @symbol ?getUncertainty@ProjectileComponent@@QEBAMW4Difficulty@@@Z
     * @hash   289015977
     */
    MCAPI float getUncertainty(enum class Difficulty) const;
    /**
     * @symbol ?getUncertaintyBase@ProjectileComponent@@QEBAMXZ
     * @hash   -2105887866
     */
    MCAPI float getUncertaintyBase() const;
    /**
     * @symbol ?getUncertaintyMultiplier@ProjectileComponent@@QEBAMXZ
     * @hash   1717260854
     */
    MCAPI float getUncertaintyMultiplier() const;
    /**
     * @symbol ?handleMovementGravity@ProjectileComponent@@QEAAXAEAVActor@@@Z
     * @hash   -2012718084
     */
    MCAPI void handleMovementGravity(class Actor &);
    /**
     * @symbol ?handleMovementHoming@ProjectileComponent@@QEAAXAEAVActor@@@Z
     * @hash   -2028086650
     */
    MCAPI void handleMovementHoming(class Actor &);
    /**
     * @symbol ?hurt@ProjectileComponent@@QEAAXAEAVActor@@AEBVActorDamageSource@@@Z
     * @hash   1068716337
     */
    MCAPI void hurt(class Actor &, class ActorDamageSource const &);
    /**
     * @symbol ?incrementFlightTime@ProjectileComponent@@QEAAHXZ
     * @hash   -741043566
     */
    MCAPI int incrementFlightTime();
    /**
     * @symbol ?incrementLife@ProjectileComponent@@QEAAHXZ
     * @hash   -1160345248
     */
    MCAPI int incrementLife();
    /**
     * @symbol ?incrementOnGroundTime@ProjectileComponent@@QEAAHXZ
     * @hash   -586362082
     */
    MCAPI int incrementOnGroundTime();
    /**
     * @symbol ?initFromDefinition@ProjectileComponent@@QEAAXAEAVActor@@@Z
     * @hash   1109212594
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @symbol ?lerpMotion@ProjectileComponent@@QEAAXAEAVActor@@AEBVVec3@@@Z
     * @hash   -1005505363
     */
    MCAPI void lerpMotion(class Actor &, class Vec3 const &);
    /**
     * @symbol ?onHit@ProjectileComponent@@QEAAXAEAVActor@@AEBVHitResult@@@Z
     * @hash   -1420723365
     */
    MCAPI void onHit(class Actor &, class HitResult const &);
    /**
     * @symbol ??4ProjectileComponent@@QEAAAEAV0@AEBV0@@Z
     * @hash   1796823292
     */
    MCAPI class ProjectileComponent & operator=(class ProjectileComponent const &);
    /**
     * @symbol ?readAdditionalSaveData@ProjectileComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -2096655160
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?setActiveTarget@ProjectileComponent@@QEAAXAEAVActor@@PEAV2@@Z
     * @hash   2146008515
     */
    MCAPI void setActiveTarget(class Actor &, class Actor *);
    /**
     * @symbol ?setChanneling@ProjectileComponent@@QEAAXXZ
     * @hash   -9935113
     */
    MCAPI void setChanneling();
    /**
     * @symbol ?setEnchantImpaler@ProjectileComponent@@QEAAXAEBH@Z
     * @hash   1088239753
     */
    MCAPI void setEnchantImpaler(int const &);
    /**
     * @symbol ?setKnockbackForce@ProjectileComponent@@QEAAXM@Z
     * @hash   1812578400
     */
    MCAPI void setKnockbackForce(float);
    /**
     * @symbol ?setNoPhysics@ProjectileComponent@@QEAAX_N@Z
     * @hash   -371338732
     */
    MCAPI void setNoPhysics(bool);
    /**
     * @symbol ?setOwnerId@ProjectileComponent@@QEAAXUActorUniqueID@@@Z
     * @hash   1049219336
     */
    MCAPI void setOwnerId(struct ActorUniqueID);
    /**
     * @symbol ?setPotionEffect@ProjectileComponent@@QEAAXH@Z
     * @hash   -1012429942
     */
    MCAPI void setPotionEffect(int);
    /**
     * @symbol ?setSplashRange@ProjectileComponent@@QEAAXM@Z
     * @hash   831137966
     */
    MCAPI void setSplashRange(float);
    /**
     * @symbol ?shoot@ProjectileComponent@@QEAAXAEAVActor@@0@Z
     * @hash   -910401657
     */
    MCAPI void shoot(class Actor &, class Actor &);
    /**
     * @symbol ?shoot@ProjectileComponent@@QEAAXAEAVActor@@AEBVVec3@@MM1PEAV2@@Z
     * @hash   1926931825
     */
    MCAPI void shoot(class Actor &, class Vec3 const &, float, float, class Vec3 const &, class Actor *);
    /**
     * @symbol ??1ProjectileComponent@@QEAA@XZ
     * @hash   -429246544
     */
    MCAPI ~ProjectileComponent();
    /**
     * @symbol ?DELAY_ON_HIT@ProjectileComponent@@2IB
     * @hash   -1932678387
     */
    MCAPI static unsigned int const DELAY_ON_HIT;

//private:
    /**
     * @symbol ?_handleLightningOnHit@ProjectileComponent@@AEAAXAEAVActor@@@Z
     * @hash   -179695282
     */
    MCAPI void _handleLightningOnHit(class Actor &);
    /**
     * @symbol ?_selectNextMoveDirection@ProjectileComponent@@AEAAXAEAVActor@@W4EAxis@1@@Z
     * @hash   -153016613
     */
    MCAPI void _selectNextMoveDirection(class Actor &, enum class ProjectileComponent::EAxis);

private:

};