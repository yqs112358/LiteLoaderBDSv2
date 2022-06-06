// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InternalComponentRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERNALCOMPONENTREGISTRY
public:
    class InternalComponentRegistry& operator=(class InternalComponentRegistry const &) = delete;
    InternalComponentRegistry(class InternalComponentRegistry const &) = delete;
    InternalComponentRegistry() = delete;
#endif

public:
    /*0*/ virtual ~InternalComponentRegistry();
    /*1*/ virtual void registerComponents();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INTERNALCOMPONENTREGISTRY
#endif
    MCAPI void addComponentSaveData(class Actor const &, class CompoundTag &);
    MCAPI void initializeComponents(class Actor &, class CompoundTag const &) const;
    MCAPI static std::string const INTERNAL_COMPONENTS;

protected:
    MCAPI void _initializeComponents(class Actor &, class CompoundTag const &) const;
    MCAPI static class CompoundTag const * _getComponentScope(class CompoundTag const &, std::string const &);
    MCAPI static class CompoundTag & _getOrCreateComponentScope(class CompoundTag &, std::string const &);

private:

};