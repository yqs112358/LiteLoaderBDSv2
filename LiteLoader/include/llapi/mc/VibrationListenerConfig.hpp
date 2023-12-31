/**
 * @file  VibrationListenerConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class VibrationListenerConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VIBRATIONLISTENERCONFIG
public:
    class VibrationListenerConfig& operator=(class VibrationListenerConfig const &) = delete;
    VibrationListenerConfig(class VibrationListenerConfig const &) = delete;
    VibrationListenerConfig() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VIBRATIONLISTENERCONFIG
    /**
     * @symbol ?canReceiveOnlyIfAdjacentChunksAreTicking\@VibrationListenerConfig\@\@UEBA_NXZ
     */
    MCVAPI bool canReceiveOnlyIfAdjacentChunksAreTicking() const;
    /**
     * @symbol ?isValidVibration\@VibrationListenerConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    MCVAPI bool isValidVibration(class GameEvent const &);
    /**
     * @symbol ?onSerializableDataChanged\@VibrationListenerConfig\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onSerializableDataChanged(class BlockSource &);
#endif

};
