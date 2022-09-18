/**
 * @file  SerializerContext.hpp
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
 * @brief MC class SerializerContext.
 *
 */
class SerializerContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERIALIZERCONTEXT
public:
    class SerializerContext& operator=(class SerializerContext const &) = delete;
    SerializerContext(class SerializerContext const &) = delete;
#endif

public:
    /**
     * @symbol ??0SerializerContext@@QEAA@XZ
     * @hash   -965322167
     */
    MCAPI SerializerContext();
    /**
     * @symbol ?clear@SerializerContext@@QEAAXXZ
     * @hash   264414735
     */
    MCAPI void clear();
    /**
     * @symbol ?consumeContext@SerializerContext@@QEAAX$$QEAV1@@Z
     * @hash   2123414728
     */
    MCAPI void consumeContext(class SerializerContext &&);
    /**
     * @symbol ?detachContext@SerializerContext@@QEAA?AV1@XZ
     * @hash   461750174
     */
    MCAPI class SerializerContext detachContext();
    /**
     * @symbol ?error@SerializerContext@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1122678260
     */
    MCAPI void error(std::string const &);
    /**
     * @symbol ??4SerializerContext@@QEAAAEAV0@$$QEAV0@@Z
     * @hash   -764958658
     */
    MCAPI class SerializerContext & operator=(class SerializerContext &&);
    /**
     * @symbol ?popContext@SerializerContext@@QEAAXXZ
     * @hash   735426527
     */
    MCAPI void popContext();
    /**
     * @symbol ?pushContext@SerializerContext@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1386193275
     */
    MCAPI class SerializerContext & pushContext(std::string const &);
    /**
     * @symbol ??1SerializerContext@@QEAA@XZ
     * @hash   1430540409
     */
    MCAPI ~SerializerContext();

};