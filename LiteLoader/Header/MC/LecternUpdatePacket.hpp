/**
 * @file  LecternUpdatePacket.hpp
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
 * @brief MC class LecternUpdatePacket.
 *
 */
class LecternUpdatePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LECTERNUPDATEPACKET
public:
    class LecternUpdatePacket& operator=(class LecternUpdatePacket const &) = delete;
    LecternUpdatePacket(class LecternUpdatePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1906056470
     */
    virtual ~LecternUpdatePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@LecternUpdatePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   -1006867258
     */
    virtual enum MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@LecternUpdatePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1921705843
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@LecternUpdatePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1679597492
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@LecternUpdatePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   1552019908
     */
    virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0LecternUpdatePacket@@QEAA@XZ
     * @hash   -240150380
     */
    MCAPI LecternUpdatePacket();

};