/**
 * @file  BlockLightDampeningDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockLightDampeningDescription.
 *
 */
struct BlockLightDampeningDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLIGHTDAMPENINGDESCRIPTION
public:
    struct BlockLightDampeningDescription& operator=(struct BlockLightDampeningDescription const &) = delete;
    BlockLightDampeningDescription(struct BlockLightDampeningDescription const &) = delete;
    BlockLightDampeningDescription() = delete;
#endif
public:
    /**
     * @vftbl  0
     * @hash   -546925194
     */
    virtual ~BlockLightDampeningDescription();
    /**
     * @vftbl  1
     * @symbol ?getName@BlockLightDampeningDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -213825299
     */
    virtual std::string const & getName() const;
    /**
     * @vftbl  2
     * @symbol ?initializeComponent@BlockLightDampeningDescription@@UEBAXAEAVEntityContext@@@Z
     * @hash   -1481385161
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @vftbl  3
     * @hash   -1406631549
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol ?isNetworkComponent@BlockLightDampeningDescription@@UEBA_NXZ
     * @hash   972869477
     */
    virtual bool isNetworkComponent() const;
    /**
     * @vftbl  5
     * @symbol ?buildNetworkTag@BlockLightDampeningDescription@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   -1275703817
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @vftbl  6
     * @symbol ?initializeFromNetwork@BlockLightDampeningDescription@@UEAAXAEBVCompoundTag@@@Z
     * @hash   1847040411
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
MCAPI static std::string const NameID;
    /**
     * @symbol ?bindType@BlockLightDampeningDescription@@SAXXZ
     * @hash   -1791166605
     */
    MCAPI static void bindType();
    /**
     * @symbol ?registerVersionUpgrades@BlockLightDampeningDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     * @hash   -1629373546
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};