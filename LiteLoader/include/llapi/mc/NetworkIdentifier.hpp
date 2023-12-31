/**
 * @file  NetworkIdentifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkIdentifier.
 *
 */
class NetworkIdentifier {

#define AFTER_EXTRA
// Add Member There
    char filler[160];
public:
    LIAPI std::string getIP();

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKIDENTIFIER
public:
    class NetworkIdentifier& operator=(class NetworkIdentifier const &) = delete;
    NetworkIdentifier(class NetworkIdentifier const &) = delete;
#endif

public:
    /**
     * @symbol ??0NetworkIdentifier\@\@QEAA\@AEBUsockaddr_in6\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in6 const &);
    /**
     * @symbol ??0NetworkIdentifier\@\@QEAA\@AEBUsockaddr_in\@\@\@Z
     */
    MCAPI NetworkIdentifier(struct sockaddr_in const &);
    /**
     * @symbol ??0NetworkIdentifier\@\@QEAA\@XZ
     */
    MCAPI NetworkIdentifier();
    /**
     * @symbol ?getAddress\@NetworkIdentifier\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getAddress() const;
    /**
     * @symbol ?getCorrelationId\@NetworkIdentifier\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCorrelationId() const;
    /**
     * @symbol ?getHash\@NetworkIdentifier\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol ?isUnassigned\@NetworkIdentifier\@\@QEBA_NXZ
     */
    MCAPI bool isUnassigned() const;
    /**
     * @symbol ??8NetworkIdentifier\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class NetworkIdentifier const &) const;
    /**
     * @symbol ?toString\@NetworkIdentifier\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    /**
     * @symbol ?INVALID_ID\@NetworkIdentifier\@\@2V1\@A
     */
    MCAPI static class NetworkIdentifier INVALID_ID;
    /**
     * @symbol ?hyphenateId\@NetworkIdentifier\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_K\@Z
     */
    MCAPI static std::string hyphenateId(unsigned __int64);

//private:
    /**
     * @symbol ?equalsTypeData\@NetworkIdentifier\@\@AEBA_NAEBV1\@\@Z
     */
    MCAPI bool equalsTypeData(class NetworkIdentifier const &) const;

private:

};
