// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ItemEventResponseFactory {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMEVENTRESPONSEFACTORY
public:
    class ItemEventResponseFactory& operator=(class ItemEventResponseFactory const &) = delete;
    ItemEventResponseFactory(class ItemEventResponseFactory const &) = delete;
    ItemEventResponseFactory() = delete;
#endif

public:
    /*0*/ virtual ~ItemEventResponseFactory();
    /*1*/ virtual void initializeFactory(class Experiments const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMEVENTRESPONSEFACTORY
#endif
    MCAPI void initSchema();

protected:

private:

};