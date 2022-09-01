/**
 * @file  AnvilInputContainerValidation.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AnvilInputContainerValidation.
 *
 */
class AnvilInputContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANVILINPUTCONTAINERVALIDATION
public:
    class AnvilInputContainerValidation& operator=(class AnvilInputContainerValidation const &) = delete;
    AnvilInputContainerValidation(class AnvilInputContainerValidation const &) = delete;
    AnvilInputContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1085848426
     */
    virtual ~AnvilInputContainerValidation();
    /**
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     * @hash   -1636498448
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @vftbl  2
     * @hash   -1365271070
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl  3
     * @symbol ?getAvailableSetCount@ContainerValidationBase@@UEBAHHAEBVItemStackBase@@@Z
     * @hash   619767235
     */
    virtual int getAvailableSetCount(int, class ItemStackBase const &) const;
    /**
     * @vftbl  4
     * @hash   -1363424028
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @hash   -1362500507
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     * @hash   -899395021
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @symbol ?canDestroy@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@@Z
     * @hash   318983063
     */
    virtual bool canDestroy(class ContainerScreenContext const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ANVILINPUTCONTAINERVALIDATION
    /**
     * @symbol ?getContainerOffset@AnvilInputContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
     * @hash   389078528
     */
    MCVAPI int getContainerOffset(class ContainerScreenContext const &) const;
#endif

};