/**
 * @file  ImguiProfiler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct ImguiProfiler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMGUIPROFILER
public:
    struct ImguiProfiler& operator=(struct ImguiProfiler const &) = delete;
    ImguiProfiler(struct ImguiProfiler const &) = delete;
#endif

public:
    /**
     * @symbol ??0ImguiProfiler\@\@QEAA\@XZ
     */
    MCAPI ImguiProfiler();
    /**
     * @symbol ?getTimeAccumulator\@ImguiProfiler\@\@QEAA?AVTimeAccumulator\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI class TimeAccumulator getTimeAccumulator(std::string const &, std::string const &, bool);
    /**
     * @symbol ?update\@ImguiProfiler\@\@QEAAXXZ
     */
    MCAPI void update();

//private:

};