/**
 * @file  StructureTemplate.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "StructureSettings.hpp"
#include "StructureTemplateData.hpp"
class CompoundTag;

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureTemplate.
 *
 */
class StructureTemplate {

#define AFTER_EXTRA
    // Add Member There
    string mName;
    StructureTemplateData mStructureTemplateData;
    unsigned __int8 mStructureVersion;
    //char filler[216]; // IDA StructureTemplate::StructureTemplate

public:
#define DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATE
    class StructureTemplate& operator=(class StructureTemplate const&) = delete;
    StructureTemplate(class StructureTemplate const&);
    StructureTemplate() = delete;
    LIAPI static StructureTemplate fromTag(std::string name, CompoundTag const& tag);
    LIAPI static StructureTemplate fromWorld(std::string name, int dimid, BlockPos p1, BlockPos p2, bool ignoreEntities = true, bool ignoreBlocks = false);
    //LIAPI bool load(CompoundTag const& tag);
    LIAPI std::unique_ptr<CompoundTag> toTag();
    LIAPI bool toWorld(int dimid, BlockPos const& p1, Mirror mirror = Mirror::None_15, Rotation rotation = Rotation::None_14);
    LIAPI StructureTemplateData* getData();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETEMPLATE
public:
    class StructureTemplate& operator=(class StructureTemplate const &) = delete;
    StructureTemplate(class StructureTemplate const &) = delete;
    StructureTemplate() = delete;
#endif

public:
    /**
     * @symbol ??0StructureTemplate@@QEAA@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     * @hash   1558293610
     */
    MCAPI StructureTemplate(class gsl::basic_string_span<char const, -1>);
    /**
     * @symbol ?fillFromWorld@StructureTemplate@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVStructureSettings@@@Z
     * @hash   -3951176
     */
    MCAPI void fillFromWorld(class BlockSource &, class BlockPos const &, class StructureSettings const &);
    /**
     * @symbol ?getBlockAtPos@StructureTemplate@@QEBAAEBVBlock@@AEBVBlockPos@@@Z
     * @hash   2116987925
     */
    MCAPI class Block const & getBlockAtPos(class BlockPos const &) const;
    /**
     * @symbol ?getJigsawMarkers@StructureTemplate@@QEBA?AV?$vector@VJigsawStructureBlockInfo@@V?$allocator@VJigsawStructureBlockInfo@@@std@@@std@@XZ
     * @hash   -1670592828
     */
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;
    /**
     * @symbol ?getName@StructureTemplate@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -578256864
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol ?getSize@StructureTemplate@@QEBAAEBVBlockPos@@XZ
     * @hash   1606972482
     */
    MCAPI class BlockPos const & getSize() const;
    /**
     * @symbol ?getStructureVersion@StructureTemplate@@QEBAEXZ
     * @hash   198852655
     */
    MCAPI unsigned char getStructureVersion() const;
    /**
     * @symbol ?getTransformedBounds@StructureTemplate@@QEBA?AVBoundingBox@@VBlockPos@@AEBVStructureSettings@@@Z
     * @hash   -1695091992
     */
    MCAPI class BoundingBox getTransformedBounds(class BlockPos, class StructureSettings const &) const;
    /**
     * @symbol ?isLoaded@StructureTemplate@@QEBA_NXZ
     * @hash   1163488742
     */
    MCAPI bool isLoaded() const;
    /**
     * @symbol ?load@StructureTemplate@@QEAA_NAEBVCompoundTag@@@Z
     * @hash   1127687297
     */
    MCAPI bool load(class CompoundTag const &);
    /**
     * @symbol ?placeInWorld@StructureTemplate@@QEBAXAEAVBlockSource@@AEBVBlockPalette@@AEBVBlockPos@@AEBVStructureSettings@@PEAVStructureTelemetryServerData@@_N@Z
     * @hash   -348761866
     */
    MCAPI void placeInWorld(class BlockSource &, class BlockPalette const &, class BlockPos const &, class StructureSettings const &, class StructureTelemetryServerData *, bool) const;
    /**
     * @symbol ?placeNextSegmentInWorld@StructureTemplate@@QEBAXAEAVStructureAnimationData@@AEBVBlockPalette@@@Z
     * @hash   1681171459
     */
    MCAPI void placeNextSegmentInWorld(class StructureAnimationData &, class BlockPalette const &) const;
    /**
     * @symbol ?save@StructureTemplate@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     * @hash   24836250
     */
    MCAPI std::unique_ptr<class CompoundTag> save() const;
    /**
     * @symbol ??1StructureTemplate@@QEAA@XZ
     * @hash   -1313346055
     */
    MCAPI ~StructureTemplate();
MCAPI static class BlockPos const INVALID_POSITION;

//private:
    /**
     * @symbol ?_fillBlockInfo@StructureTemplate@@AEAAXAEAVBlockSource@@AEBVBlockPos@@11@Z
     * @hash   113310246
     */
    MCAPI void _fillBlockInfo(class BlockSource &, class BlockPos const &, class BlockPos const &, class BlockPos const &);
    /**
     * @symbol ?_fillEntityList@StructureTemplate@@AEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1067108702
     */
    MCAPI void _fillEntityList(class BlockSource &, class BlockPos const &, class BlockPos const &);
    /**
     * @symbol ?_placeEntitiesInWorld@StructureTemplate@@AEBAXAEAVBlockSource@@AEAVDataLoadHelper@@_N@Z
     * @hash   -12788586
     */
    MCAPI void _placeEntitiesInWorld(class BlockSource &, class DataLoadHelper &, bool) const;
    /**
     * @symbol ?_placeNextBlockSegmentInWorld@StructureTemplate@@AEBAXAEAVBlockSource@@_K1AEBVStructureSettings@@AEAVDataLoadHelper@@AEBVStructureBlockPalette@@AEBVBlockPalette@@VBlockPos@@AEBV7@AEBVVec3@@W4Rotation@@W4Mirror@@MIPEAVStructureTelemetryServerData@@_N_N@Z
     * @hash   -1422463696
     */
    MCAPI void _placeNextBlockSegmentInWorld(class BlockSource &, unsigned __int64, unsigned __int64, class StructureSettings const &, class DataLoadHelper &, class StructureBlockPalette const &, class BlockPalette const &, class BlockPos, class BlockPos const &, class Vec3 const &, enum Rotation, enum Mirror, float, unsigned int, class StructureTelemetryServerData *, bool, bool) const;

private:

};