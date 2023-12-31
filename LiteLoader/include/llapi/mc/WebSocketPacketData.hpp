/**
 * @file  WebSocketPacketData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct WebSocketPacketData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBSOCKETPACKETDATA
public:
    struct WebSocketPacketData& operator=(struct WebSocketPacketData const &) = delete;
    WebSocketPacketData(struct WebSocketPacketData const &) = delete;
    WebSocketPacketData() = delete;
#endif

public:
    /**
     * @symbol ??0WebSocketPacketData\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI WebSocketPacketData(std::string const &);
    /**
     * @symbol ?read\@WebSocketPacketData\@\@QEAA?AV?$Result\@XVerror_code\@std\@\@\@Bedrock\@\@AEAVReadOnlyBinaryStream\@\@\@Z
     */
    MCAPI class Bedrock::Result<void, class std::error_code> read(class ReadOnlyBinaryStream &);

};