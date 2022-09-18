/**
 * @file  RestrictOpenDoorGoal.hpp
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
 * @brief MC class RestrictOpenDoorGoal.
 *
 */
class RestrictOpenDoorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESTRICTOPENDOORGOAL
public:
    class RestrictOpenDoorGoal& operator=(class RestrictOpenDoorGoal const &) = delete;
    RestrictOpenDoorGoal(class RestrictOpenDoorGoal const &) = delete;
    RestrictOpenDoorGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1512086001
     */
    virtual ~RestrictOpenDoorGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@RestrictOpenDoorGoal@@UEAA_NXZ
     * @hash   212072153
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@RestrictOpenDoorGoal@@UEAA_NXZ
     * @hash   -688859465
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@RestrictOpenDoorGoal@@UEAAXXZ
     * @hash   916137506
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@RestrictOpenDoorGoal@@UEAAXXZ
     * @hash   -554950206
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @hash   -1403860986
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@RestrictOpenDoorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1447161993
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0RestrictOpenDoorGoal@@QEAA@AEAVMob@@@Z
     * @hash   100787110
     */
    MCAPI RestrictOpenDoorGoal(class Mob &);

};