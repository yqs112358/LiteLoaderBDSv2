// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CreativeItemEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMENTRY
public:
    class CreativeItemEntry& operator=(class CreativeItemEntry const &) = delete;
    CreativeItemEntry(class CreativeItemEntry const &) = delete;
    CreativeItemEntry() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CREATIVEITEMENTRY
#endif
    MCAPI CreativeItemEntry(class CreativeItemEntry &&);
    MCAPI CreativeItemEntry(class CreativeItemRegistry *, class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &, class ItemInstance const &, unsigned int);
    MCAPI class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const & getCreativeNetId() const;
    MCAPI class CreativeGroupInfo * getGroup() const;
    MCAPI unsigned int getIndex() const;
    MCAPI class ItemInstance const & getItemInstance() const;

protected:

private:
    MCAPI void _setGroup(class CreativeGroupInfo *);

};