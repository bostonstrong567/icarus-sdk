// /Script/Icarus.VoxelResourceDistribution
// Derives from: UActorComponent > UObject
// size 0xC0, declared in Icarus/Source/Icarus/Objects/VoxelResourceDistribution.h

UCLASS(Abstract, Config=Engine)
class UVoxelResourceDistribution : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    FRandomStream RandomDistributionStream;  // 0x00B0, not reflected
    int32 CurrentSeed;  // 0x00B8, not reflected
    UPROPERTY(EditAnywhere, Config) float VoxelInitMaxTimeMS;  // 0x00BC, size 0x4
public:
    UFUNCTION(BlueprintCallable) void SetDistributionSeed(int32 Seed);  // parameters 0x4
};
