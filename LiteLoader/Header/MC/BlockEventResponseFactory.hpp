/**
 * @file  BlockEventResponseFactory.hpp
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
 * @brief MC class BlockEventResponseFactory.
 *
 */
class BlockEventResponseFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKEVENTRESPONSEFACTORY
public:
    class BlockEventResponseFactory& operator=(class BlockEventResponseFactory const &) = delete;
    BlockEventResponseFactory(class BlockEventResponseFactory const &) = delete;
    BlockEventResponseFactory() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -2078578806
     */
    virtual ~BlockEventResponseFactory();
    /**
     * @vftbl  1
     * @symbol ?initializeFactory@BlockEventResponseFactory@@UEAAXAEBVExperiments@@@Z
     * @hash   824103694
     */
    virtual void initializeFactory(class Experiments const &);
    /**
     * @vftbl  2
     * @symbol ?initSchema@BlockEventResponseFactory@@UEAAXXZ
     * @hash   -1449401252
     */
    virtual void initSchema();

};