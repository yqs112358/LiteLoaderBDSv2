/**
 * @file  MangroveTreeRoots.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "TreeHelper.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MangroveTreeRoots.
 *
 */
class MangroveTreeRoots {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MANGROVETREEROOTS
public:
    class MangroveTreeRoots& operator=(class MangroveTreeRoots const &) = delete;
    MangroveTreeRoots(class MangroveTreeRoots const &) = delete;
    MangroveTreeRoots() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   702762024
     */
    virtual ~MangroveTreeRoots();
    /**
     * @vftbl  1
     * @symbol ?placeRoots@MangroveTreeRoots@@UEBA?AV?$optional@VBlockPos@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@AEBUTreeParams@TreeHelper@@@Z
     * @hash   283750251
     */
    virtual class std::optional<class BlockPos> placeRoots(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, int, class RenderParams &, struct TreeHelper::TreeParams const &) const;

//private:
    /**
     * @symbol ?_placeRoot@MangroveTreeRoots@@AEBAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -2055175010
     */
    MCAPI void _placeRoot(class IBlockWorldGenAPI &, class BlockPos const &, class Random &) const;
    /**
     * @symbol ?_potentialRootPositions@MangroveTreeRoots@@AEBA?AV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@AEBVBlockPos@@EAEAVRandom@@0@Z
     * @hash   -976161643
     */
    MCAPI std::vector<class BlockPos> _potentialRootPositions(class BlockPos const &, unsigned char, class Random &, class BlockPos const &) const;
    /**
     * @symbol ?_simulateRoots@MangroveTreeRoots@@AEBA_NAEAVIBlockWorldGenAPI@@AEAVRandom@@AEBVBlockPos@@2EPEAV?$vector@VBlockPos@@V?$allocator@VBlockPos@@@std@@@std@@HAEBUTreeParams@TreeHelper@@@Z
     * @hash   573023742
     */
    MCAPI bool _simulateRoots(class IBlockWorldGenAPI &, class Random &, class BlockPos const &, class BlockPos const &, unsigned char, std::vector<class BlockPos> *, int, struct TreeHelper::TreeParams const &) const;

private:
MCAPI static float const RANDOM_SKEW_CHANCE;

};