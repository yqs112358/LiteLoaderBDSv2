/**
 * @file  BlockStateMeta.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockStateMeta.
 *
 */
class BlockStateMeta {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSTATEMETA
public:
    class BlockStateMeta& operator=(class BlockStateMeta const &) = delete;
    BlockStateMeta(class BlockStateMeta const &) = delete;
    BlockStateMeta() = delete;
#endif

public:
    /**
     * @symbol ??0BlockStateMeta\@\@QEAA\@AEBVBlockState\@\@AEBUBlockStateDefinition\@\@\@Z
     */
    MCAPI BlockStateMeta(class BlockState const &, struct BlockStateDefinition const &);
    /**
     * @symbol ?getBool\@BlockStateMeta\@\@QEBA?B_NH\@Z
     */
    MCAPI bool const getBool(int) const;
    /**
     * @symbol ?getID\@BlockStateMeta\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getID() const;
    /**
     * @symbol ?getInt\@BlockStateMeta\@\@QEBA?BHH\@Z
     */
    MCAPI int const getInt(int) const;
    /**
     * @symbol ?getState\@BlockStateMeta\@\@QEBAAEBVBlockState\@\@XZ
     */
    MCAPI class BlockState const & getState() const;
    /**
     * @symbol ?getString\@BlockStateMeta\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI std::string const & getString(int) const;
    /**
     * @symbol ?getType\@BlockStateMeta\@\@QEBA?BW4Type\@Tag\@\@XZ
     */
    MCAPI enum class Tag::Type const getType() const;

};
