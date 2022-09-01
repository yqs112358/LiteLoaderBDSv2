/**
 * @file  NetworkSettingsPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkSettingsPacket.
 *
 */
class NetworkSettingsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSETTINGSPACKET
public:
    class NetworkSettingsPacket& operator=(class NetworkSettingsPacket const &) = delete;
    NetworkSettingsPacket(class NetworkSettingsPacket const &) = delete;
    NetworkSettingsPacket() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   119387815
     */
    virtual ~NetworkSettingsPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@NetworkSettingsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   113220293
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@NetworkSettingsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -764339982
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@NetworkSettingsPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   -1829875163
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@NetworkSettingsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   2110276069
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);

};