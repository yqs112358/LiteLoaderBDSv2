/**
 * @file  Facing.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Direction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
namespace glm {
template <int a1, int a2, typename a3, int a4>
struct mat;
}

#undef BEFORE_EXTRA

/**
 * @brief MC class Facing.
 *
 */
class Facing {

#define AFTER_EXTRA
// Add Member There
public:
enum Rotation : unsigned int;
enum Name : unsigned char;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FACING
public:
    class Facing& operator=(class Facing const &) = delete;
    Facing(class Facing const &) = delete;
    Facing() = delete;
#endif

public:
MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT;
MCAPI static class std::array<std::vector<unsigned char>, 6> const ALL_EXCEPT_AXIS_Y;
MCAPI static std::vector<unsigned char> const ALL_FACES;
MCAPI static enum Facing::Name const BY2DDATA[];
MCAPI static enum Facing::Name const DIRECTIONS[];
MCAPI static class BlockPos const DIRECTION[];
MCAPI static unsigned char const FACINGMASK[];
MCAPI static unsigned char const FACINGMASK_INV[];
MCAPI static class Vec3 const NORMAL[];
MCAPI static unsigned char const OPPOSITE_FACING[];
MCAPI static int const STEP_X[];
MCAPI static int const STEP_Y[];
MCAPI static int const STEP_Z[];
    /**
     * @symbol ?convertDirectionToFacingDirection@Facing@@SAEW4Type@Direction@@@Z
     * @hash   -400436572
     */
    MCAPI static unsigned char convertDirectionToFacingDirection(enum Direction::Type);
    /**
     * @symbol ?convertWeirdoDirectionToFacingDirection@Facing@@SAEW4WeirdoDirection@@@Z
     * @hash   2056158622
     */
    MCAPI static unsigned char convertWeirdoDirectionToFacingDirection(enum WeirdoDirection);
    /**
     * @symbol ?convertYRotationToFacingDirection@Facing@@SAEM@Z
     * @hash   -1737458650
     */
    MCAPI static unsigned char convertYRotationToFacingDirection(float);
    /**
     * @symbol ?from2DDataValue@Facing@@SA?AW4Name@1@H@Z
     * @hash   -575601250
     */
    MCAPI static enum Facing::Name from2DDataValue(int);
    /**
     * @symbol ?fromVec3@Facing@@SAEAEBVVec3@@@Z
     * @hash   -686835096
     */
    MCAPI static unsigned char fromVec3(class Vec3 const &);
    /**
     * @symbol ?getClockWise@Facing@@SAEE@Z
     * @hash   -1200629193
     */
    MCAPI static unsigned char getClockWise(unsigned char);
    /**
     * @symbol ?getClosestRotation@Facing@@SA?AW4Rotation@1@M@Z
     * @hash   409289850
     */
    MCAPI static enum Facing::Rotation getClosestRotation(float);
    /**
     * @symbol ?getCounterClockWise@Facing@@SAEE@Z
     * @hash   -570130375
     */
    MCAPI static unsigned char getCounterClockWise(unsigned char);
    /**
     * @symbol ?getFaceLocation@Facing@@SA?AVVec3@@EMM@Z
     * @hash   330009728
     */
    MCAPI static class Vec3 getFaceLocation(unsigned char, float, float);
    /**
     * @symbol ?getFaceLocationXY@Facing@@SA?AVVec2@@EAEBVVec3@@@Z
     * @hash   -2096539229
     */
    MCAPI static class Vec2 getFaceLocationXY(unsigned char, class Vec3 const &);
    /**
     * @symbol ?getFacingDirection@Facing@@SAEAEBVVec3@@0@Z
     * @hash   354516542
     */
    MCAPI static unsigned char getFacingDirection(class Vec3 const &, class Vec3 const &);
    /**
     * @symbol ?getOpposite@Facing@@SAEE@Z
     * @hash   -2027607159
     */
    MCAPI static unsigned char getOpposite(unsigned char);
    /**
     * @symbol ?getRandomFace@Facing@@SAHAEAVRandom@@@Z
     * @hash   -1448731967
     */
    MCAPI static int getRandomFace(class Random &);
    /**
     * @symbol ?getRandomFaceHorizontal@Facing@@SAHAEAVRandom@@@Z
     * @hash   -1997333879
     */
    MCAPI static int getRandomFaceHorizontal(class Random &);
    /**
     * @symbol ?getRotationMatrix@Facing@@SA?AU?$mat@$02$02M$0A@@glm@@EW4Rotation@1@@Z
     * @hash   -766060055
     */
    MCAPI static struct glm::mat<3, 3, float, 0> getRotationMatrix(unsigned char, enum Facing::Rotation);
    /**
     * @symbol ?getShuffledDirections@Facing@@SA?AV?$vector@EV?$allocator@E@std@@@std@@AEAVRandom@@@Z
     * @hash   -1973145249
     */
    MCAPI static std::vector<unsigned char> getShuffledDirections(class Random &);
    /**
     * @symbol ?getShuffledDirections@Facing@@SA?AV?$vector@EV?$allocator@E@std@@@std@@XZ
     * @hash   -1957178238
     */
    MCAPI static std::vector<unsigned char> getShuffledDirections();
    /**
     * @symbol ?getStepX@Facing@@SAHE@Z
     * @hash   -378987624
     */
    MCAPI static int getStepX(unsigned char);
    /**
     * @symbol ?getStepY@Facing@@SAHE@Z
     * @hash   1002981976
     */
    MCAPI static int getStepY(unsigned char);
    /**
     * @symbol ?getStepZ@Facing@@SAHE@Z
     * @hash   -1910015720
     */
    MCAPI static int getStepZ(unsigned char);
    /**
     * @symbol ?isValidDirection@Facing@@SA_NH@Z
     * @hash   83687649
     */
    MCAPI static bool isValidDirection(int);
    /**
     * @symbol ?rotateFace@Facing@@SAEEW4Rotation@1@@Z
     * @hash   644863705
     */
    MCAPI static unsigned char rotateFace(unsigned char, enum Facing::Rotation);
    /**
     * @symbol ?rotateFaceAroundGivenFace@Facing@@SAEEEW4Rotation@1@@Z
     * @hash   -1239165631
     */
    MCAPI static unsigned char rotateFaceAroundGivenFace(unsigned char, unsigned char, enum Facing::Rotation);
    /**
     * @symbol ?toString@Facing@@SA?AV?$basic_string_span@$$CBD$0?0@gsl@@E@Z
     * @hash   1918900542
     */
    MCAPI static class gsl::basic_string_span<char const, -1> toString(unsigned char);

};