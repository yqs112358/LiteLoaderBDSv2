/**
 * @file  SavedData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SavedData.
 *
 */
class SavedData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAVEDDATA
public:
    class SavedData& operator=(class SavedData const &) = delete;
    SavedData(class SavedData const &) = delete;
    SavedData() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?deserialize\@PortalForcer\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void deserialize(class CompoundTag const &) = 0;
    /**
     * @vftbl 2
     * @symbol ?serialize\@PortalForcer\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void serialize(class CompoundTag &) const = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SAVEDDATA
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SavedData();
#endif

};
