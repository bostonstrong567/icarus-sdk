// /Script/Icarus.IcarusTamingComponent
// Derives from: UActorComponent > UObject
// size 0x108, declared in Icarus/Source/Icarus/AI/Mounts/IcarusTamingComponent.h

UCLASS(Config=Engine)
class UIcarusTamingComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) ETamedState TamedState;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) float TamingProgress;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FTamesRowHandle TamesRow;  // 0x00B8, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) AActor* CurrentLeader;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) FPlayerCharacterID LastPlayerLeaderID;  // 0x00D8, size 0x18
protected:
    UPROPERTY() AIcarusNPCCharacter* OwnerNPC;  // 0x00F0, size 0x8
private:
    bool bConvertedStatsRequireUpdate;  // 0x00F8, not reflected
    FTimerHandle SetPlayerLeaderTimerHandle;  // 0x0100, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool CanTameCreature() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesMeetModifierRequirement() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesMeetNutritionRequirement() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesMeetShelterRequirement() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesMeetTemperatureRequirement(ETamingTemperatureState& TemperatureState) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPerSecondTamingProgressIncrease() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRemainingTamingTimeInSeconds() const;  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) void InitialiseTamingComponent(FTamesRowHandle TamesRowHandle, bool bShouldFollow);  // parameters 0x19
    UFUNCTION() void MarkConvertedStatsRequireUpdate();
    UFUNCTION() void OnRep_TamedState();
    UFUNCTION(BlueprintNativeEvent) void OnTamedStateUpdated(ETamedState NewState);  // parameters 0x1
    UFUNCTION() void PerformPlayerOwnerStatConversion();
    UFUNCTION(BlueprintCallable) void SetPlayerLeaderID(FPlayerCharacterID LeaderID);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetTamedState(ETamedState NewState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTamingProgress(float NewProgress);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateCreatureRelationship();
    UFUNCTION(BlueprintCallable) void UpdateReplicatedVariables();
    UFUNCTION() void UpdateTamingModifiers();
    UFUNCTION() void UpdateTamingProgress(float DeltaTime);  // parameters 0x4

    // Virtual functions that start here:
    //   CanTameCreature_Implementation, InitialiseTamingComponent_Implementation
    //   OnTamedStateUpdated_Implementation
};
