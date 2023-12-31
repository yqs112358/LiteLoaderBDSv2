/**
 * @file  BlockEventResponseFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "EventResponseFactory.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockEventResponseFactory.
 *
 */
class BlockEventResponseFactory : public EventResponseFactory {

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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeFactory\@BlockEventResponseFactory\@\@UEAAXAEBVExperiments\@\@\@Z
     */
    virtual void initializeFactory(class Experiments const &);
    /**
     * @vftbl 2
     * @symbol ?initSchema\@BlockEventResponseFactory\@\@UEAAXXZ
     */
    virtual void initSchema();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKEVENTRESPONSEFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockEventResponseFactory();
#endif

};
