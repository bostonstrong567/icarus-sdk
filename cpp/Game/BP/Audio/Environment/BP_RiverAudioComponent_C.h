// /Game/BP/Audio/Environment/BP_RiverAudioComponent.BP_RiverAudioComponent_C
// Derives from: URiverAudioComponent > USceneComponent > UActorComponent > UObject
// size 0x2A9, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_RiverAudioComponent_C : public URiverAudioComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioComponent;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_InteractableRiver_C* River;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InterpSpeed;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InfrequentCheckDistanceThreshold;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InfrequentCheckFrequency;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FrequentCheckDistanceThreshold;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FrequentCheckFrequency;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ActivelyUpdatingCheckFrequency;  // 0x024C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float EstimatedVisibleProportion;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LeftSplineStart;  // 0x0254, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LeftSplineEnd;  // 0x0260, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RightSplineStart;  // 0x026C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RightSplineEnd;  // 0x0278, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SplineEndDistanceThreshold;  // 0x0284, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* FMODEvent;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PlayerInRiver;  // 0x0290, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector2D ProximityInfluenceRange;  // 0x0294, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContextComponent;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UsingLavaFlowPoints;  // 0x02A8, size 0x1

    UFUNCTION(BlueprintCallable) void CacheSplineLocations();
    UFUNCTION() void ExecuteUbergraph_BP_RiverAudioComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FVector2D GetDistanceRange();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetUpdateTime(float& Time);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitAudioContext();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RiverAudioTick();
    UFUNCTION(BlueprintCallable) void SetAudioActive(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetState(float DistToListener);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateAudio();
    UFUNCTION(BlueprintImplementableEvent) void UpdateDensity(float Density);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateLocation(float& DistToListener);  // parameters 0x4
};
