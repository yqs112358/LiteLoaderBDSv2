/**
 * @file  HideDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HideDescription.
 *
 */
class HideDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HIDEDESCRIPTION
public:
    class HideDescription& operator=(class HideDescription const &) = delete;
    HideDescription(class HideDescription const &) = delete;
    HideDescription() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@HideDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@MobEffectChangeDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HIDEDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HideDescription();
#endif

};
