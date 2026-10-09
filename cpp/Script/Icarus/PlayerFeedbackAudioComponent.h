// /Script/Icarus.PlayerFeedbackAudioComponent
// Derives from: UActorComponent > UObject
// size 0xE8, declared in Icarus/Source/Icarus/Audio/Player/PlayerFeedbackAudioComponent.h

UCLASS(Config=Engine)
class UPlayerFeedbackAudioComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* NegativeFeedbackSound;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* StatRollSuccessFeedbackSound;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* CausedAfflictionsFeedbackSound;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* MissionUpdatedFeedbackSound;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* MissionCompletedFeedbackSound;  // 0x00D0, size 0x8
private:
    FTimerHandle MissionNotifiesTimerHandle;  // 0x00D8, not reflected
    UPlayerFeedbackAudioComponent::EMissionNotifyType PendingNotify;  // 0x00E0, not reflected
public:
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_PlayCausedAfflictions();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_PlayCriticalHit(FVector HitLocation, FCriticalHitAreasRowHandle CriticalHitArea);  // parameters 0x24
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_PlayMissionCompleted();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_PlayMissionUpdated();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_PlayNegativeFeedback();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_PlayStatRollSuccess();
    UFUNCTION() void OnMissionCompleted(AQuest* Quest, FFactionMissionsRowHandle Mission);  // parameters 0x20
    UFUNCTION() void OnMissionUpdated(AQuest* Quest);  // parameters 0x8
    UFUNCTION() void PlayCausedAfflictions(AIcarusPlayerCharacter* Player, TSet<FStatAfflictionsRowHandle> Afflictions);  // parameters 0x58
    UFUNCTION() void PlayCriticalHit(AIcarusPlayerCharacter* Player, FVector HitLocation, FCriticalHitAreasEnum CriticalHitArea);  // parameters 0x28
    UFUNCTION() void PlayNegativeFeedback(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION() void PlayStatRollSuccess(AIcarusPlayerCharacter* Player, FStatsRowHandle Stat);  // parameters 0x20
    UFUNCTION() void ProcessMissionNotifies();

    // Virtual functions that start here:
    //   Client_PlayCausedAfflictions_Implementation, Client_PlayCriticalHit_Implementation
    //   Client_PlayMissionCompleted_Implementation, Client_PlayMissionUpdated_Implementation
    //   Client_PlayNegativeFeedback_Implementation, Client_PlayStatRollSuccess_Implementation
};
