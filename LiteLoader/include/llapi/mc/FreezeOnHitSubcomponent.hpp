/**
 * @file  FreezeOnHitSubcomponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "OnHitSubcomponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FreezeOnHitSubcomponent.
 *
 */
class FreezeOnHitSubcomponent : public OnHitSubcomponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FREEZEONHITSUBCOMPONENT
public:
    class FreezeOnHitSubcomponent& operator=(class FreezeOnHitSubcomponent const &) = delete;
    FreezeOnHitSubcomponent(class FreezeOnHitSubcomponent const &) = delete;
    FreezeOnHitSubcomponent() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?readfromJSON\@FreezeOnHitSubcomponent\@\@UEAAXAEAVValue\@Json\@\@AEBVSemVersion\@\@\@Z
     */
    virtual void readfromJSON(class Json::Value &, class SemVersion const &);
    /**
     * @vftbl 2
     * @symbol ?writetoJSON\@FreezeOnHitSubcomponent\@\@UEBAXAEAVValue\@Json\@\@\@Z
     */
    virtual void writetoJSON(class Json::Value &) const;
    /**
     * @vftbl 3
     * @symbol ?doOnHitEffect\@FreezeOnHitSubcomponent\@\@UEAAXAEAVActor\@\@AEAVProjectileComponent\@\@\@Z
     */
    virtual void doOnHitEffect(class Actor &, class ProjectileComponent &);
    /**
     * @vftbl 4
     * @symbol ?getName\@FreezeOnHitSubcomponent\@\@UEAAPEBDXZ
     */
    virtual char const * getName();

};
