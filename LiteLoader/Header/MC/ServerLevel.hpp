/**
 * @file  ServerLevel.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerLevel.
 *
 */
class ServerLevel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLEVEL
public:
    class ServerLevel& operator=(class ServerLevel const &) = delete;
    ServerLevel(class ServerLevel const &) = delete;
    ServerLevel() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLEVEL
    /**
     * @symbol ?consolidateLevelChunkMetaData@ServerLevel@@UEAAXAEAVLevelChunk@@@Z
     * @hash   -95819964
     */
    MCVAPI void consolidateLevelChunkMetaData(class LevelChunk &);
    /**
     * @symbol ?createDimension@ServerLevel@@UEAAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z
     * @hash   -2033061880
     */
    MCVAPI class Dimension * createDimension(class AutomaticID<class Dimension, int>);
    /**
     * @symbol ?decrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
     * @hash   801419298
     */
    MCVAPI void decrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @symbol ?getClientResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ
     * @hash   1956104610
     */
    MCVAPI class ResourcePackManager * getClientResourcePackManager() const;
    /**
     * @symbol ?getLevelChunkMetaDataDictionary@ServerLevel@@UEBA?AV?$shared_ptr@VLevelChunkMetaDataDictionary@@@std@@XZ
     * @hash   166517439
     */
    MCVAPI class std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;
    /**
     * @symbol ?getLevelEventCoordinator@ServerLevel@@UEAAAEAVLevelEventCoordinator@@XZ
     * @hash   784473154
     */
    MCVAPI class LevelEventCoordinator & getLevelEventCoordinator();
    /**
     * @symbol ?getPositionTrackerDBServer@ServerLevel@@UEBAPEAVPositionTrackingDBServer@PositionTrackingDB@@XZ
     * @hash   -956830354
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer * getPositionTrackerDBServer() const;
    /**
     * @symbol ?getServerResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ
     * @hash   -1536697318
     */
    MCVAPI class ResourcePackManager * getServerResourcePackManager() const;
    /**
     * @symbol ?getThreadRandom@ServerLevel@@UEBAAEAVRandom@@XZ
     * @hash   -1122196161
     */
    MCVAPI class Random & getThreadRandom() const;
    /**
     * @symbol ?getTradeTables@ServerLevel@@UEAAPEAVTradeTables@@XZ
     * @hash   1592834846
     */
    MCVAPI class TradeTables * getTradeTables();
    /**
     * @symbol ?incrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
     * @hash   -1902849762
     */
    MCVAPI void incrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @symbol ?initialize@ServerLevel@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@AEBVExperiments@@PEBV23@@Z
     * @hash   1908384721
     */
    MCVAPI bool initialize(std::string const &, class LevelSettings const &, class LevelData *, class Experiments const &, std::string const *);
    /**
     * @symbol ?initializeLevelChunkMetaData@ServerLevel@@UEAAXAEAVLevelChunk@@@Z
     * @hash   -487433971
     */
    MCVAPI void initializeLevelChunkMetaData(class LevelChunk &);
    /**
     * @symbol ?loadFunctionManager@ServerLevel@@UEAAXXZ
     * @hash   -1674486731
     */
    MCVAPI void loadFunctionManager();
    /**
     * @symbol ?onChunkLoaded@ServerLevel@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     * @hash   15017872
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @symbol ?registerEventCoordinators@ServerLevel@@UEAAXXZ
     * @hash   -1254515344
     */
    MCVAPI void registerEventCoordinators();
    /**
     * @symbol ?runCommand@ServerLevel@@UEAAXAEAVCommand@@AEAVCommandOrigin@@W4CommandOriginSystem@@@Z
     * @hash   360940986
     */
    MCVAPI void runCommand(class Command &, class CommandOrigin &, enum CommandOriginSystem);
    /**
     * @symbol ?runCommand@ServerLevel@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z
     * @hash   -2090370009
     */
    MCVAPI void runCommand(class HashedString const &, class CommandOrigin &, enum CommandOriginSystem, enum CurrentCmdVersion);
    /**
     * @symbol ?saveAdditionalData@ServerLevel@@UEAAXXZ
     * @hash   2055608900
     */
    MCVAPI void saveAdditionalData();
    /**
     * @symbol ?saveDynamicProperties@ServerLevel@@UEAAXXZ
     * @hash   481086827
     */
    MCVAPI void saveDynamicProperties();
    /**
     * @symbol ?setCommandsEnabled@ServerLevel@@UEAAX_N@Z
     * @hash   -1717703185
     */
    MCVAPI void setCommandsEnabled(bool);
    /**
     * @symbol ?setServerTickOffset@ServerLevel@@UEAAX_J@Z
     * @hash   1166522158
     */
    MCVAPI void setServerTickOffset(__int64);
    /**
     * @symbol ?setWorldTemplateOptionsUnlocked@ServerLevel@@UEAAXXZ
     * @hash   1250332589
     */
    MCVAPI void setWorldTemplateOptionsUnlocked();
    /**
     * @symbol ?tick@ServerLevel@@UEAAXXZ
     * @hash   -193352413
     */
    MCVAPI void tick();
    /**
     * @symbol ?updateSleepingPlayerList@ServerLevel@@UEAAXXZ
     * @hash   -2051826167
     */
    MCVAPI void updateSleepingPlayerList();
