/**
 * @file  http_header_compare.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure http_header_compare.
 *
 */
struct http_header_compare {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HTTP_HEADER_COMPARE
public:
    struct http_header_compare& operator=(struct http_header_compare const &) = delete;
    http_header_compare(struct http_header_compare const &) = delete;
    http_header_compare() = delete;
#endif
public:
    /**
     * @symbol ??Rhttp_header_compare@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$http_stl_allocator@D@@@std@@0@Z
     * @hash   -614483685
     */
    MCAPI bool operator()(class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const &, class std::basic_string<char, struct std::char_traits<char>, class http_stl_allocator<char>> const &) const;

};