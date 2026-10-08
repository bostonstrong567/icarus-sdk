// /Script/Icarus.PlayerFeedbackSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xA0, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/PlayerFeedbackSubsystem.h

UCLASS()
class UPlayerFeedbackSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FStatChanceRollSuccessNotifySignature OnStatChanceRollSuccessNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerActionFailedNotifySignature OnPlayerActionFailedNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerPerformedCriticalHitNotifySignature OnPlayerPerformedCriticalHitNotify;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerPerformedStealthAttackNotifySignature OnPlayerPerformedStealthAttackNotify;  // 0x0060, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerAttackCausedAfflictionsNotifySignature OnPlayerAttackCausedAfflictionsNotify;  // 0x0070, size 0x10
    UPROPERTY(BlueprintAssignable) FPlayerSawMeteorsNotifySignature OnPlayerSawMeteorsNotify;  // 0x0080, size 0x10
    UPROPERTY(BlueprintAssignable) FNightSkippedNotifySignature OnNightSkippedNotify;  // 0x0090, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastNightSkippedDelegate(AIcarusPlayerCharacter* Player, int32 ComfortLevel);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerActionFailedDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerAttackCausedAfflictionsDelegate(AIcarusPlayerCharacter* Player, TSet<FStatAfflictionsRowHandle> Afflictions);  // parameters 0x58
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerPerformedCriticalHitDelegate(AIcarusPlayerCharacter* Player, FVector HitLocation, FCriticalHitAreasEnum CriticalHitArea);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerPerformedStealthAttackDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastPlayerSawMeteorsDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastStatChanceRollSuccessDelegate(AIcarusPlayerCharacter* Player, FStatsRowHandle Stat);  // parameters 0x20
};
