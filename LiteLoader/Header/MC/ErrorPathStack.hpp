// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ErrorPathStack {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ERRORPATHSTACK
public:
    class ErrorPathStack& operator=(class ErrorPathStack const &) = delete;
    ErrorPathStack(class ErrorPathStack const &) = delete;
    ErrorPathStack() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ERRORPATHSTACK
#endif
    MCAPI ErrorPathStack(std::vector<std::string> &, std::string const &);
    MCAPI ~ErrorPathStack();

protected:

private:

};