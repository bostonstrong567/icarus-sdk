// /Script/Icarus.FarmingSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x60, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/FarmingSubsystem.h

UCLASS()
class UFarmingSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FItemHarvestedNotifySignature OnItemHarvestedNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FSeedPlantedNotifySignature OnSeedPlantedNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FCropMaturedNotifySignature OnCropMaturedNotify;  // 0x0050, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastCropMaturedDelegate(FFarmingSeedsRowHandle Seed);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastItemHarvestedDelegate(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastSeedPlantedDelegate(AIcarusPlayerCharacter* Player, FFarmingSeedsRowHandle Seed);  // parameters 0x20
};
