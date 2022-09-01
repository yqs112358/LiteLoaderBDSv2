/**
 * @file  PropertyBag.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PropertyBag.
 *
 */
class PropertyBag {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYBAG
public:
    class PropertyBag& operator=(class PropertyBag const &) = delete;
    PropertyBag(class PropertyBag const &) = delete;
#endif

public:
    /**
     * @symbol ??0PropertyBag@@QEAA@XZ
     * @hash   316917535
     */
    MCAPI PropertyBag();
    /**
     * @symbol ??0PropertyBag@@QEAA@AEBVValue@Json@@@Z
     * @hash   -1543204476
     */
    MCAPI PropertyBag(class Json::Value const &);
    /**
     * @symbol ?toJsonValue@PropertyBag@@QEBAAEBVValue@Json@@XZ
     * @hash   267005492
     */
    MCAPI class Json::Value const & toJsonValue() const;
    /**
     * @symbol ?toString@PropertyBag@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -985370184
     */
    MCAPI std::string toString() const;
MCAPI static class PropertyBag EMPTY;

};