// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StructurePoolActorPredicateActorMatch {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLACTORPREDICATEACTORMATCH
public:
    class StructurePoolActorPredicateActorMatch& operator=(class StructurePoolActorPredicateActorMatch const &) = delete;
    StructurePoolActorPredicateActorMatch(class StructurePoolActorPredicateActorMatch const &) = delete;
    StructurePoolActorPredicateActorMatch() = delete;
#endif

public:
    /*0*/ virtual ~StructurePoolActorPredicateActorMatch();
    /*1*/ virtual bool test(std::string const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPOOLACTORPREDICATEACTORMATCH
#endif
    MCAPI StructurePoolActorPredicateActorMatch(std::string);

protected:

private:

};