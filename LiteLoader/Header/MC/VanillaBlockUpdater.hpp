// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VanillaBlockUpdater {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLABLOCKUPDATER
public:
    class VanillaBlockUpdater& operator=(class VanillaBlockUpdater const &) = delete;
    VanillaBlockUpdater(class VanillaBlockUpdater const &) = delete;
    VanillaBlockUpdater() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VANILLABLOCKUPDATER
#endif
    MCAPI static void destroy();
    MCAPI static class CompoundTagUpdaterContext & get();
    MCAPI static void initialize();

protected:

private:
    MCAPI static void addBaseUpdater(class CompoundTagUpdaterContext &);
    MCAPI static void addRailUpdater_1_14_0(std::string const &, class CompoundTagUpdaterContext &);
    MCAPI static void addUpdaters_1_10_0(class CompoundTagUpdaterContext &);
    MCAPI static void addUpdaters_1_12_0(class CompoundTagUpdaterContext &);
    MCAPI static void addUpdaters_1_13_0(class CompoundTagUpdaterContext &);
    MCAPI static void addUpdaters_1_14_0(class CompoundTagUpdaterContext &);
    MCAPI static void addUpdaters_1_15_0(class CompoundTagUpdaterContext &);
    MCAPI static void addUpdaters_1_16_0(class CompoundTagUpdaterContext &);
    MCAPI static void addUpdaters_1_16_210(class CompoundTagUpdaterContext &);
    MCAPI static void addUpdaters_1_18_10(class CompoundTagUpdaterContext &);
    MCAPI static std::unique_ptr<class CompoundTagUpdaterContext> mContext;

};