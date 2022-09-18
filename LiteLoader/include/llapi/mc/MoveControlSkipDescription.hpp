/**
 * @file  MoveControlSkipDescription.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveControlSkipDescription.
 *
 */
class MoveControlSkipDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVECONTROLSKIPDESCRIPTION
public:
    class MoveControlSkipDescription& operator=(class MoveControlSkipDescription const &) = delete;
    MoveControlSkipDescription(class MoveControlSkipDescription const &) = delete;
    MoveControlSkipDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol ?getJsonName@MoveControlSkipDescription@@UEBAPEBDXZ
     * @hash   97886867
     */
    virtual char const * getJsonName() const;
    /**
     * @vftbl  1
     * @hash   97641563
     */
    virtual ~MoveControlSkipDescription();
    /**
     * @vftbl  2
     * @symbol ?deserializeData@MoveControlDescription@@UEAAXUDeserializeDataParams@@@Z
     * @hash   -1049280672
     */
    virtual void deserializeData(struct DeserializeDataParams);
    /**
     * @vftbl  3
     * @symbol ?serializeData@MoveControlDescription@@UEBAXAEAVValue@Json@@@Z
     * @hash   2146867690
     */
    virtual void serializeData(class Json::Value &) const;

};