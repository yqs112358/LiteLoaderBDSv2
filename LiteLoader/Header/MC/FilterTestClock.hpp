/**
 * @file  FilterTestClock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterTestClock.
 *
 */
class FilterTestClock : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTCLOCK
public:
    class FilterTestClock& operator=(class FilterTestClock const &) = delete;
    FilterTestClock(class FilterTestClock const &) = delete;
    FilterTestClock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -567702446
     */
    virtual ~FilterTestClock();
    /**
     * @vftbl  2
     * @symbol ?evaluate@FilterTestClock@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -327875274
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@FilterTestClock@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   1619631692
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};