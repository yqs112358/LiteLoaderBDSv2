/**
 * @file  SubChunkRelighter.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SubChunkBrightnessStorage.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SubChunkRelighter.
 *
 */
class SubChunkRelighter {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKRELIGHTER
public:
    class SubChunkRelighter& operator=(class SubChunkRelighter const &) = delete;
    SubChunkRelighter(class SubChunkRelighter const &) = delete;
    SubChunkRelighter() = delete;
#endif

public:
    /**
     * @symbol ??0SubChunkRelighter@@QEAA@AEAVBlockSource@@_KAEBVChunkPos@@_N3@Z
     * @hash   -1839203917
     */
    MCAPI SubChunkRelighter(class BlockSource &, unsigned __int64, class ChunkPos const &, bool, bool);
    /**
     * @symbol ?_getAbsorption@SubChunkRelighter@@QEBAPEAUSubChunk@@USubChunkLightIndex@@AEAE@Z
     * @hash   -897840521
     */
    MCAPI struct SubChunk * _getAbsorption(struct SubChunkLightIndex, unsigned char &) const;
    /**
     * @symbol ?_propagateBlockLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     * @hash   1169325648
     */
    MCAPI void _propagateBlockLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol ?_propagateBlockLight@SubChunkRelighter@@QEAAXXZ
     * @hash   -679888023
     */
    MCAPI void _propagateBlockLight();
    /**
     * @symbol ?_propagateSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     * @hash   1825185768
     */
    MCAPI void _propagateSkyLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol ?_propagateSkyLight@SubChunkRelighter@@QEAAXXZ
     * @hash   -466429599
     */
    MCAPI void _propagateSkyLight();
    /**
     * @symbol ?_propagateSubtractiveBlockLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     * @hash   -1656705918
     */
    MCAPI void _propagateSubtractiveBlockLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol ?_propagateSubtractiveBlockLight@SubChunkRelighter@@QEAAXXZ
     * @hash   296444331
     */
    MCAPI void _propagateSubtractiveBlockLight();
    /**
     * @symbol ?_propagateSubtractiveSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     * @hash   -162061686
     */
    MCAPI void _propagateSubtractiveSkyLight(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol ?_propagateSubtractiveSkyLight@SubChunkRelighter@@QEAAXXZ
     * @hash   -669784509
     */
    MCAPI void _propagateSubtractiveSkyLight();
    /**
     * @symbol ?_setLightHelper@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@UBrightness@@111II@Z
     * @hash   -1918530597
     */
    MCAPI void _setLightHelper(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness, unsigned int, unsigned int);
    /**
     * @symbol ?_setPropagatedBlockLightValue@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     * @hash   -694331760
     */
    MCAPI void _setPropagatedBlockLightValue(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol ?_setPropagatedSkyLightValue@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@E@Z
     * @hash   -834533160
     */
    MCAPI void _setPropagatedSkyLightValue(struct SubChunkLightIndex, unsigned char);
    /**
     * @symbol ?_setSkyLight@SubChunkRelighter@@QEAAXUSubChunkLightIndex@@UBrightness@@111@Z
     * @hash   -457942161
     */
    MCAPI void _setSkyLight(struct SubChunkLightIndex, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @symbol ?getBlock@SubChunkRelighter@@QEAAXAEBVPos@@AEAPEBVBlock@@1@Z
     * @hash   1197299444
     */
    MCAPI void getBlock(class Pos const &, class Block const *&, class Block const *&);
    /**
     * @symbol ?getCentralSubchunkOrigin@SubChunkRelighter@@QEAA?AVPos@@XZ
     * @hash   -217676636
     */
    MCAPI class Pos getCentralSubchunkOrigin();
    /**
     * @symbol ?getLightPair@SubChunkRelighter@@QEBA?AULightPair@SubChunkBrightnessStorage@@AEBVPos@@@Z
     * @hash   1275769571
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPair(class Pos const &) const;
    /**
     * @symbol ?getLightPairWithPlaceholderCheck@SubChunkRelighter@@QEBA?AULightPair@SubChunkBrightnessStorage@@AEBVPos@@AEBU23@@Z
     * @hash   1765081666
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair getLightPairWithPlaceholderCheck(class Pos const &, struct SubChunkBrightnessStorage::LightPair const &) const;
    /**
     * @symbol ?getTouchedSubChunks@SubChunkRelighter@@QEAAXAEAV?$vector@VPos@@V?$allocator@VPos@@@std@@@std@@@Z
     * @hash   124643146
     */
    MCAPI void getTouchedSubChunks(std::vector<class Pos> &);
    /**
     * @symbol ?setBlockLight@SubChunkRelighter@@QEAAXAEBVPos@@UBrightness@@111@Z
     * @hash   -1295643001
     */
    MCAPI void setBlockLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @symbol ?setSkyLight@SubChunkRelighter@@QEAAXAEBVPos@@UBrightness@@111@Z
     * @hash   -1634459601
     */
    MCAPI void setSkyLight(class Pos const &, struct Brightness, struct Brightness, struct Brightness, struct Brightness);
    /**
     * @symbol ?update@SubChunkRelighter@@QEAAXAEBVBlockPos@@_K@Z
     * @hash   2069338924
     */
    MCAPI void update(class BlockPos const &, unsigned __int64);
    /**
     * @symbol ??1SubChunkRelighter@@QEAA@XZ
     * @hash   401653503
     */
    MCAPI ~SubChunkRelighter();
    /**
     * @symbol ?computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits@SubChunkRelighter@@SA?AV?$bitset@$0DAAAA@@std@@XZ
     * @hash   528751769
     */
    MCAPI static class std::bitset<196608> computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();
    /**
     * @symbol ?computeOuterEdgeOfComputationBits@SubChunkRelighter@@SA?AV?$bitset@$0DAAAA@@std@@XZ
     * @hash   258454761
     */
    MCAPI static class std::bitset<196608> computeOuterEdgeOfComputationBits();
    /**
     * @symbol ?initializeStatics@SubChunkRelighter@@SAXXZ
     * @hash   -1170232307
     */
    MCAPI static void initializeStatics();
    /**
     * @symbol ?shutdownStatics@SubChunkRelighter@@SAXXZ
     * @hash   367874897
     */
    MCAPI static void shutdownStatics();

//private:
    /**
     * @symbol ?_dirtySubChunk@SubChunkRelighter@@AEAAPEAUSubChunk@@USubChunkLightIndex@@AEAI@Z
     * @hash   1967825136
     */
    MCAPI struct SubChunk * _dirtySubChunk(struct SubChunkLightIndex, unsigned int &);
    /**
     * @symbol ?_getBlock@SubChunkRelighter@@AEBAPEAUSubChunk@@USubChunkLightIndex@@AEAPEBVBlock@@1@Z
     * @hash   -421605255
     */
    MCAPI struct SubChunk * _getBlock(struct SubChunkLightIndex, class Block const *&, class Block const *&) const;
    /**
     * @symbol ?_getLight@SubChunkRelighter@@AEAAEUSubChunkLightIndex@@@Z
     * @hash   1425136652
     */
    MCAPI unsigned char _getLight(struct SubChunkLightIndex);
    /**
     * @symbol ?_getLightPair@SubChunkRelighter@@AEBA?AULightPair@SubChunkBrightnessStorage@@USubChunkLightIndex@@@Z
     * @hash   -149458959
     */
    MCAPI struct SubChunkBrightnessStorage::LightPair _getLightPair(struct SubChunkLightIndex) const;

private:
MCAPI static class std::bitset<196608> mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits;
MCAPI static class std::bitset<196608> mOuterEdgeOfComputationBits;
MCAPI static class SpinLock sDarkSpinLock;
MCAPI static struct SubChunk sFullyDarkSubChunk;
MCAPI static struct SubChunk sFullyLitSubChunk;
MCAPI static class SpinLock sLitSpinLock;

};