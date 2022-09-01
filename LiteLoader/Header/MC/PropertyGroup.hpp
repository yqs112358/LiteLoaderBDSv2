/**
 * @file  PropertyGroup.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "PropertyMetadata.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PropertyGroup.
 *
 */
class PropertyGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYGROUP
public:
    class PropertyGroup& operator=(class PropertyGroup const &) = delete;
    PropertyGroup(class PropertyGroup const &) = delete;
#endif

public:
    /**
     * @symbol ??0PropertyGroup@@QEAA@XZ
     * @hash   1226767942
     */
    MCAPI PropertyGroup();
    /**
     * @symbol ?getDefaultBoolValue@PropertyGroup@@QEBA_N_KAEAVRenderParams@@@Z
     * @hash   -2047155659
     */
    MCAPI bool getDefaultBoolValue(unsigned __int64, class RenderParams &) const;
    /**
     * @symbol ?getDefaultEnumIndexValue@PropertyGroup@@QEBA_K_KAEAVRenderParams@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -592434747
     */
    MCAPI unsigned __int64 getDefaultEnumIndexValue(unsigned __int64, class RenderParams &, std::string const &) const;
    /**
     * @symbol ?getDefaultFloatValue@PropertyGroup@@QEBAM_KAEAVRenderParams@@@Z
     * @hash   785311119
     */
    MCAPI float getDefaultFloatValue(unsigned __int64, class RenderParams &) const;
    /**
     * @symbol ?getDefaultIntValue@PropertyGroup@@QEBAH_KAEAVRenderParams@@@Z
     * @hash   -224928485
     */
    MCAPI int getDefaultIntValue(unsigned __int64, class RenderParams &) const;
    /**
     * @symbol ?getNetworkSyncPropertyDescriptionsAsCompound@PropertyGroup@@QEBA?AVCompoundTag@@XZ
     * @hash   224526976
     */
    MCAPI class CompoundTag getNetworkSyncPropertyDescriptionsAsCompound() const;
    /**
     * @symbol ?getPropertyMetadata@PropertyGroup@@QEBAPEBVPropertyMetadata@@_K@Z
     * @hash   -895021713
     */
    MCAPI class PropertyMetadata const * getPropertyMetadata(unsigned __int64) const;
    /**
     * @symbol ?getPropertyMetadataByString@PropertyGroup@@QEBAPEBVPropertyMetadata@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1544496470
     */
    MCAPI class PropertyMetadata const * getPropertyMetadataByString(std::string const &) const;
    /**
     * @symbol ??1PropertyGroup@@QEAA@XZ
     * @hash   1826659830
     */
    MCAPI ~PropertyGroup();
MCAPI static unsigned __int64 const MAX_ENUM_SIZE;
MCAPI static unsigned __int64 const MAX_ENUM_VALUE_SIZE;
MCAPI static unsigned __int64 const MAX_PROPERTIES_COUNT;
    /**
     * @symbol ?isValidEnumEntry@PropertyGroup@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   809926671
     */
    MCAPI static bool isValidEnumEntry(std::string const &);
    /**
     * @symbol ?loadPropertiesFromJson@PropertyGroup@@SA?AV?$shared_ptr@$$CBVPropertyGroup@@@std@@AEBVValue@Json@@AEBVSemVersion@@@Z
     * @hash   796630605
     */
    MCAPI static class std::shared_ptr<class PropertyGroup const> loadPropertiesFromJson(class Json::Value const &, class SemVersion const &);

//private:
    /**
     * @symbol ?_addBoolProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N1@Z
     * @hash   -1018862647
     */
    MCAPI void _addBoolProperty(std::string const &, bool, bool);
    /**
     * @symbol ?_addEnumIndexProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N_KAEBV?$vector@VHashedString@@V?$allocator@VHashedString@@@std@@@3@@Z
     * @hash   396560857
     */
    MCAPI void _addEnumIndexProperty(std::string const &, bool, unsigned __int64, std::vector<class HashedString> const &);
    /**
     * @symbol ?_addFloatProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NMMM@Z
     * @hash   1649133961
     */
    MCAPI void _addFloatProperty(std::string const &, bool, float, float, float);
    /**
     * @symbol ?_addIntProperty@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NHHH@Z
     * @hash   -1092756669
     */
    MCAPI void _addIntProperty(std::string const &, bool, int, int, int);
    /**
     * @symbol ?_addPropertyMetadata@PropertyGroup@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NW4ContainedPropertyType@PropertyMetadata@@@Z
     * @hash   1814902652
     */
    MCAPI void _addPropertyMetadata(std::string const &, bool, enum PropertyMetadata::ContainedPropertyType);
    /**
     * @symbol ?_getFriendlyJsonTypeString@PropertyGroup@@AEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ContainedPropertyType@PropertyMetadata@@@Z
     * @hash   -1234370765
     */
    MCAPI std::string const & _getFriendlyJsonTypeString(enum PropertyMetadata::ContainedPropertyType);
    /**
     * @symbol ?_loadPropertyFromJson@PropertyGroup@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@W4MolangVersion@@@Z
     * @hash   -667979578
     */
    MCAPI bool _loadPropertyFromJson(std::string const &, class Json::Value const &, enum MolangVersion);
    /**
     * @symbol ?_reserveSpaceForTypes@PropertyGroup@@AEAAXAEBV?$vector@_KV?$allocator@_K@std@@@std@@@Z
     * @hash   434318092
     */
    MCAPI void _reserveSpaceForTypes(std::vector<unsigned __int64> const &);
    /**
     * @symbol ?_validateDataType@PropertyGroup@@AEAA_NAEBVValue@Json@@W4ContainedPropertyType@PropertyMetadata@@@Z
     * @hash   -1745747567
     */
    MCAPI bool _validateDataType(class Json::Value const &, enum PropertyMetadata::ContainedPropertyType);
    /**
     * @symbol ?_getJsonPropertyType@PropertyGroup@@CA?AW4ContainedPropertyType@PropertyMetadata@@AEBVValue@Json@@@Z
     * @hash   -1855704178
     */
    MCAPI static enum PropertyMetadata::ContainedPropertyType _getJsonPropertyType(class Json::Value const &);

private:

};