/**
 * @file  BlockComponentStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BlockComponentStorage {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKCOMPONENTSTORAGE
public:
    class BlockComponentStorage& operator=(class BlockComponentStorage const &) = delete;
    BlockComponentStorage(class BlockComponentStorage const &) = delete;
    BlockComponentStorage() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKCOMPONENTSTORAGE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BlockComponentStorage();
#endif
    /**
     * @symbol ?allowComponentReplacement\@BlockComponentStorage\@\@QEAAXXZ
     */
    MCAPI void allowComponentReplacement();
    /**
     * @symbol ?allowTryGetComponentBeforeFinalization\@BlockComponentStorage\@\@QEAAXXZ
     */
    MCAPI void allowTryGetComponentBeforeFinalization();
    /**
     * @symbol ?finalizeComponents\@BlockComponentStorage\@\@QEAAXXZ
     */
    MCAPI void finalizeComponents();

};
