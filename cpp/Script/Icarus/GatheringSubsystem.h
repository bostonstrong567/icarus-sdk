// /Script/Icarus.GatheringSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/GatheringSubsystem.h

UCLASS()
class UGatheringSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FFoliageResourceCollectedNotifySignature OnFoliageResourceCollectedNotify;  // 0x0030, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastFoliageResourceCollectedDelegate(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
};
