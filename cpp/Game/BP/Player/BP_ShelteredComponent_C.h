// /Game/BP/Player/BP_ShelteredComponent.BP_ShelteredComponent_C
// Derives from: UShelteredComponent > UTraitComponent > UActorComponent > UObject
// size 0x209, a blueprint class, blueprint

UCLASS(EditInlineNew, Config=Engine)
class UBP_ShelteredComponent_C : public UShelteredComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0180, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PlanarZSteps;  // 0x0188, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FirstOffPlaneZResolutionDecrease;  // 0x018C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlanarTraceDistance;  // 0x0190, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SecondBurstResolutionDivisor;  // 0x0194, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SecondBurstFails;  // 0x0198, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SecondBurstSuccess;  // 0x019C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FirstBurstConsideredSuccess;  // 0x01A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SecondOffPlaneZResolutionDecrease;  // 0x01A4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<ShelteredEnum> ShelteredEnum;  // 0x01A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FailedSecondariesRequiredToFailFirstBurst;  // 0x01AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TraceStartWorldOffset;  // 0x01B0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CalculateExposure;  // 0x01BC, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float Exposure;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CalculatedShelterCache;  // 0x01C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseSecondsToLoseExposure;  // 0x01C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BaseSecondsToRecoverExposure;  // 0x01CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CachedExposureMultiplier;  // 0x01D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* ExposureResistCurve;  // 0x01D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ExposureLoopTime;  // 0x01E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* OwningPlayer;  // 0x01E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnExposureUpdated OnExposureUpdated;  // 0x01F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDateTime LastTraceResultTime;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SuppressIcarusActorWarnings;  // 0x0208, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void DisableTraces(bool bDisable);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ShelteredComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ExposureTick();
    UFUNCTION(BlueprintCallable) void ExposureTimer();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetCurrentExposureValue() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetExposureRecoveryMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetExposureResistanceMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) int32 GetShelteredTemperatureEffect(int32 CurrentExternalTemperature);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsSheltered() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsShelteredInteractable(bool& IsShelteredInteractable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LongCubeBurst(FVector Location, bool& Enclosed, TArray<ABuildingBase*>& HitActors);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnExposureUpdated__DelegateSignature(float NewExposure);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_Exposure();
    UFUNCTION(BlueprintImplementableEvent) void OnShelterTracesCompleted(int32 NumPrimaryTraceSuccesses, int32 NumPrimaryTraceFailures, int32 NumSecondaryTraceSuccesses, int32 NumSecondaryTraceFailures);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PerformShelterTrace();
    UFUNCTION(BlueprintCallable) void ProcessBurstResults(int32 NumPrimaryTraceSuccesses, int32 NumPrimaryTraceFailures, int32 NumSecondaryTraceSuccesses, int32 NumSecondaryTraceFailures);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
