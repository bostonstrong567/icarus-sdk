// /Script/Icarus.CharacterState
// Derives from: UActorState > UActorComponent > UObject
// size 0x320, declared in Icarus/Source/Icarus/Characters/CharacterState.h

UCLASS(Config=Engine)
class UCharacterState : public UActorState
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FOnStaminaUpdatedSignature OnStaminaUpdated;  // 0x0270, size 0x1
    UPROPERTY(BlueprintAssignable) FOnStaminaDepletedSignature OnStaminaDepleted;  // 0x0271, size 0x1
    UPROPERTY(BlueprintAssignable) FStaminaDepletedDuringActionSignature OnStaminaDepletedDuringAction;  // 0x0272, size 0x1
    UPROPERTY(BlueprintAssignable) FExperienceModified OnExperienceEvent;  // 0x0273, size 0x1
    UPROPERTY(BlueprintAssignable) FExperienceUpdated OnExperienceUpdated;  // 0x0274, size 0x1
    UPROPERTY(BlueprintAssignable) FLevelUpdated OnLevelUpdated;  // 0x0275, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 Stamina;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 MaxStamina;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 TotalExperience;  // 0x0280, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FCharacterGrowthRowHandle GrowthRowHandle;  // 0x0284, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) int32 Level;  // 0x029C, size 0x4
private:
    UPROPERTY() TMap<int32, FStaminaActionCostsRowHandle> StaminaTickEvents;  // 0x02A0, size 0x50
    float TickStaminaDelta;  // 0x02F0, not reflected
    FTimerHandle TickStaminaTimer;  // 0x02F8, not reflected
    float StaminaRegenTime;  // 0x0300, not reflected
    float StaminaRegenCycle;  // 0x0304, not reflected
    int32 StaminaAddedPerCycle;  // 0x0308, not reflected
    float StaminaTimeLastDecremented;  // 0x030C, not reflected
    UPROPERTY() bool bHasStaminaRegen;  // 0x0310, size 0x1
    float BiomeUpdateCycle;  // 0x0314, not reflected
    float BiomeUpdateTime;  // 0x0318, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddExperience(int32 Amount);  // parameters 0x4
    UFUNCTION() bool AddExperienceEvent(const FExperienceEventsRowHandle& ExperienceEvent, int32 GrantedExperience);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) void AddStamina(int32 Amount);  // parameters 0x4
    UFUNCTION() void BiomeTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanPerformStaminaAction(const FStaminaCost& ActionCost) const;  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanPerformStaminaActionRow(const FStaminaActionCostsRowHandle& StaminaAction) const;  // parameters 0x19
    UFUNCTION() bool CanRegenerateStamina() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CancelStaminaAction(int32 UID);  // parameters 0x4
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientAddedExperienceEvent(FExperienceEventsRowHandle ExperienceEvent, int32 ExperienceGained);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetExperience() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetExperienceMultiplier() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetExperienceRequired(int32 Level) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetLevel() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxStamina() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetStamina() const;  // parameters 0x4
    UFUNCTION() void OnRep_Level();
    UFUNCTION() void OnRep_Stamina();
    UFUNCTION() void OnRep_TotalExperience();
    UFUNCTION() void RecalculateCurrentStamina();
    UFUNCTION() void RecalculateStaminaRegenRate();
    UFUNCTION(BlueprintCallable) void SetExperience(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetStamina(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool SetupAI(int32 Level, int32 New_Health, int32 New_Stamina, int32 New_Strength, int32 New_Agility, int32 New_Perception);  // parameters 0x19
    UFUNCTION(BlueprintCallable) int32 StartStaminaAction(FStaminaActionCostsRowHandle Action, bool SkipTickCost);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void StopStaminaAction(FStaminaActionCostsRowHandle Action, int32 UID);  // parameters 0x1C
    UFUNCTION() void TickStaminaEvents();

    // Virtual functions that start here:
    //   AddStamina, GetExperienceMultiplier, SetExperience
};
