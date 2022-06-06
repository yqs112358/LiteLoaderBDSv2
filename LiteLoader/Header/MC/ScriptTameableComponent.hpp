// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptTameableComponent : public ScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTTAMEABLECOMPONENT
public:
    class ScriptTameableComponent& operator=(class ScriptTameableComponent const &) = delete;
    ScriptTameableComponent(class ScriptTameableComponent const &) = delete;
    ScriptTameableComponent() = delete;
#endif

public:
    /*0*/ virtual ~ScriptTameableComponent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTTAMEABLECOMPONENT
#endif
    MCAPI ScriptTameableComponent(class WeakEntityRef const &, class Scripting::WeakLifetimeScope const &, std::string const &);
    MCAPI class Scripting::Result<float> getProbability() const;
    MCAPI class Scripting::Result<class DefinitionTrigger> getTameEvent() const;
    MCAPI class Scripting::Result<std::vector<std::string>> getTameItems() const;
    MCAPI class Scripting::Result<bool> tame() const;
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptTameableComponent> bind(struct Scripting::Version);

protected:

private:

};