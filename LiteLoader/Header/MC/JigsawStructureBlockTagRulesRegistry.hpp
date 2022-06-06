// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class JigsawStructureBlockTagRulesRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREBLOCKTAGRULESREGISTRY
public:
    class JigsawStructureBlockTagRulesRegistry& operator=(class JigsawStructureBlockTagRulesRegistry const &) = delete;
    JigsawStructureBlockTagRulesRegistry(class JigsawStructureBlockTagRulesRegistry const &) = delete;
    JigsawStructureBlockTagRulesRegistry() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_JIGSAWSTRUCTUREBLOCKTAGRULESREGISTRY
#endif
    MCAPI void clear();
    MCAPI std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const * lookupByName(std::string) const;
    MCAPI void registerBlockTagRules(std::string, std::unique_ptr<std::vector<class std::unique_ptr<class StructurePoolBlockTagRule, struct std::default_delete<class StructurePoolBlockTagRule>>>> &&);
    MCAPI ~JigsawStructureBlockTagRulesRegistry();

protected:

private:

};