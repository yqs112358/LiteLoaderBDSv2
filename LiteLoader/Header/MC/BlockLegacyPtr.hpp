// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockLegacyPtr {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKLEGACYPTR
public:
    class BlockLegacyPtr& operator=(class BlockLegacyPtr const &) = delete;
    BlockLegacyPtr(class BlockLegacyPtr const &) = delete;
    BlockLegacyPtr() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKLEGACYPTR
#endif
    MCAPI std::string toString() const;

protected:

private:

};