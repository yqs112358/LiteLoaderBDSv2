/**
 * @file  AddActorBasePacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class AddActorBasePacket : public Packet {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADDACTORBASEPACKET
public:
    class AddActorBasePacket& operator=(class AddActorBasePacket const &) = delete;
    AddActorBasePacket(class AddActorBasePacket const &) = delete;
    AddActorBasePacket() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ADDACTORBASEPACKET
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AddActorBasePacket();
#endif

};
