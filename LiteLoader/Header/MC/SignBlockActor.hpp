/**
 * @file  SignBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SignBlockActor.
 *
 */
class SignBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There
public:
enum SignType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIGNBLOCKACTOR
public:
    class SignBlockActor& operator=(class SignBlockActor const &) = delete;
    SignBlockActor(class SignBlockActor const &) = delete;
    SignBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1882880847
     */
    virtual ~SignBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@SignBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   817632652
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@SignBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -1227165029
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  8
     * @symbol ?onChanged@SignBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -283299555
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -383143003
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @hash   -379448919
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  17
     * @symbol ?getShadowRadius@SignBlockActor@@UEBAMAEAVBlockSource@@@Z
     * @hash   1180194321
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @vftbl  25
     * @symbol ?getImmersiveReaderText@SignBlockActor@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
     * @hash   726250345
     */
    virtual std::string getImmersiveReaderText(class BlockSource &);
    /**
     * @vftbl  28
     * @hash   -348972726
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @hash   -312330757
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -292013295
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -325884701
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -324961180
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -324037659
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol ?_getUpdatePacket@SignBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   -727346114
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  36
     * @symbol ?_onUpdatePacket@SignBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   517134340
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0SignBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   -1366349592
     */
    MCAPI SignBlockActor(class BlockPos const &);
    /**
     * @symbol ?getMessage@SignBlockActor@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -1400519440
     */
    MCAPI std::string const & getMessage();
    /**
     * @symbol ?getSignTextColor@SignBlockActor@@QEBAAEBVColor@mce@@XZ
     * @hash   1939713788
     */
    MCAPI class mce::Color const & getSignTextColor() const;
    /**
     * @symbol ?isBug471852Resolved@SignBlockActor@@QEBA_NXZ
     * @hash   589201464
     */
    MCAPI bool isBug471852Resolved() const;
    /**
     * @symbol ?resolveBug471852@SignBlockActor@@QEAAXXZ
     * @hash   -1663552331
     */
    MCAPI void resolveBug471852();
    /**
     * @symbol ?setMessage@SignBlockActor@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   1557188948
     */
    MCAPI void setMessage(std::string, std::string);
    /**
     * @symbol ?setMessage@SignBlockActor@@QEAAXVTextObjectRoot@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   973979887
     */
    MCAPI void setMessage(class TextObjectRoot, std::string);
    /**
     * @symbol ?setSignTextColor@SignBlockActor@@QEAAXAEBVColor@mce@@@Z
     * @hash   1137272810
     */
    MCAPI void setSignTextColor(class mce::Color const &);
    /**
     * @symbol ?setType@SignBlockActor@@QEAAXW4SignType@1@@Z
     * @hash   1308749990
     */
    MCAPI void setType(enum SignBlockActor::SignType);

};