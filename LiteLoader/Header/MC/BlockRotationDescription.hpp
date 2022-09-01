/**
 * @file  BlockRotationDescription.hpp
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
 * @brief MC structure BlockRotationDescription.
 *
 */
struct BlockRotationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKROTATIONDESCRIPTION
public:
    struct BlockRotationDescription& operator=(struct BlockRotationDescription const &) = delete;
    BlockRotationDescription(struct BlockRotationDescription const &) = delete;
    BlockRotationDescription() = delete;
#endif
public:
    /**
     * @vftbl  0
     * @hash   -1134729061
     */
    virtual ~BlockRotationDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockRotationDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1440853400
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockRotationDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   -2007731060
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @hash   -1406631549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockRotationDescription@@UEBA_NXZ
     * @hash   2060190720
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockRotationDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   1232037602
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockRotationDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   -23000176
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockRotationDescription@@SAXXZ
     * @hash   1393299635
     */
    MCAPI static void bindType();

};