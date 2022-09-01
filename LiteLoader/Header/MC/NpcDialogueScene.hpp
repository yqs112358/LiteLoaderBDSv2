/**
 * @file  NpcDialogueScene.hpp
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
 * @brief MC structure NpcDialogueScene.
 *
 */
struct NpcDialogueScene {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDIALOGUESCENE
public:
    struct NpcDialogueScene& operator=(struct NpcDialogueScene const &) = delete;
    NpcDialogueScene(struct NpcDialogueScene const &) = delete;
    NpcDialogueScene() = delete;
#endif
public:
    /**
     * @symbol ??1NpcDialogueScene@@QEAA@XZ
     * @hash   -161106931
     */
    MCAPI ~NpcDialogueScene();
    /**
     * @symbol ?parse@NpcDialogueScene@@SA?AU1@AEBVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   1970398991
     */
    MCAPI static struct NpcDialogueScene parse(class Json::Value const &, std::string const &, int);

};