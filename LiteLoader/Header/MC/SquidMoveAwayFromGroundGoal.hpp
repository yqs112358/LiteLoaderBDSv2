/**
 * @file  SquidMoveAwayFromGroundGoal.hpp
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
 * @brief MC class SquidMoveAwayFromGroundGoal.
 *
 */
class SquidMoveAwayFromGroundGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SQUIDMOVEAWAYFROMGROUNDGOAL
public:
    class SquidMoveAwayFromGroundGoal& operator=(class SquidMoveAwayFromGroundGoal const &) = delete;
    SquidMoveAwayFromGroundGoal(class SquidMoveAwayFromGroundGoal const &) = delete;
    SquidMoveAwayFromGroundGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1373154147
     */
    virtual ~SquidMoveAwayFromGroundGoal();
    /**
     * @vftbl  1
     * @hash   -1366194591
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl  2
     * @hash   75789218
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @hash   76712739
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@SquidMoveAwayFromGroundGoal@@UEAAXXZ
     * @hash   -1578451548
     */
    virtual void start();
    /**
     * @vftbl  5
     * @hash   -1404784507
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @hash   -1403860986
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@SquidMoveAwayFromGroundGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1568690475
     */
    virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUIDMOVEAWAYFROMGROUNDGOAL
    /**
     * @symbol ?canContinueToUse@SquidMoveAwayFromGroundGoal@@UEAA_NXZ
     * @hash   768215673
     */
    MCVAPI bool canContinueToUse();
    /**
     * @symbol ?canUse@SquidMoveAwayFromGroundGoal@@UEAA_NXZ
     * @hash   -1043559781
     */
    MCVAPI bool canUse();
    /**
     * @symbol ?stop@SquidMoveAwayFromGroundGoal@@UEAAXXZ
     * @hash   44441972
     */
    MCVAPI void stop();
    /**
     * @symbol ?tick@SquidMoveAwayFromGroundGoal@@UEAAXXZ
     * @hash   -2052616657
     */
    MCVAPI void tick();
#endif

};