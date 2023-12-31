/**
 * @file  EquipItemGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Goal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EquipItemGoal.
 *
 */
class EquipItemGoal : public Goal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EQUIPITEMGOAL
public:
    class EquipItemGoal& operator=(class EquipItemGoal const &) = delete;
    EquipItemGoal(class EquipItemGoal const &) = delete;
    EquipItemGoal() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@EquipItemGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@EquipItemGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 6
     * @symbol ?tick\@EquipItemGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol ?appendDebugInfo\@EquipItemGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0EquipItemGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI EquipItemGoal(class Mob &);

//private:
    /**
     * @symbol ?_dropItem\@EquipItemGoal\@\@AEBAXAEBVItemStack\@\@\@Z
     */
    MCAPI void _dropItem(class ItemStack const &) const;
    /**
     * @symbol ?_sendMobEquipmentPacket\@EquipItemGoal\@\@AEBAXVMobEquipmentPacket\@\@\@Z
     */
    MCAPI void _sendMobEquipmentPacket(class MobEquipmentPacket) const;

private:

};
