/**
 * @file  FakeBatteryMonitorInterface.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BatteryMonitorInterface.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FakeBatteryMonitorInterface.
 *
 */
class FakeBatteryMonitorInterface : public BatteryMonitorInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAKEBATTERYMONITORINTERFACE
public:
    class FakeBatteryMonitorInterface& operator=(class FakeBatteryMonitorInterface const &) = delete;
    FakeBatteryMonitorInterface(class FakeBatteryMonitorInterface const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getBatteryStatus\@FakeBatteryMonitorInterface\@\@UEBA?AW4BatteryStatus\@\@XZ
     */
    virtual enum class BatteryStatus getBatteryStatus() const;
    /**
     * @vftbl 2
     * @symbol ?getBatteryLevel\@FakeBatteryMonitorInterface\@\@UEBAMXZ
     */
    virtual float getBatteryLevel() const;
    /**
     * @symbol ??0FakeBatteryMonitorInterface\@\@QEAA\@XZ
     */
    MCAPI FakeBatteryMonitorInterface();

};
