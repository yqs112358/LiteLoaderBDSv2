/**
 * @file  NBBridgeEndFiller.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBBridgeEndFiller.
 *
 */
class NBBridgeEndFiller : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBBRIDGEENDFILLER
public:
    class NBBridgeEndFiller& operator=(class NBBridgeEndFiller const &) = delete;
    NBBridgeEndFiller(class NBBridgeEndFiller const &) = delete;
    NBBridgeEndFiller() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1749925572
     */
    virtual ~NBBridgeEndFiller();
    /**
     * @vftbl  2
     * @symbol ?getType@NBBridgeEndFiller@@UEBA?AW4StructurePieceType@@XZ
     * @hash   2013921933
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol ?postProcess@NBBridgeEndFiller@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -1593860997
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);
    /**
     * @symbol ?createPiece@NBBridgeEndFiller@@SA?AV?$unique_ptr@VNetherFortressPiece@@U?$default_delete@VNetherFortressPiece@@@std@@@std@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@3@AEAVRandom@@HHHHH@Z
     * @hash   1169286740
     */
    MCAPI static std::unique_ptr<class NetherFortressPiece> createPiece(std::vector<std::unique_ptr<class StructurePiece>> &, class Random &, int, int, int, int, int);

};