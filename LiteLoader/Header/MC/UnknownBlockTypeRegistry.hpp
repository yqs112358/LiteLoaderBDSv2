// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class UnknownBlockTypeRegistry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UNKNOWNBLOCKTYPEREGISTRY
public:
    class UnknownBlockTypeRegistry& operator=(class UnknownBlockTypeRegistry const &) = delete;
    UnknownBlockTypeRegistry(class UnknownBlockTypeRegistry const &) = delete;
    UnknownBlockTypeRegistry() = delete;
#endif

public:
    /*0*/ virtual ~UnknownBlockTypeRegistry();
    /*1*/ virtual class Block const & getUnknownBlock(class CompoundTag const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_UNKNOWNBLOCKTYPEREGISTRY
#endif

protected:

private:
    MCAPI void _registerBlock(std::string const &, unsigned __int64);

};