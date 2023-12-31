/**
 * @file  LegacyBodyControl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BodyControl.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LegacyBodyControl.
 *
 */
class LegacyBodyControl : public BodyControl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYBODYCONTROL
public:
    class LegacyBodyControl& operator=(class LegacyBodyControl const &) = delete;
    LegacyBodyControl(class LegacyBodyControl const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?clientTick\@LegacyBodyControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void clientTick(class Mob &);
    /**
     * @symbol ??0LegacyBodyControl\@\@QEAA\@XZ
     */
    MCAPI LegacyBodyControl();

};
