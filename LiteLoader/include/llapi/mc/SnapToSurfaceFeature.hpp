/**
 * @file  SnapToSurfaceFeature.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "IFeature.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SnapToSurfaceFeature.
 *
 */
class SnapToSurfaceFeature : public IFeature {

#define AFTER_EXTRA
// Add Member There
public:
enum class Surface;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNAPTOSURFACEFEATURE
public:
    class SnapToSurfaceFeature& operator=(class SnapToSurfaceFeature const &) = delete;
    SnapToSurfaceFeature(class SnapToSurfaceFeature const &) = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?place\@SnapToSurfaceFeature\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;
    /**
     * @vftbl 2
     * @symbol ?isValidPlacement\@IFeature\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual bool isValidPlacement(std::string const &);
    /**
     * @symbol ??0SnapToSurfaceFeature\@\@QEAA\@XZ
     */
    MCAPI SnapToSurfaceFeature();

//private:
    /**
     * @symbol ?_findSnapPos\@SnapToSurfaceFeature\@\@AEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@W4Surface\@1\@\@Z
     */
    MCAPI class std::optional<class BlockPos> _findSnapPos(class IBlockWorldGenAPI &, class BlockPos const &, enum class SnapToSurfaceFeature::Surface) const;

private:

};
