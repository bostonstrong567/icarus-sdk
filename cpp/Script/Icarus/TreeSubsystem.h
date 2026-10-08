// /Script/Icarus.TreeSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x50, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/TreeSubsystem.h

UCLASS()
class UTreeSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FTreeFelledNotifySignature OnTreeFelledNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FTreeResourceCollectedNotifySignature OnTreeResourceCollectedNotify;  // 0x0040, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastTreeFelledDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastTreeResourceCollectedDelegate(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
};
