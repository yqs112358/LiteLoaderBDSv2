/**
 * @file  VolumeEntityManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VolumeEntityManager.
 *
 */
class VolumeEntityManager {

#define AFTER_EXTRA
// Add Member There
public:
struct VolumeEntityDefinition {
    VolumeEntityDefinition() = delete;
    VolumeEntityDefinition(VolumeEntityDefinition const&) = delete;
    VolumeEntityDefinition(VolumeEntityDefinition const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEENTITYMANAGER
public:
    class VolumeEntityManager& operator=(class VolumeEntityManager const &) = delete;
    VolumeEntityManager(class VolumeEntityManager const &) = delete;
    VolumeEntityManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VOLUMEENTITYMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VolumeEntityManager();
#endif
    /**
     * @symbol ?getVolumeInstanceCount\@VolumeEntityManager\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getVolumeInstanceCount() const;
    /**
     * @symbol ?getVolumeInstances\@VolumeEntityManager\@\@QEBAAEBV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> const & getVolumeInstances(class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol ?isTriggerVolumesEnabled\@VolumeEntityManager\@\@2_NA
     */
    MCAPI static bool isTriggerVolumesEnabled;
    /**
     * @symbol ?registerComponentNetRelevancy\@VolumeEntityManager\@\@SAXAEAVComponentNetRelevancyRegistry\@\@AEBUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI static void registerComponentNetRelevancy(class ComponentNetRelevancyRegistry &, struct cereal::ReflectionCtx const &);

//protected:
    /**
     * @symbol ??0VolumeEntityManager\@\@IEAA\@V?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI VolumeEntityManager(class StackRefResultT<struct EntityRegistryRefTraits>, struct cereal::ReflectionCtx &);
    /**
     * @symbol ?_createVolumeEntity\@VolumeEntityManager\@\@IEAA?AV?$OwnerPtrT\@UEntityRefTraits\@\@\@\@AEBVDefinitionInstanceGroup\@\@\@Z
     */
    MCAPI class OwnerPtrT<struct EntityRefTraits> _createVolumeEntity(class DefinitionInstanceGroup const &);

protected:

};
