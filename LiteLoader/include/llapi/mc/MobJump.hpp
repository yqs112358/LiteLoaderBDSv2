/**
 * @file  MobJump.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace MobJump {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?getJumpStartPosition\@MobJump\@\@YA?AVVec3\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI class Vec3 getJumpStartPosition(class EntityContext const &);
    /**
     * @symbol ?getNoJumpDelay\@MobJump\@\@YAHAEBVEntityContext\@\@\@Z
     */
    MCAPI int getNoJumpDelay(class EntityContext const &);
    /**
     * @symbol ?initializeMob\@MobJump\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeMob(class EntityContext &);
    /**
     * @symbol ?isJumping\@MobJump\@\@YA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI bool isJumping(class EntityContext const &);
    /**
     * @symbol ?setJumpPendingScale\@MobJump\@\@YAXAEAVEntityContext\@\@M\@Z
     */
    MCAPI void setJumpPendingScale(class EntityContext &, float);
    /**
     * @symbol ?setJumpStartPosition\@MobJump\@\@YAXAEAVEntityContext\@\@AEBVVec3\@\@\@Z
     */
    MCAPI void setJumpStartPosition(class EntityContext &, class Vec3 const &);
    /**
     * @symbol ?setJumpVelRedux\@MobJump\@\@YAXAEAVEntityContext\@\@_N\@Z
     */
    MCAPI void setJumpVelRedux(class EntityContext &, bool);
    /**
     * @symbol ?setNoJumpDelay\@MobJump\@\@YAXAEAVEntityContext\@\@H\@Z
     */
    MCAPI void setNoJumpDelay(class EntityContext &, int);

};