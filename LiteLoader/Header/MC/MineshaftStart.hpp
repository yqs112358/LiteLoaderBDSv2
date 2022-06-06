// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MineshaftStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINESHAFTSTART
public:
    class MineshaftStart& operator=(class MineshaftStart const &) = delete;
    MineshaftStart(class MineshaftStart const &) = delete;
    MineshaftStart() = delete;
#endif

public:
    /*0*/ virtual ~MineshaftStart();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MINESHAFTSTART
#endif
    MCAPI MineshaftStart(class Dimension const &, class BiomeSource const &, class Random &, class ChunkPos const &, class IPreliminarySurfaceProvider const &);

protected:

private:

};