// /Game/BP/Audio/Music/BP_PlayerMusicComponent.BP_PlayerMusicComponent_C
// Derives from: UActorComponent > UObject
// size 0x14A, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerMusicComponent_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* Player;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_WeatherController_C* WeatherController;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FMusicSubsystemConfig Config;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TimeCondition_UpdateFrequency;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TimeCondition_DawnTime;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TimeCondition_DayTime;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TimeCondition_DuskTime;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TimeCondition_NightTime;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DropTimeCondition_UpdateFrequency;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DropTimeCondition_TimeRunningOutTime;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DisasterCondition_UpdateFrequency;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName FMODParam_FireIntensity;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DisasterCondition_FireIntensityThreshold;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float PlayerStateCondition_LowHealthThreshold;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CaveOverride;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle WeatherMusicUpdateTimerHandle;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMusicConditionCombatState CombatMusicState;  // 0x0110, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CombatStateCondition_UpdateFrequency;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CombatStateCondition_CombatStartThreshold;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CombatStateCondition_CombatStopThreshold;  // 0x011C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) EMusicConditionCombatState ReplicatedMusicStateOverride;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 ReplicatedThreatLevel;  // 0x0124, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FMusicQuestConditionsRowHandle ReplicatedQuestCondition;  // 0x0128, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SmoothedThreatLevel;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ThreatLevelUpdateFrequency;  // 0x0144, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayerIsOutOfBounds;  // 0x0148, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WantsQuestUpdate;  // 0x0149, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void ApplySmoothing(float Value, int32 Target, float& SmoothedValue);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_PlayerMusicComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetBestQuestCondition(FMusicQuestConditionsRowHandle& QuestCondition);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConditionFromTimeOfDay(float Time, EMusicConditionTimeOfDay& MusicCondition);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void HandleQuestUpdated(AQuest* Quest);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnEnteredCave(AActor* Cave);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnExitedCave();
    UFUNCTION(BlueprintCallable) void OnRep_ReplicatedQuestCondition();
    UFUNCTION(BlueprintCallable) void OnRep_ReplicatedThreatLevel();
    UFUNCTION(BlueprintCallable) void PlayRevivedEvent();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_ReadyForReplication();
    UFUNCTION(BlueprintCallable) void SetCombatMusicState(EMusicConditionCombatState State);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Update_Combat_Music_State();  // named "Update Combat Music State"
    UFUNCTION(BlueprintCallable) void Update_Drop_Time_Condition();  // named "Update Drop Time Condition"
    UFUNCTION(BlueprintCallable) void Update_Location_Condition();  // named "Update Location Condition"
    UFUNCTION(BlueprintCallable) void Update_Player_State_Condition(UActorState* ActorState, float NewHealth);  // parameters 0xC, named "Update Player State Condition"
    UFUNCTION(BlueprintCallable) void Update_Time_Condition();  // named "Update Time Condition"
    UFUNCTION(BlueprintCallable) void Update_Weather_Condition();  // named "Update Weather Condition"
    UFUNCTION(BlueprintCallable) void UpdateDisasterCondition();
    UFUNCTION(BlueprintCallable) void UpdateOutOfBounds(AIcarusPlayerCharacter* Player, bool OutOfBounds);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void UpdateThreatLevel();
};
