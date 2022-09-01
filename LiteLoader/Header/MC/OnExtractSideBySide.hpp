/**
 * @file  OnExtractSideBySide.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SideBySideExtractionId.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure OnExtractSideBySide.
 *
 */
struct OnExtractSideBySide {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONEXTRACTSIDEBYSIDE
public:
    struct OnExtractSideBySide& operator=(struct OnExtractSideBySide const &) = delete;
    OnExtractSideBySide(struct OnExtractSideBySide const &) = delete;
    OnExtractSideBySide() = delete;
#endif
public:
    /**
     * @symbol ?flagUnsupportedComparisonFrame@OnExtractSideBySide@@SAXAEAVActor@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@USideBySidePartialComparison@@@Z
     * @hash   -948111068
     */
    MCAPI static void flagUnsupportedComparisonFrame(class Actor &, class std::basic_string_view<char, struct std::char_traits<char>>, struct SideBySidePartialComparison);
    /**
     * @symbol ?shouldSimulateLegacy@OnExtractSideBySide@@SA_NAEBVActor@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UEntityInside@2@@std@@@Z
     * @hash   -1016750743
     */
    MCAPI static bool shouldSimulateLegacy(class Actor const &, class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::EntityInside>);
    /**
     * @symbol ?tryTrigger@OnExtractSideBySide@@SAXAEAVActor@@V?$variant@UTickBegin@SideBySideExtractionId@@UBeginManagePassengers@2@UManagePassengersStopRiding@2@UManagePassengersPositioning@2@UEntityInside@2@@std@@W4SideBySideExtractionStep@@@Z
     * @hash   1802897513
     */
    MCAPI static void tryTrigger(class Actor &, class std::variant<struct SideBySideExtractionId::TickBegin, struct SideBySideExtractionId::BeginManagePassengers, struct SideBySideExtractionId::ManagePassengersStopRiding, struct SideBySideExtractionId::ManagePassengersPositioning, struct SideBySideExtractionId::EntityInside>, enum SideBySideExtractionStep);
    /**
     * @symbol ?usesEcsMovement@OnExtractSideBySide@@SA_NAEBVActor@@@Z
     * @hash   -427306075
     */
    MCAPI static bool usesEcsMovement(class Actor const &);

};