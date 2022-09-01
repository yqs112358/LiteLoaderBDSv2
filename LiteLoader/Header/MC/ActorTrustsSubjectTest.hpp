/**
 * @file  ActorTrustsSubjectTest.hpp
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
 * @brief MC class ActorTrustsSubjectTest.
 *
 */
class ActorTrustsSubjectTest : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORTRUSTSSUBJECTTEST
public:
    class ActorTrustsSubjectTest& operator=(class ActorTrustsSubjectTest const &) = delete;
    ActorTrustsSubjectTest(class ActorTrustsSubjectTest const &) = delete;
    ActorTrustsSubjectTest() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   540580888
     */
    virtual ~ActorTrustsSubjectTest();
    /**
     * @vftbl  2
     * @symbol ?evaluate@ActorTrustsSubjectTest@@UEBA_NAEBUFilterContext@@@Z
     * @hash   -978920240
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@ActorTrustsSubjectTest@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   657592738
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};