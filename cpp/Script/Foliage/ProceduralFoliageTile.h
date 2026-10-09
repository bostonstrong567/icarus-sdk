// /Script/Foliage.ProceduralFoliageTile
// Derives from: UObject
// size 0x158, declared in Engine/Source/Runtime/Foliage/Public/ProceduralFoliageTile.h

UCLASS()
class UProceduralFoliageTile : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UProceduralFoliageSpawner* FoliageSpawner;  // 0x0028, size 0x8
    TSet<FProceduralFoliageInstance *,DefaultKeyFuncs<FProceduralFoliageInstance *,0>,FDefaultSetAllocator> PendingRemovals;  // 0x0030, not reflected
    TSet<FProceduralFoliageInstance *,DefaultKeyFuncs<FProceduralFoliageInstance *,0>,FDefaultSetAllocator> InstancesSet;  // 0x0080, not reflected
    UPROPERTY() TArray<FProceduralFoliageInstance> InstancesArray;  // 0x00D0, size 0x10
    int32 SimulationStep;  // 0x00E0, not reflected
    FProceduralFoliageBroadphase Broadphase;  // 0x00E8, not reflected
    int32 RandomSeed;  // 0x0140, not reflected
    FRandomStream RandomStream;  // 0x0144, not reflected
    bool bSimulateOnlyInShade;  // 0x014C, not reflected
    int32 LastCancel;  // 0x0150, not reflected
};
