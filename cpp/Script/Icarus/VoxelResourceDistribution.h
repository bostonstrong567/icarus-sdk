// /Script/Icarus.VoxelResourceDistribution
// Derives from: UActorComponent > UObject
// size 0xC0, declared in Icarus/Source/Icarus/Objects/VoxelResourceDistribution.h

UCLASS(Abstract, Config=Engine)
class UVoxelResourceDistribution : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, Config) float VoxelInitMaxTimeMS;  // 0x00BC, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FRandomStream RandomDistributionStream;  // 0x00B0, protected
    int32 CurrentSeed;  // 0x00B8, protected

    UFUNCTION(BlueprintCallable) void SetDistributionSeed(int32 Seed);  // parameters 0x4
};
