/**
 * @file  AppPlatformListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AppPlatformListener.
 *
 */
class AppPlatformListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_APPPLATFORMLISTENER
public:
    class AppPlatformListener& operator=(class AppPlatformListener const &) = delete;
    AppPlatformListener(class AppPlatformListener const &) = delete;
    AppPlatformListener() = delete;
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
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol ?onAppResumed\@AppPlatformListener\@\@UEAAXXZ
     */
    virtual void onAppResumed();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_APPPLATFORMLISTENER
    /**
     * @symbol ?onAppFocusGained\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppFocusGained();
    /**
     * @symbol ?onAppFocusLost\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppFocusLost();
    /**
     * @symbol ?onAppPaused\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppPaused();
    /**
     * @symbol ?onAppPreSuspended\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppPreSuspended();
    /**
     * @symbol ?onAppSurfaceCreated\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppSurfaceCreated();
    /**
     * @symbol ?onAppSurfaceDestroyed\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppSurfaceDestroyed();
    /**
     * @symbol ?onAppSuspended\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppSuspended();
    /**
     * @symbol ?onAppTerminated\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppTerminated();
    /**
     * @symbol ?onAppUnpaused\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onAppUnpaused();
    /**
     * @symbol ?onClipboardCopy\@AppPlatformListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onClipboardCopy(std::string const &);
    /**
     * @symbol ?onClipboardPaste\@AppPlatformListener\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void onClipboardPaste(std::string const &);
    /**
     * @symbol ?onDeviceLost\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onDeviceLost();
    /**
     * @symbol ?onLowMemory\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onLowMemory();
    /**
     * @symbol ?onOperationModeChanged\@AppPlatformListener\@\@UEAAXW4OperationMode\@\@\@Z
     */
    MCVAPI void onOperationModeChanged(enum class OperationMode);
    /**
     * @symbol ?onPerformanceModeChanged\@AppPlatformListener\@\@UEAAX_N\@Z
     */
    MCVAPI void onPerformanceModeChanged(bool);
    /**
     * @symbol ?onPushNotificationReceived\@AppPlatformListener\@\@UEAAXAEBVPushNotificationMessage\@\@\@Z
     */
    MCVAPI void onPushNotificationReceived(class PushNotificationMessage const &);
    /**
     * @symbol ?onResizeBegin\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onResizeBegin();
    /**
     * @symbol ?onResizeEnd\@AppPlatformListener\@\@UEAAXXZ
     */
    MCVAPI void onResizeEnd();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AppPlatformListener();
#endif
    /**
     * @symbol ??0AppPlatformListener\@\@QEAA\@_N\@Z
     */
    MCAPI AppPlatformListener(bool);
    /**
     * @symbol ?initListener\@AppPlatformListener\@\@QEAAXM\@Z
     */
    MCAPI void initListener(float);
    /**
     * @symbol ?terminate\@AppPlatformListener\@\@QEAAXXZ
     */
    MCAPI void terminate();

};
