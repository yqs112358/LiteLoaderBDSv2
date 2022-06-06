// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Util.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TheEndGenerator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_THEENDGENERATOR
public:
    class TheEndGenerator& operator=(class TheEndGenerator const &) = delete;
    TheEndGenerator(class TheEndGenerator const &) = delete;
    TheEndGenerator() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_THEENDGENERATOR
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
    MCVAPI void decorateWorldGenPostProcess(class Biome &, class LevelChunk &, class BlockSource &, class Random &) const;
    MCVAPI class BlockPos findSpawnPosition() const;
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    MCVAPI class BiomeSource const & getBiomeSource() const;
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    MCVAPI class std::optional<short> getPreliminarySurfaceLevel(class DividedPos2d<4>) const;
    MCVAPI void loadChunk(class LevelChunk &, bool);
    MCVAPI bool postProcess(class ChunkViewSource &);
    MCVAPI void postProcessMobsAt(class BlockSource &, int, int, class Random &);
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
#endif
    MCAPI TheEndGenerator(class Dimension &, unsigned int, class Biome const *, std::unique_ptr<class StructureFeatureRegistry>);
    MCAPI void buildSurfaces(class BlockVolume &, class ChunkPos const &, class LevelChunk &);
    MCAPI class Util::MultidimensionalArray<float, 3, 3, 33> generateDensityCellsForChunk(class ChunkPos const &) const;
    MCAPI static bool isOutsideCentralIslandArea(class ChunkPos const &);

protected:

private:
    MCAPI void _prepareHeights(class BlockVolume &, class ChunkPos const &, bool, std::vector<short> *, int);
    MCAPI float getIslandHeightValue(int, int, int, int) const;

};