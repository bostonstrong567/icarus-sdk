// /Script/Foliage.ProceduralFoliageSpawner
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/Foliage/Public/ProceduralFoliageSpawner.h

UCLASS()
class UProceduralFoliageSpawner : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 RandomSeed;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TileSize;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumUniqueTiles;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinimumQuadTreeSize;  // 0x0034, size 0x4
    FThreadSafeCounter LastCancel;  // 0x0038, not reflected
private:
    UPROPERTY(EditAnywhere) TArray<FFoliageTypeObject> FoliageTypes;  // 0x0040, size 0x10
    TArray<TWeakObjectPtr<UProceduralFoliageTile,FWeakObjectPtr>,TSizedDefaultAllocator<32> > PrecomputedTiles;  // 0x0050, not reflected
    FRandomStream RandomStream;  // 0x0060, not reflected
public:
    UFUNCTION(BlueprintCallable) void Simulate(int32 NumSteps);  // parameters 0x4
};
