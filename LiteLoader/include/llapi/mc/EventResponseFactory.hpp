/**
 * @file  EventResponseFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EventResponseFactory.
 *
 */
class EventResponseFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EVENTRESPONSEFACTORY
public:
    class EventResponseFactory& operator=(class EventResponseFactory const &) = delete;
    EventResponseFactory(class EventResponseFactory const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeFactory\@ItemEventResponseFactory\@\@UEAAXAEBVExperiments\@\@\@Z
     */
    virtual void initializeFactory(class Experiments const &) = 0;
    /**
     * @vftbl 2
     * @symbol ?initSchema\@ItemEventResponseFactory\@\@UEAAXXZ
     */
    virtual void initSchema() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EVENTRESPONSEFACTORY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EventResponseFactory();
#endif
    /**
     * @symbol ??0EventResponseFactory\@\@QEAA\@XZ
     */
    MCAPI EventResponseFactory();
    /**
     * @symbol ?initSchema\@EventResponseFactory\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void initSchema(std::string const &, class SemVersion const &);

};
