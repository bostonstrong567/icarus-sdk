// /Game/BP/Objects/World/Resources/Rocks/BP_VoxelResourceDistribution.BP_VoxelResourceDistribution_C
// Derives from: UVoxelResourceDistribution > UActorComponent > UObject
// size 0xC8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_VoxelResourceDistribution_C : public UVoxelResourceDistribution
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_VoxelResourceDistribution(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSeedInitialised(int32 Seed);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
