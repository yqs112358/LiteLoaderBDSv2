/**
 * @file  DryingOutTimerSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ITickingSystem.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DryingOutTimerSystem.
 *
 */
class DryingOutTimerSystem : public ITickingSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRYINGOUTTIMERSYSTEM
public:
    class DryingOutTimerSystem& operator=(class DryingOutTimerSystem const &) = delete;
    DryingOutTimerSystem(class DryingOutTimerSystem const &) = delete;
    DryingOutTimerSystem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@DryingOutTimerSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry &);

};
