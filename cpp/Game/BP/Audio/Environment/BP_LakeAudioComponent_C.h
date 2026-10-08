// /Game/BP/Audio/Environment/BP_LakeAudioComponent.BP_LakeAudioComponent_C
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x274, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_LakeAudioComponent_C : public USceneComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerController* PlayerController;  // 0x0208, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFMODAudioComponent* FMODAudioComponent;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InterpSpeed;  // 0x0218, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UEdgeSplineComponent* EdgeSpline;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* FMODEvent;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UCurveFloat* UpdateDistanceCurve;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESplineLoopDirection SplineDirection;  // 0x0238, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LakeLocation;  // 0x023C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UEdgeSplineComponent*> IslandSplines;  // 0x0248, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector BoundingSphereOrigin;  // 0x0258, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BoundingSphereRadius;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxUpdateRadiusSquared;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxUpdateRadiusBuffer;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxUpdateFrequency;  // 0x0270, size 0x4

    UFUNCTION(BlueprintCallable) void AudioTick();
    UFUNCTION(BlueprintCallable) void CacheMaxUpdateRadius(UEdgeSplineComponent* EdgeSpline);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_LakeAudioComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetDistanceWithinIslands(FVector PlayerLocation, float& Distance);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTimeToNextUpdate(FVector ListenerLocation, float& Time);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void Initialise(FVector Location, FWaterSetupRowHandle WaterSetup, UEdgeSplineComponent* EdgeSpline);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void InitialiseInternal(FVector Location, FWaterSetupRowHandle WaterSetup, UEdgeSplineComponent* EdgeSpline, bool& WasSuccessful);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsWithinUpdateBounds(FVector ListenerLocation, bool& Result);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void RegisterIslands(TArray<UEdgeSplineComponent*>& IslandSplines);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetAudioActive(bool Active);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartAudioTick();
    UFUNCTION(BlueprintCallable) void UpdateAudio(bool Smooth, float& TimeToNextUpdate);  // parameters 0x8
};
