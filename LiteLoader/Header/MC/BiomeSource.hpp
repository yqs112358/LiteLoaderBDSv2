// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class BiomeSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMESOURCE
public:
    class BiomeSource& operator=(class BiomeSource const &) = delete;
    BiomeSource(class BiomeSource const &) = delete;
    BiomeSource() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMESOURCE
#endif
    MCAPI static class BlockPosIterator getAreaIterator(class BoundingBox const &, unsigned int);

protected:

private:

};