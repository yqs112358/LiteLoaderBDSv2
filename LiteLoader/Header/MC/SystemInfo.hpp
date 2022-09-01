/**
 * @file  SystemInfo.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure SystemInfo.
 *
 */
struct SystemInfo {

#define AFTER_EXTRA

#undef AFTER_EXTRApublic:
    /**
     * @symbol ??0SystemInfo@@QEAA@XZ
     * @hash   1220707529
     */
    MCAPI SystemInfo();
    /**
     * @symbol ??0SystemInfo@@QEAA@AEBU0@@Z
     * @hash   620952639
     */
    MCAPI SystemInfo(struct SystemInfo const &);
    /**
     * @symbol ??4SystemInfo@@QEAAAEAU0@AEBU0@@Z
     * @hash   78123958
     */
    MCAPI struct SystemInfo & operator=(struct SystemInfo const &);
    /**
     * @symbol ??4SystemInfo@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   1975772062
     */
    MCAPI struct SystemInfo & operator=(struct SystemInfo &&);
    /**
     * @symbol ??1SystemInfo@@QEAA@XZ
     * @hash   488413783
     */
    MCAPI ~SystemInfo();
    /**
     * @symbol ?bindType@SystemInfo@@SAXXZ
     * @hash   -1160929069
     */
    MCAPI static void bindType();

};