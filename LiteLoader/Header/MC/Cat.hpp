// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Cat : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAT
public:
    class Cat& operator=(class Cat const &) = delete;
    Cat(class Cat const &) = delete;
    Cat() = delete;
#endif

public:
    /*14*/ virtual ~Cat();
    /*40*/ virtual void __unk_vfn_40();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*120*/ virtual void onTame();
    /*133*/ virtual enum LevelSoundEvent getAmbientSound() const;
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*259*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*261*/ virtual void __unk_vfn_261();
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*294*/ virtual void aiStep();
    /*307*/ virtual void __unk_vfn_307();
    /*311*/ virtual void __unk_vfn_311();
    /*345*/ virtual void __unk_vfn_345();
    /*355*/ virtual void _serverAiMobStep();
    /*359*/ virtual void __unk_vfn_359();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAT
#endif
    MCAPI Cat(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI static float const SNEAK_SPEED_MOD;
    MCAPI static float const SPRINT_SPEED_MOD;

protected:

private:
    MCAPI float getLieOnPlayer();

};