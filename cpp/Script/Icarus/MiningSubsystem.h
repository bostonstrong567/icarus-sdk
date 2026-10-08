// /Script/Icarus.MiningSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x60, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/MiningSubsystem.h

UCLASS()
class UMiningSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FVoxelHitNotifySignature OnVoxelHitNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FVoxelCompletedNotifySignature OnVoxelCompletedNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FVoxelResourceMinedNotifySignature OnVoxelResourceMinedNotify;  // 0x0050, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastVoxelCompletedDelegate(AIcarusPlayerCharacter* Player, AVoxelResource* Voxel);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastVoxelHitDelegate(AIcarusPlayerCharacter* Player, AVoxelResource* Voxel);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastVoxelResourceMinedDelegate(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
};
