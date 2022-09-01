/**
 * @file  SHRoomCrossing.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SHRoomCrossing.
 *
 */
class SHRoomCrossing : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHROOMCROSSING
public:
    class SHRoomCrossing& operator=(class SHRoomCrossing const &) = delete;
    SHRoomCrossing(class SHRoomCrossing const &) = delete;
    SHRoomCrossing() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -386371012
     */
    virtual ~SHRoomCrossing();
    /**
     * @vftbl  2
     * @symbol ?getType@SHRoomCrossing@@UEBA?AW4StructurePieceType@@XZ
     * @hash   374237193
     */
    virtual enum StructurePieceType getType() const;
    /**
     * @vftbl  3
     * @symbol ?addChildren@SHRoomCrossing@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     * @hash   -602943737
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vftbl  4
     * @symbol ?postProcess@SHRoomCrossing@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1873790977
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};