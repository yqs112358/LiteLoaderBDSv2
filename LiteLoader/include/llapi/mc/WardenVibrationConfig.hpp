/**
 * @file  WardenVibrationConfig.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "VibrationListenerConfig.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WardenVibrationConfig.
 *
 */
class WardenVibrationConfig : public VibrationListenerConfig {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WARDENVIBRATIONCONFIG
public:
    class WardenVibrationConfig& operator=(class WardenVibrationConfig const &) = delete;
    WardenVibrationConfig(class WardenVibrationConfig const &) = delete;
    WardenVibrationConfig() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?onSignalReceive\@WardenVibrationConfig\@\@UEAAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEBVGameEvent\@\@PEAVActor\@\@MI3\@Z
     */
    virtual void onSignalReceive(class BlockSource &, class BlockPos const &, class GameEvent const &, class Actor *, float, unsigned int, class Actor *);
    /**
     * @vftbl 2
     * @symbol ?isValidVibration\@WardenVibrationConfig\@\@UEAA_NAEBVGameEvent\@\@\@Z
     */
    virtual bool isValidVibration(class GameEvent const &);
    /**
     * @vftbl 3
     * @symbol ?shouldListen\@WardenVibrationConfig\@\@UEAA_NAEAVBlockSource\@\@AEBVGameEvent\@\@AEBUGameEventContext\@\@\@Z
     */
    virtual bool shouldListen(class BlockSource &, class GameEvent const &, struct GameEventContext const &);
    /**
     * @vftbl 4
     * @symbol ?onSerializableDataChanged\@VibrationListenerConfig\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onSerializableDataChanged(class BlockSource &);
    /**
     * @vftbl 5
     * @symbol ?canReceiveOnlyIfAdjacentChunksAreTicking\@VibrationListenerConfig\@\@UEBA_NXZ
     */
    virtual bool canReceiveOnlyIfAdjacentChunksAreTicking() const;
    /**
     * @symbol ??0WardenVibrationConfig\@\@QEAA\@AEAVActor\@\@G\@Z
     */
    MCAPI WardenVibrationConfig(class Actor &, unsigned short);

};
