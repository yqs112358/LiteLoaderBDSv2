// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class RapidJsonUpgradePath {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAPIDJSONUPGRADEPATH
public:
    class RapidJsonUpgradePath& operator=(class RapidJsonUpgradePath const &) = delete;
    RapidJsonUpgradePath(class RapidJsonUpgradePath const &) = delete;
    RapidJsonUpgradePath() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAPIDJSONUPGRADEPATH
#endif
    MCAPI void add(class SemVersion, class std::function<bool (class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &)>);
    MCAPI bool process(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &, class std::optional<class SemVersion>);
    MCAPI ~RapidJsonUpgradePath();

protected:
    MCAPI std::string _getVersion(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &);

private:

};