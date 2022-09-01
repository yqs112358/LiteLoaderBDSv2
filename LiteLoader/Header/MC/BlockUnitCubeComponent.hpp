/**
 * @file  BlockUnitCubeComponent.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockUnitCubeComponent.
 *
 */
struct BlockUnitCubeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKUNITCUBECOMPONENT
public:
    struct BlockUnitCubeComponent& operator=(struct BlockUnitCubeComponent const &) = delete;
    BlockUnitCubeComponent(struct BlockUnitCubeComponent const &) = delete;
    BlockUnitCubeComponent() = delete;
#endif
public:
MCAPI static class std::shared_ptr<struct ClientBlockPipeline::BlockSchematic> mBlockSchematic;

};