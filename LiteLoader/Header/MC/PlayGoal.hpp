/**
 * @file  PlayGoal.hpp
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
 * @brief MC class PlayGoal.
 *
 */
class PlayGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYGOAL
public:
    class PlayGoal& operator=(class PlayGoal const &) = delete;
    PlayGoal(class PlayGoal const &) = delete;
    PlayGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1170159153
     */
    virtual ~PlayGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@PlayGoal@@UEAA_NXZ
     * @hash   -1789398679
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@PlayGoal@@UEAA_NXZ
     * @hash   592369079
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?start@PlayGoal@@UEAAXXZ
     * @hash   -983172398
     */
    virtual void start();
    /**
     * @vftbl  5
     * @symbol ?stop@PlayGoal@@UEAAXXZ
     * @hash   1150048866
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@PlayGoal@@UEAAXXZ
     * @hash   -755980755
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@PlayGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   315257095
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0PlayGoal@@QEAA@AEAVVillager@@M@Z
     * @hash   2053545795
     */
    MCAPI PlayGoal(class Villager &, float);

};