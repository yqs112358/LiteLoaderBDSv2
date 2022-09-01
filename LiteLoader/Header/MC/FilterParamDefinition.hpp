/**
 * @file  FilterParamDefinition.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure FilterParamDefinition.
 *
 */
struct FilterParamDefinition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERPARAMDEFINITION
public:
    struct FilterParamDefinition& operator=(struct FilterParamDefinition const &) = delete;
    FilterParamDefinition(struct FilterParamDefinition const &) = delete;
    FilterParamDefinition() = delete;
#endif
public:
    /**
     * @symbol ??0FilterParamDefinition@@QEAA@W4FilterParamType@@W4FilterParamRequirement@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@VFilterInput@@UFilterStringMap@@@Z
     * @hash   -1832228083
     */
    MCAPI FilterParamDefinition(enum FilterParamType, enum FilterParamRequirement, std::string, class FilterInput, struct FilterStringMap);

};