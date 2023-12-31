/**
 * @file  OceanMonumentStart.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "StructureStart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentStart.
 *
 */
class OceanMonumentStart : public StructureStart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTSTART
public:
    class OceanMonumentStart& operator=(class OceanMonumentStart const &) = delete;
    OceanMonumentStart(class OceanMonumentStart const &) = delete;
    OceanMonumentStart() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?postProcess\@OceanMonumentStart\@\@UEAA_NAEAVBlockSource\@\@AEAVRandom\@\@AEBVBoundingBox\@\@\@Z
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?createMonument\@OceanMonumentStart\@\@QEAAXAEAVDimension\@\@AEAVRandom\@\@HH\@Z
     */
    MCAPI void createMonument(class Dimension &, class Random &, int, int);

};
