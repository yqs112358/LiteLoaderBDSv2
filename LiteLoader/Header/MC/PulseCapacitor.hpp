/**
 * @file  PulseCapacitor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProducerComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PulseCapacitor.
 *
 */
class PulseCapacitor : public ProducerComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PULSECAPACITOR
public:
    class PulseCapacitor& operator=(class PulseCapacitor const &) = delete;
    PulseCapacitor(class PulseCapacitor const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2069468275
     */
    virtual ~PulseCapacitor();
    /**
     * @vftbl  1
     * @symbol ?getStrength@PulseCapacitor@@UEBAHXZ
     * @hash   -1762067111
     */
    virtual int getStrength() const;
    /**
     * @vftbl  3
     * @symbol ?setStrength@PulseCapacitor@@UEAAXH@Z
     * @hash   -663251474
     */
    virtual void setStrength(int);
    /**
     * @vftbl  6
     * @symbol ?canConsumePowerAnyDirection@PulseCapacitor@@UEBA_NXZ
     * @hash   691554075
     */
    virtual bool canConsumePowerAnyDirection() const;
    /**
     * @vftbl  7
     * @symbol ?canConsumerPower@PulseCapacitor@@UEBA_NXZ
     * @hash   1652748366
     */
    virtual bool canConsumerPower() const;
    /**
     * @vftbl  12
     * @symbol ?allowConnection@PulseCapacitor@@UEAA_NAEAVCircuitSceneGraph@@AEBVCircuitTrackingInfo@@AEA_N@Z
     * @hash   1139167705
     */
    virtual bool allowConnection(class CircuitSceneGraph &, class CircuitTrackingInfo const &, bool &);
    /**
     * @vftbl  14
     * @symbol ?evaluate@PulseCapacitor@@UEAA_NAEAVCircuitSystem@@AEBVBlockPos@@@Z
     * @hash   -1436912785
     */
    virtual bool evaluate(class CircuitSystem &, class BlockPos const &);
    /**
     * @vftbl  17
     * @hash   -329506710
     */
    virtual void __unk_vfn_17();
    /**
     * @vftbl  20
     * @hash   -307342206
     */
    virtual void __unk_vfn_20();
    /**
     * @vftbl  22
     * @symbol ?getCircuitComponentType@PulseCapacitor@@UEBA?AW4CircuitComponentType@@XZ
     * @hash   1449383661
     */
    virtual enum CircuitComponentType getCircuitComponentType() const;
    /**
     * @vftbl  24
     * @symbol ?getPoweroutDirection@PulseCapacitor@@UEBAEXZ
     * @hash   -812910704
     */
    virtual unsigned char getPoweroutDirection() const;
    /**
     * @symbol ??0PulseCapacitor@@QEAA@XZ
     * @hash   -215202731
     */
    MCAPI PulseCapacitor();

};