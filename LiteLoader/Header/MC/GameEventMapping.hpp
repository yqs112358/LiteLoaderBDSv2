/**
 * @file  GameEventMapping.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GameEventMapping.
 *
 */
class GameEventMapping {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTMAPPING
public:
    class GameEventMapping& operator=(class GameEventMapping const &) = delete;
    GameEventMapping(class GameEventMapping const &) = delete;
    GameEventMapping() = delete;
#endif

public:
    /**
     * @symbol ?nameToEvent@GameEventMapping@@SAAEBVGameEvent@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1724862405
     */
    MCAPI static class GameEvent const & nameToEvent(std::string const &);
    /**
     * @symbol ?typeToEvent@GameEventMapping@@SAAEBVGameEvent@@W4GameEventType@GameEventConfig@@@Z
     * @hash   -112469379
     */
    MCAPI static class GameEvent const & typeToEvent(enum GameEventConfig::GameEventType);

//private:

private:
MCAPI static std::vector<struct GameEventPair> const mGameEventPairs;

};