// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptPluginPackSource {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTPLUGINPACKSOURCE
public:
    class ScriptPluginPackSource& operator=(class ScriptPluginPackSource const &) = delete;
    ScriptPluginPackSource(class ScriptPluginPackSource const &) = delete;
    ScriptPluginPackSource() = delete;
#endif

public:
    /*0*/ virtual ~ScriptPluginPackSource();
    /*1*/ virtual class PackManifest const & getManifest();
    /*2*/ virtual class std::unordered_map<std::string, std::string, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, std::string>>> loadScripts(std::string const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTPLUGINPACKSOURCE
#endif

protected:

private:

};