/**
 * @file  OverworldBiomeBuilder.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ClimateUtils.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OverworldBiomeBuilder.
 *
 */
class OverworldBiomeBuilder {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDBIOMEBUILDER
public:
    class OverworldBiomeBuilder& operator=(class OverworldBiomeBuilder const &) = delete;
    OverworldBiomeBuilder(class OverworldBiomeBuilder const &) = delete;
    OverworldBiomeBuilder() = delete;
#endif

public:
    /**
     * @symbol ??0OverworldBiomeBuilder@@QEAA@AEBVBaseGameVersion@@@Z
     * @hash   883692998
     */
    MCAPI OverworldBiomeBuilder(class BaseGameVersion const &);
    /**
     * @symbol ?addBiomes@OverworldBiomeBuilder@@QEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBVBiomeRegistry@@@Z
     * @hash   770870753
     */
    MCAPI void addBiomes(std::vector<struct BiomeNoiseTarget> &, class BiomeRegistry const &) const;
    /**
     * @symbol ?getWorldSpawnParameters@OverworldBiomeBuilder@@QEBA?AV?$vector@UClimateParameters@@V?$allocator@UClimateParameters@@@std@@@std@@XZ
     * @hash   528045394
     */
    MCAPI std::vector<struct ClimateParameters> getWorldSpawnParameters() const;

//private:
    /**
     * @symbol ?_addHighSlice@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@@Z
     * @hash   -877514015
     */
    MCAPI void _addHighSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &) const;
    /**
     * @symbol ?_addInlandBiomes@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@@Z
     * @hash   287678373
     */
    MCAPI void _addInlandBiomes(std::vector<struct BiomeNoiseTarget> &) const;
    /**
     * @symbol ?_addLowSlice@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@@Z
     * @hash   -383392077
     */
    MCAPI void _addLowSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &) const;
    /**
     * @symbol ?_addMidSlice@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@@Z
     * @hash   1465884143
     */
    MCAPI void _addMidSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &) const;
    /**
     * @symbol ?_addPeaks@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@@Z
     * @hash   2063272085
     */
    MCAPI void _addPeaks(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &) const;
    /**
     * @symbol ?_addSurfaceBiome@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@1111MPEAVBiome@@@Z
     * @hash   1530248718
     */
    MCAPI void _addSurfaceBiome(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, float, class Biome *) const;
    /**
     * @symbol ?_addUndergroundBiome@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@1111MPEAVBiome@@@Z
     * @hash   -1658255668
     */
    MCAPI void _addUndergroundBiome(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, float, class Biome *) const;
    /**
     * @symbol ?_addValleys@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@@Z
     * @hash   1469587013
     */
    MCAPI void _addValleys(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &) const;

private:
MCAPI static struct ClimateUtils::Parameter const EROSIONS[];
MCAPI static struct ClimateUtils::Parameter const FULL_RANGE;
MCAPI static struct ClimateUtils::Parameter const HUMIDITIES[];
MCAPI static struct ClimateUtils::Parameter const TEMPERATURES[];
MCAPI static struct ClimateUtils::Parameter const coastContinentalness;
MCAPI static struct ClimateUtils::Parameter const deepOceanContinentalness;
MCAPI static struct ClimateUtils::Parameter const dripstoneCavesContinentalness;
MCAPI static struct ClimateUtils::Parameter const farInlandContinentalness;
MCAPI static struct ClimateUtils::Parameter const inlandContinentalness;
MCAPI static struct ClimateUtils::Parameter const lushCavesHumidity;
MCAPI static struct ClimateUtils::Parameter const midInlandContinentalness;
MCAPI static struct ClimateUtils::Parameter const mushroomFieldsContinentalness;
MCAPI static struct ClimateUtils::Parameter const nearInlandContinentalness;
MCAPI static struct ClimateUtils::Parameter const oceanContinentalness;

};