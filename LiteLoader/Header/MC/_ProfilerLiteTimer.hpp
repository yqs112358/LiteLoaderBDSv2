// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ProfilerLite.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class _ProfilerLiteTimer {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION__PROFILERLITETIMER
public:
    class _ProfilerLiteTimer& operator=(class _ProfilerLiteTimer const &) = delete;
    _ProfilerLiteTimer(class _ProfilerLiteTimer const &) = delete;
    _ProfilerLiteTimer() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL__PROFILERLITETIMER
#endif
    MCAPI _ProfilerLiteTimer(struct ProfilerLite::ScopedData &, class std::thread::id);
    MCAPI void __autoclassinit2(unsigned __int64);
    MCAPI ~_ProfilerLiteTimer();



};