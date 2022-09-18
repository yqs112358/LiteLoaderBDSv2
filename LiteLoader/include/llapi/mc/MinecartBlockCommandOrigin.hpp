/**
 * @file  MinecartBlockCommandOrigin.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "BlockCommandOrigin.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecartBlockCommandOrigin.
 *
 */
class MinecartBlockCommandOrigin : public BlockCommandOrigin {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTBLOCKCOMMANDORIGIN
public:
    class MinecartBlockCommandOrigin& operator=(class MinecartBlockCommandOrigin const &) = delete;
    MinecartBlockCommandOrigin(class MinecartBlockCommandOrigin const &) = delete;
    MinecartBlockCommandOrigin() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   473219169
     */
    virtual ~MinecartBlockCommandOrigin();
    /**
     * @vftbl  3
     * @symbol ?getBlockPosition@MinecartBlockCommandOrigin@@UEBA?AVBlockPos@@XZ
     * @hash   -1780840431
     */
    virtual class BlockPos getBlockPosition() const;
    /**
     * @vftbl  4
     * @symbol ?getWorldPosition@MinecartBlockCommandOrigin@@UEBA?AVVec3@@XZ
     * @hash   1297349054
     */
    virtual class Vec3 getWorldPosition() const;
    /**
     * @vftbl  8
     * @symbol ?getEntity@MinecartBlockCommandOrigin@@UEBAPEAVActor@@XZ
     * @hash   888895041
     */
    virtual class Actor * getEntity() const;
    /**
     * @vftbl  10
     * @symbol ?clone@MinecartBlockCommandOrigin@@UEBA?AV?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@XZ
     * @hash   1714699163
     */
    virtual std::unique_ptr<class CommandOrigin> clone() const;
    /**
     * @vftbl  17
     * @symbol ?canUseCommandsWithoutCheatsEnabled@MinecartBlockCommandOrigin@@UEBA_NXZ
     * @hash   1091825209
     */
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
    /**
     * @vftbl  23
     * @symbol ?getOriginType@MinecartBlockCommandOrigin@@UEBA?AW4CommandOriginType@@XZ
     * @hash   -613357206
     */
    virtual enum class CommandOriginType getOriginType() const;
    /**
     * @vftbl  29
     * @symbol ?serialize@MinecartBlockCommandOrigin@@UEBA?AVCompoundTag@@XZ
     * @hash   2073830513
     */
    virtual class CompoundTag serialize() const;
    /**
     * @vftbl  30
     * @symbol ?isValid@MinecartBlockCommandOrigin@@UEBA_NXZ
     * @hash   -933065917
     */
    virtual bool isValid() const;
    /**
     * @vftbl  32
     * @symbol ?_getBaseCommandBlock@MinecartBlockCommandOrigin@@MEBAPEAVBaseCommandBlock@@AEAVBlockSource@@@Z
     * @hash   223411005
     */
    virtual class BaseCommandBlock * _getBaseCommandBlock(class BlockSource &) const;
    /**
     * @vftbl  33
     * @symbol ?_getBlockEntity@MinecartBlockCommandOrigin@@MEBAPEAVCommandBlockActor@@AEAVBlockSource@@@Z
     * @hash   1702043478
     */
    virtual class CommandBlockActor * _getBlockEntity(class BlockSource &) const;
    /**
     * @symbol ??0MinecartBlockCommandOrigin@@QEAA@AEAVBlockSource@@AEBUActorUniqueID@@@Z
     * @hash   -1000883753
     */
    MCAPI MinecartBlockCommandOrigin(class BlockSource &, struct ActorUniqueID const &);
    /**
     * @symbol ?load@MinecartBlockCommandOrigin@@SA?AV?$unique_ptr@VMinecartBlockCommandOrigin@@U?$default_delete@VMinecartBlockCommandOrigin@@@std@@@std@@AEBVCompoundTag@@AEAVLevel@@@Z
     * @hash   1499108520
     */
    MCAPI static std::unique_ptr<class MinecartBlockCommandOrigin> load(class CompoundTag const &, class Level &);

};