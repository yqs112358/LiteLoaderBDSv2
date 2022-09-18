/**
 * @file  ILevel.hpp
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
 * @brief MC class ILevel.
 *
 */
class ILevel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ILEVEL
public:
    class ILevel& operator=(class ILevel const &) = delete;
    ILevel(class ILevel const &) = delete;
    ILevel() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ILEVEL
    /**
     * @symbol ?asLevel@ILevel@@UEAAPEAVLevel@@XZ
     * @hash   -998432728
     */
    MCVAPI class Level * asLevel();
    /**
     * @symbol ?asMultiPlayerLevel@ILevel@@UEAAPEAVMultiPlayerLevel@@XZ
     * @hash   -1871786620
     */
    MCVAPI class MultiPlayerLevel * asMultiPlayerLevel();
    /**
     * @symbol ?getTradeTables@ILevel@@UEAAPEAVTradeTables@@XZ
     * @hash   2001339044
     */
    MCVAPI class TradeTables * getTradeTables();
#endif

};