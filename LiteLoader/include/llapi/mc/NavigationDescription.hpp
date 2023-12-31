/**
 * @file  NavigationDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure NavigationDescription.
 *
 */
struct NavigationDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NAVIGATIONDESCRIPTION
public:
    struct NavigationDescription& operator=(struct NavigationDescription const &) = delete;
    NavigationDescription(struct NavigationDescription const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?getJsonName\@MobEffectChangeDescription\@\@UEBAPEBDXZ
     */
    virtual char const * getJsonName() const = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?deserializeData\@NavigationDescription\@\@UEAAXUDeserializeDataParams\@\@\@Z
     */
    virtual void deserializeData(struct DeserializeDataParams);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NAVIGATIONDESCRIPTION
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NavigationDescription();
#endif
    /**
     * @symbol ??0NavigationDescription\@\@QEAA\@XZ
     */
    MCAPI NavigationDescription();

};