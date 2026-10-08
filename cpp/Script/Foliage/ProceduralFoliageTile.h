// /Script/Foliage.ProceduralFoliageTile
// Derives from: UObject
// size 0x158, declared in Engine/Source/Runtime/Foliage/Public/ProceduralFoliageTile.h

UCLASS()
class UProceduralFoliageTile : public UObject
{
public:
    UPROPERTY() UProceduralFoliageSpawner* FoliageSpawner;  // 0x0028, size 0x8
    UPROPERTY() TArray<FProceduralFoliageInstance> InstancesArray;  // 0x00D0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSet<FProceduralFoliageInstance *,DefaultKeyFuncs<FProceduralFoliageInstance *,0>,FDefaultSetAllocator> PendingRemovals;  // 0x0030, private
    TSet<FProceduralFoliageInstance *,DefaultKeyFuncs<FProceduralFoliageInstance *,0>,FDefaultSetAllocator> InstancesSet;  // 0x0080, private
    int32 SimulationStep;  // 0x00E0, private
    FProceduralFoliageBroadphase Broadphase;  // 0x00E8, private
    int32 RandomSeed;  // 0x0140, private
    FRandomStream RandomStream;  // 0x0144, private
    bool bSimulateOnlyInShade;  // 0x014C, private
    int32 LastCancel;  // 0x0150, private
};
