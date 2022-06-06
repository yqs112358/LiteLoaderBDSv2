// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OreVeinifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OREVEINIFIER
public:
    class OreVeinifier& operator=(class OreVeinifier const &) = delete;
    OreVeinifier(class OreVeinifier const &) = delete;
    OreVeinifier() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OREVEINIFIER
#endif
    MCAPI OreVeinifier(class OreVeinifierNoises const &);
    MCAPI void fillNoiseAtPos(class Vec3 const &, int, float);
    MCAPI class Block const * getVeinBlockOrFallback(class Vec3, class Block const *) const;
    MCAPI class std::array<class NoiseCellInterpolator *, 3> resetAndGetInterpolators();

protected:

private:

};