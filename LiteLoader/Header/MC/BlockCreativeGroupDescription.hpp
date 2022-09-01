/**
 * @file  BlockCreativeGroupDescription.hpp
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
 * @brief MC structure BlockCreativeGroupDescription.
 *
 */
struct BlockCreativeGroupDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCREATIVEGROUPDESCRIPTION
public:
    struct BlockCreativeGroupDescription& operator=(struct BlockCreativeGroupDescription const &) = delete;
    BlockCreativeGroupDescription(struct BlockCreativeGroupDescription const &) = delete;
    BlockCreativeGroupDescription() = delete;
#endif
public:
    /**
     * @vftbl  0
     * @hash   -1064017977
     */
    virtual ~BlockCreativeGroupDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockCreativeGroupDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -2120772128
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockCreativeGroupDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   -1212566876
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @hash   -1406631549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockCreativeGroupDescription@@UEBA_NXZ
     * @hash   -1109584744
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockCreativeGroupDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   1724287882
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockCreativeGroupDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   -341210376
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockCreativeGroupDescription@@SAXXZ
     * @hash   -1403988561
     */
    MCAPI static void bindType();

};