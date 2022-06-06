// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FullPlayerInventoryWrapper {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FULLPLAYERINVENTORYWRAPPER
public:
    class FullPlayerInventoryWrapper& operator=(class FullPlayerInventoryWrapper const &) = delete;
    FullPlayerInventoryWrapper(class FullPlayerInventoryWrapper const &) = delete;
    FullPlayerInventoryWrapper() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FULLPLAYERINVENTORYWRAPPER
#endif
    MCAPI FullPlayerInventoryWrapper(class PlayerInventory &, class SimpleContainer &, class SimpleContainer &, class InventoryTransactionManager *, class Player *);
    MCAPI int clearAllItems();
    MCAPI int getItemCount(class std::function<bool (class ItemStack const &)>);
    MCAPI int removeResource(class ItemStack const &, class std::function<bool (class ItemStack const &)>, bool, int);

protected:

private:
    MCAPI int _clearSimpleContainerItem(class SimpleContainer &, enum ContainerID, int);
    MCAPI int _getSimpleContainerItemCount(class SimpleContainer &, int, class std::function<bool (class ItemStack const &)>);
    MCAPI int _removeCursorItem(class ItemStack const &, bool, int);
    MCAPI int _removeSimpleContainerItem(class SimpleContainer &, enum ContainerID, int, class ItemStack const &, bool, int);
    MCAPI void _sendCursorSlotPacket() const;

};