/**
 * @file  ContainerContentChangeListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerContentChangeListener.
 *
 */
class ContainerContentChangeListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERCONTENTCHANGELISTENER
public:
    class ContainerContentChangeListener& operator=(class ContainerContentChangeListener const &) = delete;
    ContainerContentChangeListener(class ContainerContentChangeListener const &) = delete;
    ContainerContentChangeListener() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol ?containerContentChanged\@HudContainerModel\@\@UEAAXH\@Z
     */
    virtual void containerContentChanged(int) = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTAINERCONTENTCHANGELISTENER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ContainerContentChangeListener();
#endif

};
