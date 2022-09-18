/**
 * @file  BlockStateCommandParam.hpp
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
 * @brief MC class BlockStateCommandParam.
 *
 */
class BlockStateCommandParam {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATECOMMANDPARAM
public:
    class BlockStateCommandParam& operator=(class BlockStateCommandParam const &) = delete;
    BlockStateCommandParam(class BlockStateCommandParam const &) = delete;
    BlockStateCommandParam() = delete;
#endif

public:
    /**
     * @symbol ??0BlockStateCommandParam@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4Type@0@@Z
     * @hash   58438712
     */
    MCAPI BlockStateCommandParam(std::string, std::string, enum class BlockStateCommandParam::Type);
    /**
     * @symbol ?setBlockState@BlockStateCommandParam@@QEBA_NPEAPEBVBlock@@AEAVCommandOutput@@@Z
     * @hash   -1225431315
     */
    MCAPI bool setBlockState(class Block const **, class CommandOutput &) const;
    /**
     * @symbol ??1BlockStateCommandParam@@QEAA@XZ
     * @hash   -1785514560
     */
    MCAPI ~BlockStateCommandParam();

};