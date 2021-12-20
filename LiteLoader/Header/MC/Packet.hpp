// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "ServerNetworkHandler.hpp"
class BinaryStream;
class ServerPlayer;
enum class PacketReliability {
    Relible,
    RelibleOrdered
};

#undef BEFORE_EXTRA

class Packet {

#define AFTER_EXTRA
// Add Member There
public:
    unsigned unk2 = 2;                                                     // 8
    PacketReliability reliableOrdered = PacketReliability::RelibleOrdered; // 12
    unsigned char clientSubId = 0;                                         // 16
    uint64_t unk24 = 0;                                                    // 24
    uint64_t unk40 = 0;                                                    // 32
    uint32_t incompressible = 0;                                           // 40

    inline Packet(unsigned compress)
        : incompressible(!compress)
    { }
#define DISABLE_CONSTRUCTOR_PREVENTION_PACKET
    inline Packet() {}
    class Packet& operator=(class Packet const&) = delete;
    Packet(class Packet const&) = delete;

    ServerPlayer* getPlayerFromPacket(ServerNetworkHandler* handler, NetworkIdentifier* netId)
    {
        return handler->getServerPlayer(*netId, dAccess<char>(this, 16));
    }
    inline enum StreamReadResult read(class ReadOnlyBinaryStream& binaryStream)
    {
        return _read(binaryStream);
    }
protected:
    std::string toDebugString() {
        return fmt::format("{}({})", getName(), getId());
    }

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKET
public:
    class Packet& operator=(class Packet const&) = delete;
    Packet(class Packet const&) = delete;
    Packet() = delete;
#endif

public:
    /*0*/ virtual ~Packet();
    /*1*/ virtual enum MinecraftPacketIds getId() const = 0;
    /*2*/ virtual std::string getName() const = 0;
    /*3*/ virtual void write(class BinaryStream&) const = 0;
    /*4*/ virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    /*5*/ virtual bool disallowBatching() const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream&) = 0;
    /*
    inline  ~Packet(){
         (Packet::*rv)();
        *((void**)&rv) = dlsym("??1Packet@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};