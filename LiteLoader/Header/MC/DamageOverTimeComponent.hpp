// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DamageOverTimeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGEOVERTIMECOMPONENT
public:
    class DamageOverTimeComponent& operator=(class DamageOverTimeComponent const &) = delete;
    DamageOverTimeComponent(class DamageOverTimeComponent const &) = delete;
    DamageOverTimeComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DAMAGEOVERTIMECOMPONENT
#endif
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    MCAPI int getDamageTime() const;
    MCAPI int getDamageTimeInterval() const;
    MCAPI int getHurtValue() const;
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    MCAPI void setDamageTime(int);

protected:

private:

};