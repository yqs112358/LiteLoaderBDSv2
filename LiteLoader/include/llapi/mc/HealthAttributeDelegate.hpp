/**
 * @file  HealthAttributeDelegate.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "AttributeInstanceDelegate.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HealthAttributeDelegate.
 *
 */
class HealthAttributeDelegate : public AttributeInstanceDelegate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEALTHATTRIBUTEDELEGATE
public:
    class HealthAttributeDelegate& operator=(class HealthAttributeDelegate const &) = delete;
    HealthAttributeDelegate(class HealthAttributeDelegate const &) = delete;
    HealthAttributeDelegate() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@HealthAttributeDelegate\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 3
     * @symbol ?willChange\@HealthAttributeDelegate\@\@UEAA_NMMAEBVAttributeBuff\@\@\@Z
     */
    virtual bool willChange(float, float, class AttributeBuff const &);
    /**
     * @vftbl 4
     * @symbol ?change\@HealthAttributeDelegate\@\@UEAAMMMAEBVAttributeBuff\@\@\@Z
     */
    virtual float change(float, float, class AttributeBuff const &);
    /**
     * @vftbl 5
     * @symbol ?getBuffValueWithModifiers\@HealthAttributeDelegate\@\@UEBAMAEBVAttributeBuff\@\@\@Z
     */
    virtual float getBuffValueWithModifiers(class AttributeBuff const &) const;
    /**
     * @symbol ??0HealthAttributeDelegate\@\@QEAA\@AEBVAttributeInstance\@\@PEAVMob\@\@\@Z
     */
    MCAPI HealthAttributeDelegate(class AttributeInstance const &, class Mob *);

};
