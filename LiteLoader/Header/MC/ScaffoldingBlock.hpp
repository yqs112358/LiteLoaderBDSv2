/**
 * @file  ScaffoldingBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "HeavyBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScaffoldingBlock.
 *
 */
class ScaffoldingBlock : public HeavyBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCAFFOLDINGBLOCK
public:
    class ScaffoldingBlock& operator=(class ScaffoldingBlock const &) = delete;
    ScaffoldingBlock(class ScaffoldingBlock const &) = delete;
    ScaffoldingBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1894501003
     */
    virtual ~ScaffoldingBlock();
    /**
     * @vftbl  5
     * @symbol ?getCollisionShape@ScaffoldingBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
     * @hash   1106803847
     */
    virtual bool getCollisionShape(class AABB &, class Block const &, class IConstBlockSource const &, class BlockPos const &, class optional_ref<class GetCollisionShapeInterface const>) const;
    /**
     * @vftbl  10
     * @symbol ?getAABB@ScaffoldingBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -1403706511
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @hash   -327659668
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -299030517
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -278713055
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -276866013
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -275942492
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -275018971
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol ?isWaterBlocking@ScaffoldingBlock@@UEBA_NXZ
     * @hash   1596175321
     */
    virtual bool isWaterBlocking() const;
    /**
     * @vftbl  36
     * @hash   -273171929
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -272248408
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -271324887
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -270401366
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -250083904
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -249160383
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -248236862
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -246389820
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -245466299
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -244542778
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -243619257
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -242695736
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -241772215
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  53
     * @symbol ?canBeAscendedByJumping@ScaffoldingBlock@@UEBA_NAEBVActor@@AEBVBlockPos@@@Z
     * @hash   1276371438
     */
    virtual bool canBeAscendedByJumping(class Actor const &, class BlockPos const &) const;
    /**
     * @vftbl  59
     * @hash   -213143064
     */
    virtual void __unk_vfn_59();
    /**
     * @vftbl  60
     * @hash   -192825602
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @symbol ?canContainLiquid@ScaffoldingBlock@@UEBA_NXZ
     * @hash   1249846583
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl  67
     * @symbol ?checkIsPathable@ScaffoldingBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
     * @hash   1662373589
     */
    virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  73
     * @hash   -161425888
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  80
     * @hash   -135567300
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  90
     * @symbol ?mayPlace@ScaffoldingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1496136833
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  94
     * @symbol ?breaksFallingBlocks@ScaffoldingBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
     * @hash   1543298746
     */
    virtual bool breaksFallingBlocks(class Block const &, class BaseGameVersion) const;
    /**
     * @vftbl  98
     * @symbol ?neighborChanged@ScaffoldingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1394694669
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @hash   1332020102
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  106
     * @symbol ?getPlacementBlock@ScaffoldingBlock@@UEBAAEBVBlock@@AEAVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
     * @hash   -1146511680
     */
    virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl  124
     * @hash   1388354883
     */
    virtual void __unk_vfn_124();
    /**
     * @vftbl  126
     * @hash   1390201925
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  127
     * @hash   1391125446
     */
    virtual void __unk_vfn_127();
    /**
     * @vftbl  129
     * @symbol ?canSlide@ScaffoldingBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1394272670
     */
    virtual bool canSlide(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  132
     * @hash   1415136992
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl  148
     * @hash   1442572581
     */
    virtual void __unk_vfn_148();
    /**
     * @vftbl  152
     * @symbol ?animateTick@ScaffoldingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -789592410
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  157
     * @hash   1470278211
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl  168
     * @hash   1457546883
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1458470404
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @hash   1478787866
     */
    virtual void __unk_vfn_170();
    /**
     * @vftbl  171
     * @symbol ?onPlace@ScaffoldingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   655787395
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  174
     * @symbol ?tick@ScaffoldingBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   766600551
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  177
     * @hash   1534271201
     */
    virtual void __unk_vfn_177();
    /**
     * @vftbl  178
     * @symbol ?clip@ScaffoldingBlock@@UEBA?AVHitResult@@AEBVBlockSource@@AEBVBlockPos@@AEBVVec3@@2_N@Z
     * @hash   -849781501
     */
    virtual class HitResult clip(class BlockSource const &, class BlockPos const &, class Vec3 const &, class Vec3 const &, bool) const;
    /**
     * @vftbl  188
     * @hash   1563823873
     */
    virtual void __unk_vfn_188();
    /**
     * @vftbl  192
     * @symbol ?getDustColor@ScaffoldingBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
     * @hash   1169077421
     */
    virtual class mce::Color getDustColor(class Block const &) const;
    /**
     * @vftbl  193
     * @symbol ?getDustParticleName@ScaffoldingBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   1868963560
     */
    virtual std::string getDustParticleName(class Block const &) const;
    /**
     * @vftbl  194
     * @hash   1588758940
     */
    virtual void __unk_vfn_194();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCAFFOLDINGBLOCK
    /**
     * @symbol ?waterSpreadCausesSpawn@ScaffoldingBlock@@UEBA_NXZ
     * @hash   1839005598
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0ScaffoldingBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -600225489
     */
    MCAPI ScaffoldingBlock(std::string const &, int);
MCAPI static int const MAX_STABILITY;

//protected:
    /**
     * @symbol ?calculateStability@ScaffoldingBlock@@IEBAHAEBVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -449144310
     */
    MCAPI int calculateStability(class BlockSource const &, class BlockPos const &) const;

//private:
    /**
     * @symbol ?_updateBlockStability@ScaffoldingBlock@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   50589622
     */
    MCAPI bool _updateBlockStability(class BlockSource &, class BlockPos const &) const;

protected:

private:

};