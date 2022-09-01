/**
 * @file  EDUWorldsScreenCapabilities.hpp
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
 * @brief MC structure EDUWorldsScreenCapabilities.
 *
 */
struct EDUWorldsScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUWORLDSSCREENCAPABILITIES
public:
    struct EDUWorldsScreenCapabilities& operator=(struct EDUWorldsScreenCapabilities const &) = delete;
    EDUWorldsScreenCapabilities(struct EDUWorldsScreenCapabilities const &) = delete;
    EDUWorldsScreenCapabilities() = delete;
#endif
public:
    /**
     * @vftbl  0
     * @hash   -724902425
     */
    virtual ~EDUWorldsScreenCapabilities();
    /**
     * @vftbl  1
     * @symbol ?isOfType@?$TypedScreenCapabilities@UEDUWorldsScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@@@Z
     * @hash   1211350226
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;

};