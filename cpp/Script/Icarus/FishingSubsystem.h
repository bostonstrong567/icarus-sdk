// /Script/Icarus.FishingSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/FishingSubsystem.h

UCLASS()
class UFishingSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FCaughtFishNotifySignature OnCaughtFishNotify;  // 0x0030, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastCaughtFishDelegate(AActor* Fisher, FItemData Fish);  // parameters 0x1F8
};
