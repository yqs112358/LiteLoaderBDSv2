/**
 * @file  Interaction.hpp
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
 * @brief MC structure Interaction.
 *
 */
struct Interaction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTION
public:
    struct Interaction& operator=(struct Interaction const &) = delete;
#endif
public:
    /**
     * @symbol ??0Interaction@@QEAA@XZ
     * @hash   -127087026
     */
    MCAPI Interaction();
    /**
     * @symbol ??0Interaction@@QEAA@AEBU0@@Z
     * @hash   -1642374443
     */
    MCAPI Interaction(struct Interaction const &);
    /**
     * @symbol ??0Interaction@@QEAA@$$QEAU0@@Z
     * @hash   -556982917
     */
    MCAPI Interaction(struct Interaction &&);
    /**
     * @symbol ?addActorDefinitionIdentifierByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   479377082
     */
    MCAPI void addActorDefinitionIdentifierByName(std::string const &);
    /**
     * @symbol ?addLevelSoundEventByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1932228142
     */
    MCAPI void addLevelSoundEventByName(std::string const &);
    /**
     * @symbol ?addVibrationByName@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1901458824
     */
    MCAPI void addVibrationByName(std::string const &);
    /**
     * @symbol ?setCooldown@Interaction@@QEAAXAEBM@Z
     * @hash   1272047827
     */
    MCAPI void setCooldown(float const &);
    /**
     * @symbol ?setCooldownAfterBeingAttacked@Interaction@@QEAAXAEBM@Z
     * @hash   1989207155
     */
    MCAPI void setCooldownAfterBeingAttacked(float const &);
    /**
     * @symbol ?setParticleType@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   194832888
     */
    MCAPI void setParticleType(std::string const &);
    /**
     * @symbol ?setTransformItem@Interaction@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1639162748
     */
    MCAPI void setTransformItem(std::string const &);
    /**
     * @symbol ??1Interaction@@QEAA@XZ
     * @hash   -324714690
     */
    MCAPI ~Interaction();

};