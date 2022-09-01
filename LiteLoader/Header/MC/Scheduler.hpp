/**
 * @file  Scheduler.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Scheduler.
 *
 */
class Scheduler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCHEDULER
public:
    class Scheduler& operator=(class Scheduler const &) = delete;
    Scheduler(class Scheduler const &) = delete;
    Scheduler() = delete;
#endif

public:
    /**
     * @symbol ??0Scheduler@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@I@Z
     * @hash   -2040477939
     */
    MCAPI Scheduler(std::string, unsigned int);
    /**
     * @symbol ?changeThread@Scheduler@@QEAAXVid@thread@std@@@Z
     * @hash   65902060
     */
    MCAPI void changeThread(class std::thread::id);
    /**
     * @symbol ?getCoroutinePool@Scheduler@@QEAAAEAVWorkerPool@@XZ
     * @hash   628719972
     */
    MCAPI class WorkerPool & getCoroutinePool();
    /**
     * @symbol ?processCoroutines@Scheduler@@QEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@0@Z
     * @hash   -1641411068
     */
    MCAPI void processCoroutines(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    /**
     * @symbol ?queueCallback@Scheduler@@QEAAXV?$shared_ptr@VBackgroundTaskBase@@@std@@@Z
     * @hash   -627638211
     */
    MCAPI void queueCallback(class std::shared_ptr<class BackgroundTaskBase>);
    /**
     * @symbol ?setTargetFPS@Scheduler@@QEAAXI@Z
     * @hash   643673446
     */
    MCAPI void setTargetFPS(unsigned int);
MCAPI static float const AVERAGE_TASK_TOLERANCE;

};