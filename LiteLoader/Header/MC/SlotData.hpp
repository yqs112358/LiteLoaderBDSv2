/**
 * @file  SlotData.hpp
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
 * @brief MC structure SlotData.
 *
 */
struct SlotData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLOTDATA
public:
    struct SlotData& operator=(struct SlotData const &) = delete;
    SlotData(struct SlotData const &) = delete;
#endif
public:
    /**
     * @symbol ??0SlotData@@QEAA@XZ
     * @hash   -1599639116
     */
    MCAPI SlotData();
    /**
     * @symbol ??1SlotData@@QEAA@XZ
     * @hash   391152466
     */
    MCAPI ~SlotData();
MCAPI static struct SlotData UNKNOWN_LOCATION;

};