/**
 * @file  InventoryTransaction.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "InventoryTransactionItemGroup.hpp"
#include "InventoryAction.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class InventoryTransaction.
 *
 */
class InventoryTransaction {

#define AFTER_EXTRA
// Add Member There
public:
    std::unordered_map<class InventorySource, std::vector<class InventoryAction>> actions; // 0x0
    std::vector<class InventoryTransactionItemGroup> items;                                // 0x40

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVENTORYTRANSACTION
public:
    class InventoryTransaction& operator=(class InventoryTransaction const &) = delete;
    InventoryTransaction() = delete;
#endif

public:
    /**
     * @symbol ??0InventoryTransaction@@QEAA@AEBV0@@Z
     * @hash   -1453322623
     */
    MCAPI InventoryTransaction(class InventoryTransaction const &);
    /**
     * @symbol ?_logTransaction@InventoryTransaction@@QEBAX_N@Z
     * @hash   -764185204
     */
    MCAPI void _logTransaction(bool) const;
    /**
     * @symbol ?addAction@InventoryTransaction@@QEAAXAEBVInventoryAction@@@Z
     * @hash   -1145257218
     */
    MCAPI void addAction(class InventoryAction const &);
    /**
     * @symbol ?executeFull@InventoryTransaction@@QEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
     * @hash   197758036
     */
    MCAPI enum InventoryTransactionError executeFull(class Player &, bool) const;
    /**
     * @symbol ?forceBalanceTransaction@InventoryTransaction@@QEAAXXZ
     * @hash   1704957763
     */
    MCAPI void forceBalanceTransaction();
    /**
     * @symbol ?getActions@InventoryTransaction@@QEBAAEBV?$vector@VInventoryAction@@V?$allocator@VInventoryAction@@@std@@@std@@AEBVInventorySource@@@Z
     * @hash   -962121451
     */
    MCAPI std::vector<class InventoryAction> const & getActions(class InventorySource const &) const;
    /**
     * @symbol ?getVerifyFunction@InventoryTransaction@@QEBA?AV?$function@$$A6A?AW4InventoryTransactionError@@AEAVPlayer@@AEBVInventoryAction@@_N@Z@std@@AEBVInventorySource@@@Z
     * @hash   -124287544
     */
    MCAPI class std::function<enum InventoryTransactionError (class Player &, class InventoryAction const &, bool)> getVerifyFunction(class InventorySource const &) const;
    /**
     * @symbol ?postLoadItems@InventoryTransaction@@QEAAXAEAVBlockPalette@@_N@Z
     * @hash   510248571
     */
    MCAPI void postLoadItems(class BlockPalette &, bool);
    /**
     * @symbol ?serialize@InventoryTransaction@@QEBAXAEAVBinaryStream@@_N@Z
     * @hash   1412274521
     */
    MCAPI void serialize(class BinaryStream &, bool) const;
    /**
     * @symbol ?verifyBalance@InventoryTransaction@@QEBA_NXZ
     * @hash   387907058
     */
    MCAPI bool verifyBalance() const;
    /**
     * @symbol ?verifyFull@InventoryTransaction@@QEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z
     * @hash   1898689846
     */
    MCAPI enum InventoryTransactionError verifyFull(class Player &, bool) const;
    /**
     * @symbol ??1InventoryTransaction@@QEAA@XZ
     * @hash   -1435214340
     */
    MCAPI ~InventoryTransaction();
    /**
     * @symbol ?deserialize@InventoryTransaction@@SA?AV1@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1034953198
     */
    MCAPI static class InventoryTransaction deserialize(class ReadOnlyBinaryStream &);
    /**
     * @symbol ?getInventoryTransactionErrorName@InventoryTransaction@@SA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4InventoryTransactionError@@@Z
     * @hash   -1064515265
     */
    MCAPI static std::string const getInventoryTransactionErrorName(enum InventoryTransactionError);

//private:
    /**
     * @symbol ?_dropCreatedItems@InventoryTransaction@@AEBAXAEAVPlayer@@@Z
     * @hash   1410789578
     */
    MCAPI void _dropCreatedItems(class Player &) const;
    /**
     * @symbol ?addItemToContent@InventoryTransaction@@AEAAXAEBVItemStack@@H@Z
     * @hash   1482341455
     */
    MCAPI void addItemToContent(class ItemStack const &, int);

private:
MCAPI static class BidirectionalUnorderedMap<enum InventoryTransactionError, std::string> const inventoryTransactionErrorMap;

};