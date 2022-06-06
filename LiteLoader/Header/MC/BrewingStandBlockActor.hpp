// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BrewingStandBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREWINGSTANDBLOCKACTOR
public:
    class BrewingStandBlockActor& operator=(class BrewingStandBlockActor const &) = delete;
    BrewingStandBlockActor(class BrewingStandBlockActor const &) = delete;
    BrewingStandBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BREWINGSTANDBLOCKACTOR
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    MCVAPI class Container const * getContainer() const;
    MCVAPI class Container * getContainer();
    MCVAPI int getContainerSize() const;
    MCVAPI class ItemStack const & getItem(int) const;
    MCVAPI int getMaxStackSize() const;
    MCVAPI std::string getName() const;
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    MCVAPI void onChanged(class BlockSource &);
    MCVAPI void onMove();
    MCVAPI bool save(class CompoundTag &) const;
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    MCVAPI void setContainerChanged(int);
    MCVAPI void setItem(int, class ItemStack const &);
    MCVAPI void startOpen(class Player &);
    MCVAPI void stopOpen(class Player &);
    MCVAPI void tick(class BlockSource &);
#endif
    MCAPI BrewingStandBlockActor(class BlockPos const &);
    MCAPI void brew();
    MCAPI int getBrewTime() const;
    MCAPI int getFuelAmount() const;
    MCAPI int getFuelTotal() const;
    MCAPI void setBrewTime(int);
    MCAPI void setFuelAmount(int);
    MCAPI void setFuelTotal(int);
    MCAPI static bool isFuel(class ItemDescriptor const &);

protected:

private:
    MCAPI bool canBrew();

};