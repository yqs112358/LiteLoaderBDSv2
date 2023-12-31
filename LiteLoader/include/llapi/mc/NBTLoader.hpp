/**
 * @file  NBTLoader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBTLoader.
 *
 */
class NBTLoader {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBTLOADER
public:
    class NBTLoader& operator=(class NBTLoader const &) = delete;
    NBTLoader(class NBTLoader const &) = delete;
    NBTLoader() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NBTLOADER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NBTLoader();
#endif
    /**
     * @symbol ??0NBTLoader\@\@QEAA\@V?$not_null\@PEBVCompoundTag\@\@\@gsl\@\@AEBUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI NBTLoader(class gsl::not_null<class CompoundTag const *>, struct cereal::ReflectionCtx const &);

};
