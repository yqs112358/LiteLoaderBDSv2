/**
 * @file  BlockPosIterator.hpp
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
 * @brief MC class BlockPosIterator.
 *
 */
class BlockPosIterator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKPOSITERATOR
public:
    class BlockPosIterator& operator=(class BlockPosIterator const &) = delete;
    BlockPosIterator(class BlockPosIterator const &) = delete;
    BlockPosIterator() = delete;
#endif

public:
    /**
     * @symbol ??0BlockPosIterator@@QEAA@AEBVBlockPos@@0@Z
     * @hash   2126730470
     */
    MCAPI BlockPosIterator(class BlockPos const &, class BlockPos const &);
    /**
     * @symbol ?begin@BlockPosIterator@@QEBA?AV1@XZ
     * @hash   -1388486726
     */
    MCAPI class BlockPosIterator begin() const;
    /**
     * @symbol ?end@BlockPosIterator@@QEBA?AV1@XZ
     * @hash   -1680069398
     */
    MCAPI class BlockPosIterator end() const;
    /**
     * @symbol ??9BlockPosIterator@@QEBA_NAEBV0@@Z
     * @hash   2080667077
     */
    MCAPI bool operator!=(class BlockPosIterator const &) const;
    /**
     * @symbol ??DBlockPosIterator@@QEAAAEBVBlockPos@@XZ
     * @hash   82285778
     */
    MCAPI class BlockPos const & operator*();
    /**
     * @symbol ??EBlockPosIterator@@QEAAAEAV0@XZ
     * @hash   1506533018
     */
    MCAPI class BlockPosIterator & operator++();

};