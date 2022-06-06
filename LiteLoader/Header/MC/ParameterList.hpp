// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RTree.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ParameterList {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARAMETERLIST
public:
    class ParameterList& operator=(class ParameterList const &) = delete;
    ParameterList(class ParameterList const &) = delete;
    ParameterList() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PARAMETERLIST
#endif
    MCAPI ParameterList(class ParameterList &&);
    MCAPI ParameterList(std::vector<struct BiomeNoiseTarget> const &);
    MCAPI class Biome * findTarget(struct TargetPoint const &, struct RTree::Hint *) const;
    MCAPI ~ParameterList();

protected:

private:

};