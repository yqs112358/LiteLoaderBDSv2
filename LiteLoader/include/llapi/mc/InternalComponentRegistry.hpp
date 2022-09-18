/**
 * @file  InternalComponentRegistry.hpp
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
 * @brief MC class InternalComponentRegistry.
 *
 */
class InternalComponentRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALCOMPONENTREGISTRY
public:
    class InternalComponentRegistry& operator=(class InternalComponentRegistry const &) = delete;
    InternalComponentRegistry(class InternalComponentRegistry const &) = delete;
    InternalComponentRegistry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1767446123
     */
    virtual ~InternalComponentRegistry();
    /**
     * @vftbl  1
     * @symbol ?registerComponents@InternalComponentRegistry@@UEAAXXZ
     * @hash   1635329299
     */
    virtual void registerComponents();
    /**
     * @symbol ?addComponentSaveData@InternalComponentRegistry@@QEAAXAEBVActor@@AEAVCompoundTag@@@Z
     * @hash   -439001135
     */
    MCAPI void addComponentSaveData(class Actor const &, class CompoundTag &);
    /**
     * @symbol ?initializeComponents@InternalComponentRegistry@@QEBAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -958470472
     */
    MCAPI void initializeComponents(class Actor &, class CompoundTag const &, class DataLoadHelper &) const;
    /**
     * @symbol ?INTERNAL_COMPONENTS@InternalComponentRegistry@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1905590407
     */
    MCAPI static std::string const INTERNAL_COMPONENTS;

//protected:
    /**
     * @symbol ?_initializeComponents@InternalComponentRegistry@@IEBAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -221490865
     */
    MCAPI void _initializeComponents(class Actor &, class CompoundTag const &, class DataLoadHelper &) const;
    /**
     * @symbol ?_getComponentScope@InternalComponentRegistry@@KAPEBVCompoundTag@@AEBV2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -52925866
     */
    MCAPI static class CompoundTag const * _getComponentScope(class CompoundTag const &, std::string const &);
    /**
     * @symbol ?_getOrCreateComponentScope@InternalComponentRegistry@@KAAEAVCompoundTag@@AEAV2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -832956439
     */
    MCAPI static class CompoundTag & _getOrCreateComponentScope(class CompoundTag &, std::string const &);

protected:

};