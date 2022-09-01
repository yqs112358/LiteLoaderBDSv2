/**
 * @file  LoomContainerManagerModel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerManagerModel.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LoomContainerManagerModel.
 *
 */
class LoomContainerManagerModel : public ContainerManagerModel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOMCONTAINERMANAGERMODEL
public:
    class LoomContainerManagerModel& operator=(class LoomContainerManagerModel const &) = delete;
    LoomContainerManagerModel(class LoomContainerManagerModel const &) = delete;
    LoomContainerManagerModel() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2061169078
     */
    virtual ~LoomContainerManagerModel();
    /**
     * @vftbl  6
     * @symbol ?getItemCopies@LoomContainerManagerModel@@UEBA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@XZ
     * @hash   -1554454957
     */
    virtual std::vector<class ItemStack> getItemCopies() const;
    /**
     * @vftbl  7
     * @symbol ?setSlot@LoomContainerManagerModel@@UEAAXHAEBVItemStack@@_N@Z
     * @hash   -1167067300
     */
    virtual void setSlot(int, class ItemStack const &, bool);
    /**
     * @vftbl  8
     * @symbol ?getSlot@LoomContainerManagerModel@@UEBAAEBVItemStack@@H@Z
     * @hash   1333967861
     */
    virtual class ItemStack const & getSlot(int) const;
    /**
     * @vftbl  9
     * @symbol ?setData@LoomContainerManagerModel@@UEAAXHH@Z
     * @hash   941796055
     */
    virtual void setData(int, int);
    /**
     * @vftbl  10
     * @symbol ?broadcastChanges@LoomContainerManagerModel@@UEAAXXZ
     * @hash   936100301
     */
    virtual void broadcastChanges();
    /**
     * @vftbl  16
     * @symbol ?isValid@LoomContainerManagerModel@@UEAA_NM@Z
     * @hash   1456507779
     */
    virtual bool isValid(float);
    /**
     * @vftbl  17
     * @symbol ?_postInit@LoomContainerManagerModel@@MEAA?AVContainerScreenContext@@XZ
     * @hash   -349038246
     */
    virtual class ContainerScreenContext _postInit();
    /**
     * @symbol ??0LoomContainerManagerModel@@QEAA@W4ContainerID@@AEAVPlayer@@AEBVBlockPos@@@Z
     * @hash   409625385
     */
    MCAPI LoomContainerManagerModel(enum ContainerID, class Player &, class BlockPos const &);
MCAPI static int const BANNER_SLOT;
MCAPI static int const DYE_SLOT;
MCAPI static int const MATERIAL_SLOT;
MCAPI static int const RESULT_SLOT;

};