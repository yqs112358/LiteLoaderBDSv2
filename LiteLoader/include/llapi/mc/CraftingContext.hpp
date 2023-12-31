/**
 * @file  CraftingContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class CraftingContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTINGCONTEXT
public:
    class CraftingContext& operator=(class CraftingContext const &) = delete;
    CraftingContext(class CraftingContext const &) = delete;
    CraftingContext() = delete;
#endif

public:
    /**
     * @symbol ??0CraftingContext\@\@QEAA\@V?$not_null\@V?$NonOwnerPointer\@VILevel\@\@\@Bedrock\@\@\@gsl\@\@\@Z
     */
    MCAPI CraftingContext(class gsl::not_null<class Bedrock::NonOwnerPointer<class ILevel>>);
    /**
     * @symbol ?getBaseGameVersion\@CraftingContext\@\@QEBA?AVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion getBaseGameVersion() const;
    /**
     * @symbol ?getTrimMaterialRegistry\@CraftingContext\@\@QEBA?BV?$weak_ptr\@$$CBVTrimMaterialRegistry\@\@\@std\@\@XZ
     */
    MCAPI class std::weak_ptr<class TrimMaterialRegistry const> const getTrimMaterialRegistry() const;
    /**
     * @symbol ?getTrimPatternRegistry\@CraftingContext\@\@QEAA?BV?$weak_ptr\@VTrimPatternRegistry\@\@\@std\@\@XZ
     */
    MCAPI class std::weak_ptr<class TrimPatternRegistry> const getTrimPatternRegistry();
    /**
     * @symbol ?getTrimPatternRegistry\@CraftingContext\@\@QEBA?BV?$weak_ptr\@$$CBVTrimPatternRegistry\@\@\@std\@\@XZ
     */
    MCAPI class std::weak_ptr<class TrimPatternRegistry const> const getTrimPatternRegistry() const;
    /**
     * @symbol ??1CraftingContext\@\@QEAA\@XZ
     */
    MCAPI ~CraftingContext();

};
