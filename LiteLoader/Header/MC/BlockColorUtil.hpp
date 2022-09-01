/**
 * @file  BlockColorUtil.hpp
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
 * @brief MC namespace BlockColorUtil.
 *
 */
namespace BlockColorUtil {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
MCAPI extern class std::array<enum BlockColor, 16> RAINBOW;
    /**
     * @symbol ?fromInt@BlockColorUtil@@YA?AW4BlockColor@@H@Z
     * @hash   1086227848
     */
    MCAPI enum BlockColor fromInt(int);
    /**
     * @symbol ?fromItemColor@BlockColorUtil@@YA?AW4BlockColor@@W4ItemColor@@@Z
     * @hash   273743382
     */
    MCAPI enum BlockColor fromItemColor(enum ItemColor);
    /**
     * @symbol ?getColor@BlockColorUtil@@YA?AVColor@mce@@W4BlockColor@@@Z
     * @hash   140372386
     */
    MCAPI class mce::Color getColor(enum BlockColor);
    /**
     * @symbol ?getName@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
     * @hash   216259090
     */
    MCAPI std::string const & getName(enum BlockColor);
    /**
     * @symbol ?getNameMixedCase@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
     * @hash   -886383886
     */
    MCAPI std::string const & getNameMixedCase(enum BlockColor);
    /**
     * @symbol ?getNameSnakeCase@BlockColorUtil@@YAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockColor@@@Z
     * @hash   -1631852680
     */
    MCAPI std::string const & getNameSnakeCase(enum BlockColor);
    /**
     * @symbol ?getRGBColor@BlockColorUtil@@YAHW4BlockColor@@@Z
     * @hash   1406018752
     */
    MCAPI int getRGBColor(enum BlockColor);

};