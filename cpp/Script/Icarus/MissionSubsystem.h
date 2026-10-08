// /Script/Icarus.MissionSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0x70, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/MissionSubsystem.h

UCLASS()
class UMissionSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FFactionItemRemovedNotifySignature OnFactionItemRemovedNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FFactionEnterAreaNotifySignature OnFactionEnterAreaNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FDefendLeftAreaNotifySignature OnDefendLeftAreaNotify;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FProspectMissionCompleteNotifySignature OnProspectMissionCompleteNotify;  // 0x0060, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastDefendLeftAreaDelegate(AIcarusActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastFactionEnterAreaDelegate(AIcarusPlayerCharacter* Player, AIcarusActor* Actor);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastFactionItemRemovedDelegate(AIcarusPlayerCharacter* Player, FItemData Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastProspectMissionCompleteDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
};
