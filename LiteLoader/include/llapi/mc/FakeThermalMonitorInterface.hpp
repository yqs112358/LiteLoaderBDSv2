/**
 * @file  FakeThermalMonitorInterface.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ThermalMonitorInterface.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FakeThermalMonitorInterface.
 *
 */
class FakeThermalMonitorInterface : public ThermalMonitorInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAKETHERMALMONITORINTERFACE
public:
    class FakeThermalMonitorInterface& operator=(class FakeThermalMonitorInterface const &) = delete;
    FakeThermalMonitorInterface(class FakeThermalMonitorInterface const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getThermalState\@FakeThermalMonitorInterface\@\@UEBA?AW4ThermalState\@\@XZ
     */
    virtual enum class ThermalState getThermalState() const;
    /**
     * @vftbl 2
     * @symbol ?getThermalValueCelsius\@FakeThermalMonitorInterface\@\@UEBAMXZ
     */
    virtual float getThermalValueCelsius() const;
    /**
     * @vftbl 3
     * @symbol ?isLowBatteryModeEnabled\@FakeThermalMonitorInterface\@\@UEBA_NXZ
     */
    virtual bool isLowBatteryModeEnabled() const;
    /**
     * @symbol ??0FakeThermalMonitorInterface\@\@QEAA\@XZ
     */
    MCAPI FakeThermalMonitorInterface();

};
