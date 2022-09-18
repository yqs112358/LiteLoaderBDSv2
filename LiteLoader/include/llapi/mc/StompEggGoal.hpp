/**
 * @file  StompEggGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StompBlockGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StompEggGoal.
 *
 */
class StompEggGoal : public StompBlockGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOMPEGGGOAL
public:
    class StompEggGoal& operator=(class StompEggGoal const &) = delete;
    StompEggGoal(class StompEggGoal const &) = delete;
    StompEggGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2144261617
     */
    virtual ~StompEggGoal();
    /**
     * @vftbl  3
     * @hash   -1364347549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@StompEggGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1073604953
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @hash   -1402013944
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @hash   -1352071735
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  18
     * @symbol ?_createBreakProgressParticles@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
     * @hash   -693163813
     */
    virtual void _createBreakProgressParticles(class Level &, class BlockSource &, class BlockPos);
    /**
     * @vftbl  19
     * @symbol ?_createDestroyParticles@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
     * @hash   2025727609
     */
    virtual void _createDestroyParticles(class Level &, class BlockSource &, class BlockPos);
    /**
     * @vftbl  20
     * @symbol ?_playBreakProgressSound@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
     * @hash   -947511455
     */
    virtual void _playBreakProgressSound(class Level &, class BlockSource &, class BlockPos);
    /**
     * @vftbl  21
     * @symbol ?_playDestroySound@StompEggGoal@@MEAAXAEAVLevel@@AEAVBlockSource@@VBlockPos@@@Z
     * @hash   -2134115777
     */
    virtual void _playDestroySound(class Level &, class BlockSource &, class BlockPos);
    /**
     * @symbol ??0StompEggGoal@@QEAA@AEAVMob@@MHHMH@Z
     * @hash   -1611657667
     */
    MCAPI StompEggGoal(class Mob &, float, int, int, float, int);

};