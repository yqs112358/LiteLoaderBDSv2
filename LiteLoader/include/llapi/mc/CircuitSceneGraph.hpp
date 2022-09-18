/**
 * @file  CircuitSceneGraph.hpp
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
 * @brief MC class CircuitSceneGraph.
 *
 */
class CircuitSceneGraph {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITSCENEGRAPH
public:
    class CircuitSceneGraph& operator=(class CircuitSceneGraph const &) = delete;
    CircuitSceneGraph(class CircuitSceneGraph const &) = delete;
#endif

public:
    /**
     * @symbol ??0CircuitSceneGraph@@QEAA@XZ
     * @hash   1844373559
     */
    MCAPI CircuitSceneGraph();
    /**
     * @symbol ?add@CircuitSceneGraph@@QEAAXAEBVBlockPos@@V?$unique_ptr@VBaseCircuitComponent@@U?$default_delete@VBaseCircuitComponent@@@std@@@std@@@Z
     * @hash   1918793653
     */
    MCAPI void add(class BlockPos const &, std::unique_ptr<class BaseCircuitComponent>);
    /**
     * @symbol ?getBaseComponent@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@@Z
     * @hash   1763131640
     */
    MCAPI class BaseCircuitComponent * getBaseComponent(class BlockPos const &);
    /**
     * @symbol ?getComponent@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@W4CircuitComponentType@@@Z
     * @hash   936110435
     */
    MCAPI class BaseCircuitComponent * getComponent(class BlockPos const &, enum class CircuitComponentType);
    /**
     * @symbol ?getFromPendingAdd@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@@Z
     * @hash   -691948722
     */
    MCAPI class BaseCircuitComponent * getFromPendingAdd(class BlockPos const &);
    /**
     * @symbol ?getFromPendingAdd@CircuitSceneGraph@@QEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@W4CircuitComponentType@@@Z
     * @hash   1505213873
     */
    MCAPI class BaseCircuitComponent * getFromPendingAdd(class BlockPos const &, enum class CircuitComponentType);
    /**
     * @symbol ?invalidatePos@CircuitSceneGraph@@QEAAXAEBVBlockPos@@@Z
     * @hash   -1545245118
     */
    MCAPI void invalidatePos(class BlockPos const &);
    /**
     * @symbol ?preSetupPoweredBlocks@CircuitSceneGraph@@QEAAXAEBVChunkPos@@@Z
     * @hash   363946050
     */
    MCAPI void preSetupPoweredBlocks(class ChunkPos const &);
    /**
     * @symbol ?remove@CircuitSceneGraph@@QEAAXAEBVBlockPos@@PEAVBaseCircuitComponent@@@Z
     * @hash   -998880778
     */
    MCAPI void remove(class BlockPos const &, class BaseCircuitComponent *);
    /**
     * @symbol ?update@CircuitSceneGraph@@QEAAXPEAVBlockSource@@@Z
     * @hash   239773201
     */
    MCAPI void update(class BlockSource *);
    /**
     * @symbol ??1CircuitSceneGraph@@QEAA@XZ
     * @hash   -57452713
     */
    MCAPI ~CircuitSceneGraph();

//private:
    /**
     * @symbol ?findRelationships@CircuitSceneGraph@@AEAAXAEBVBlockPos@@PEAVBaseCircuitComponent@@PEAVBlockSource@@@Z
     * @hash   -1964912356
     */
    MCAPI void findRelationships(class BlockPos const &, class BaseCircuitComponent *, class BlockSource *);
    /**
     * @symbol ?processPendingAdds@CircuitSceneGraph@@AEAAXXZ
     * @hash   -2044791157
     */
    MCAPI void processPendingAdds();
    /**
     * @symbol ?removeComponent@CircuitSceneGraph@@AEAAXAEBVBlockPos@@@Z
     * @hash   -1863396040
     */
    MCAPI void removeComponent(class BlockPos const &);
    /**
     * @symbol ?removeStaleRelationships@CircuitSceneGraph@@AEAAXXZ
     * @hash   -944713721
     */
    MCAPI void removeStaleRelationships();
    /**
     * @symbol ?scheduleRelationshipUpdate@CircuitSceneGraph@@AEAAXAEBVBlockPos@@PEAVBaseCircuitComponent@@@Z
     * @hash   703618618
     */
    MCAPI void scheduleRelationshipUpdate(class BlockPos const &, class BaseCircuitComponent *);

private:

};