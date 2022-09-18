/**
 * @file  HudContainerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HudContainerModel.
 *
 */
class HudContainerModel : public ContainerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HUDCONTAINERMODEL
public:
    class HudContainerModel& operator=(class HudContainerModel const &) = delete;
    HudContainerModel(class HudContainerModel const &) = delete;
    HudContainerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?containerContentChanged@HudContainerModel@@UEAAXH@Z
     * @hash   -749573237
     */
    virtual void containerContentChanged(int);
    /**
     * @vftbl  1
     * @hash   -601893811
     */
    virtual ~HudContainerModel();
    /**
     * @vftbl  6
     * @hash   -1403860986
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol ?getContainerWeakRef@HudContainerModel@@UEBA?AVContainerWeakRef@@XZ
     * @hash   308989126
     */
    virtual class ContainerWeakRef getContainerWeakRef() const;
    /**
     * @vftbl  12
     * @hash   -334124315
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  14
     * @symbol ?isValid@HudContainerModel@@UEAA_NXZ
     * @hash   502512796
     */
    virtual bool isValid();
    /**
     * @vftbl  15
     * @hash   -331353752
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl  16
     * @hash   -330430231
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  19
     * @hash   -376678356
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  20
     * @symbol ?_getContainer@HudContainerModel@@EEBAPEAVContainer@@XZ
     * @hash   281269040
     */
    virtual class Container * _getContainer() const;
    /**
     * @symbol ??0HudContainerModel@@QEAA@W4ContainerEnumName@@AEAVPlayer@@@Z
     * @hash   -1297612127
     */
    MCAPI HudContainerModel(enum class ContainerEnumName, class Player &);

//private:
    /**
     * @symbol ?_refreshContainer@HudContainerModel@@AEAAXXZ
     * @hash   961635858
     */
    MCAPI void _refreshContainer();

private:

};