#endif
    /**
     * @symbol ??0ServerLevel@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@V?$unique_ptr@VLevelStorage@@U?$default_delete@VLevelStorage@@@std@@@std@@V?$unique_ptr@VLevelLooseFileStorage@@U?$default_delete@VLevelLooseFileStorage@@@std@@@4@AEAVIMinecraftEventing@@AEAVResourcePackManager@@4V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@2@AEAVMinecraftCommands@@AEAVScheduler@@AEBV?$not_null@V?$NonOwnerPointer@VIEntityRegistryOwner@@@Bedrock@@@2@V?$WeakRefT@UEntityRefTraits@@@@V?$unique_ptr@VBlockComponentFactory@@U?$default_delete@VBlockComponentFactory@@@std@@@4@V?$unique_ptr@VBlockDefinitionGroup@@U?$default_delete@VBlockDefinitionGroup@@@std@@@4@VItemRegistryRef@@V?$weak_ptr@VBlockTypeRegistry@@@4@@Z
     * @hash   888461135
     */
    MCAPI ServerLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const &, std::unique_ptr<class LevelStorage>, std::unique_ptr<class LevelLooseFileStorage>, class IMinecraftEventing &, class ResourcePackManager &, class ResourcePackManager &, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class MinecraftCommands &, class Scheduler &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> const &, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, class std::weak_ptr<class BlockTypeRegistry>);
    /**
     * @symbol ?getCommands@ServerLevel@@QEAAAEAVMinecraftCommands@@XZ
     * @hash   1310574010
     */
    MCAPI class MinecraftCommands & getCommands();
    /**
     * @symbol ?getDynamicPropertiesDefinition@ServerLevel@@QEAAAEAVDynamicPropertiesDefinition@@XZ
     * @hash   -1480311878
     */
    MCAPI class DynamicPropertiesDefinition & getDynamicPropertiesDefinition();
    /**
     * @symbol ?getFunctionManager@ServerLevel@@QEAAAEAVFunctionManager@@XZ
     * @hash   -650556822
     */
    MCAPI class FunctionManager & getFunctionManager();
    /**
     * @symbol ?getMobEvents@ServerLevel@@QEAAAEAVMobEvents@@XZ
     * @hash   -1517303958
     */
    MCAPI class MobEvents & getMobEvents();
    /**
     * @symbol ?getMobEvents@ServerLevel@@QEBAAEBVMobEvents@@XZ
     * @hash   -319102748
     */
    MCAPI class MobEvents const & getMobEvents() const;
    /**
     * @symbol ?getOrAddDynamicProperties@ServerLevel@@QEAAAEAVDynamicProperties@@XZ
     * @hash   633155640
     */
    MCAPI class DynamicProperties & getOrAddDynamicProperties();
    /**
     * @symbol ?setShouldSendSleepMessage@ServerLevel@@QEAAX_N@Z
     * @hash   1526878032
     */
    MCAPI void setShouldSendSleepMessage(bool);
    /**
     * @symbol ?shouldSendSleepMessage@ServerLevel@@QEBA_NXZ
     * @hash   1377038942
     */
    MCAPI bool shouldSendSleepMessage() const;
    /**
     * @symbol ?tryGetVolumeEntityManager@ServerLevel@@QEBA?AV?$NonOwnerPointer@VVolumeEntityManagerServer@@@Bedrock@@XZ
     * @hash   169203595
     */
    MCAPI class Bedrock::NonOwnerPointer<class VolumeEntityManagerServer> tryGetVolumeEntityManager() const;

};