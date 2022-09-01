/**
 * @file  EducationLevelSettings.hpp
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
 * @brief MC structure EducationLevelSettings.
 *
 */
struct EducationLevelSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRApublic:
    /**
     * @symbol ??0EducationLevelSettings@@QEAA@XZ
     * @hash   -14753573
     */
    MCAPI EducationLevelSettings();
    /**
     * @symbol ??0EducationLevelSettings@@QEAA@AEBU0@@Z
     * @hash   -1871976289
     */
    MCAPI EducationLevelSettings(struct EducationLevelSettings const &);
    /**
     * @symbol ?getCommandOverrideFunctor@EducationLevelSettings@@QEBA?AV?$function@$$A6AXAEAUCommandFlag@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@XZ
     * @hash   1667638902
     */
    MCAPI class std::function<void (struct CommandFlag &, std::string const &)> getCommandOverrideFunctor() const;
    /**
     * @symbol ??4EducationLevelSettings@@QEAAAEAU0@AEBU0@@Z
     * @hash   -1550688506
     */
    MCAPI struct EducationLevelSettings & operator=(struct EducationLevelSettings const &);
    /**
     * @symbol ?save@EducationLevelSettings@@QEAAXAEBVLevelLooseFileStorage@@@Z
     * @hash   514273078
     */
    MCAPI void save(class LevelLooseFileStorage const &);
    /**
     * @symbol ??1EducationLevelSettings@@QEAA@XZ
     * @hash   1128013305
     */
    MCAPI ~EducationLevelSettings();
MCAPI static std::string const DEFAULT_BORDER_PATH;

};