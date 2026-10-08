// /Script/Icarus.ExtractionSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x40, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/ExtractionSubsystem.h

UCLASS()
class UExtractionSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FItemExtractedNotifySignature OnItemExtractedNotify;  // 0x0030, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastItemExtractedDelegate(AActor* Device, FItemData Item);  // parameters 0x1F8
};
