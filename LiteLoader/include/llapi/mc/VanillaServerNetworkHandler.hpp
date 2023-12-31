/**
 * @file  VanillaServerNetworkHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "GameSpecificNetEventCallback.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VanillaServerNetworkHandler.
 *
 */
class VanillaServerNetworkHandler : public GameSpecificNetEventCallback {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VANILLASERVERNETWORKHANDLER
public:
    class VanillaServerNetworkHandler& operator=(class VanillaServerNetworkHandler const &) = delete;
    VanillaServerNetworkHandler(class VanillaServerNetworkHandler const &) = delete;
    VanillaServerNetworkHandler() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?handle\@VanillaServerNetworkHandler\@\@UEAAXAEBVNetworkIdentifier\@\@AEBVResourcePackClientResponsePacket\@\@\@Z
     */
    virtual void handle(class NetworkIdentifier const &, class ResourcePackClientResponsePacket const &);

};
