// /Script/Icarus.TalentsSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x60, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/TalentsSubsystem.h

UCLASS()
class UTalentsSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FBlueprintTalentsUpdatedNotifySignature OnBlueprintTalentsUpdatedNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerTalentsUpdatedNotifySignature OnPlayerTalentsUpdatedNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FProspectTalentsUpdatedNotifySignature OnProspectTalentsUpdatedNotify;  // 0x0050, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastBlueprintTalentsUpdatedDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerTalentsUpdatedDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastProspectTalentsUpdatedDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
};
