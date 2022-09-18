/**
 * @file  BiomeSource3d.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeSource3d.
 *
 */
class BiomeSource3d {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMESOURCE3D
public:
    class BiomeSource3d& operator=(class BiomeSource3d const &) = delete;
    BiomeSource3d(class BiomeSource3d const &) = delete;
    BiomeSource3d() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   122014586
     */
    virtual ~BiomeSource3d();
    /**
     * @vftbl  1
     * @symbol ?fillBiomes@BiomeSource3d@@UEBAXAEAVLevelChunk@@AEBVChunkLocalNoiseCache@@@Z
     * @hash   -803020160
     */
    virtual void fillBiomes(class LevelChunk &, class ChunkLocalNoiseCache const &) const;
    /**
     * @vftbl  2
     * @symbol ?getBiomeArea@BiomeSource3d@@UEBA?AVBiomeArea@@AEBVBoundingBox@@I@Z
     * @hash   1133133037
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    /**
     * @vftbl  3
     * @symbol ?getBiomeArea@BiomeSource3d@@UEBA?AVBiomeArea@@AEBVBoundingBox@@IAEBUGetBiomeOptions@@@Z
     * @hash   1203807113
     */
    virtual class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int, struct GetBiomeOptions const &) const;
    /**
     * @vftbl  4
     * @symbol ?containsOnly@BiomeSource3d@@UEBA_NHHHHV?$span@$$CBH$0?0@gsl@@@Z
     * @hash   -1486200300
     */
    virtual bool containsOnly(int, int, int, int, class gsl::span<int const, -1>) const;
    /**
     * @vftbl  5
     * @symbol ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@AEBVBlockPos@@@Z
     * @hash   -1072469559
     */
    virtual class Biome const * getBiome(class BlockPos const &) const;
    /**
     * @vftbl  6
     * @symbol ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@AEBUGetBiomeOptions@@@Z
     * @hash   1043456199
     */
    virtual class Biome const * getBiome(struct GetBiomeOptions const &) const;
    /**
     * @vftbl  7
     * @symbol ?getBiome@BiomeSource3d@@UEBAPEBVBiome@@HHH@Z
     * @hash   317219310
     */
    virtual class Biome const * getBiome(int, int, int) const;

};