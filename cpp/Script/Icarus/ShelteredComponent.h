// /Script/Icarus.ShelteredComponent
// Derives from: UTraitComponent > UActorComponent > UObject
// size 0x180, declared in Icarus/Source/Icarus/Traits/ShelteredComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UShelteredComponent : public UTraitComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisableShelterTraces;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShelterTraceTimeInterval;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShelterTraceDistancePriorityScale;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ShelterTraceStarvationPriorityScale;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentShelterValue;  // 0x00E0, size 0x4
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Debug;  // 0x00E4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DebugDrawTraces;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebugDrawModifiers;  // 0x00EC, size 0x1
    UPROPERTY(BlueprintReadOnly) float LastShelterCheckTime;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bPerformingTraces;  // 0x00F4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShelterTraceAccumulatedPriority;  // 0x00F8, size 0x4
    float ShelterTraceDistanceFactor;  // 0x00FC, not reflected
    float ShelterTraceStarvationFactor;  // 0x0100, not reflected
    TArray<FShelteredAsyncTracePayload,TSizedDefaultAllocator<32> > TracePayloads;  // 0x0108, not reflected
    UPROPERTY() TSet<UShelteredModifierComponent*> PendingShelteredModifiers;  // 0x0118, size 0x50
    UPROPERTY() TArray<FBox> PendingShelteredModifierBoxes;  // 0x0168, size 0x10
    UPROPERTY() bool bRunningAsyncBeginTrace;  // 0x0178, size 0x1
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanSkipShelterCheck(AIcarusPlayerCharacter* CraftingPlayer, bool Repairing) const;  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void DisableTraces(bool bDisable);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetCurrentExposureValue() const;  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) int32 GetShelteredTemperatureEffect(int32 CurrentExternalTemperature);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsSheltered() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void OnShelterTracesCompleted(int32 NumPrimaryTraceSuccesses, int32 NumPrimaryTraceFailures, int32 NumSecondaryTraceSuccesses, int32 NumSecondaryTraceFailures);  // parameters 0x10

    // Virtual functions that start here:
    //   OnShelterTracesCompleted_Implementation
};
