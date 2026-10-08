// /Script/Icarus.FlammableInstance
// Derives from: UObject
// size 0x2C0, declared in Icarus/Source/Icarus/Systems/Disaster/FlammableInstance.h

UCLASS()
class UFlammableInstance : public UObject, public IMultiPointAudioNodeInterface
{
public:
    UPROPERTY() TMap<int32, UFlammableInstance*> QueuedAsyncPayloadInstances;  // 0x00A8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bForceNextTickTemperatureUpdate;  // 0x00F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebugInstance;  // 0x00F9, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UFlammableComponent* FlammableComponent;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFlammableTargetIgnite IgnitionTarget;  // 0x0110, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CurrentInstanceTime;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LastInstanceTime;  // 0x0144, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CurrentTemperature;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LastTemperatureUpdate;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CombustionFuelMass;  // 0x0150, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CurrentHeatRate;  // 0x0154, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBiomesRowHandle CurrentBiome;  // 0x0158, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float EnvironmentTemperature;  // 0x0170, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ExtinguishStartTime;  // 0x0174, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ExtinguishRampTimeAmount;  // 0x0178, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ExtinguishTimeAmount;  // 0x017C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFlammableState* CurrentFlammableState;  // 0x0180, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bHasInitialized;  // 0x0188, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bHasStaticMovement;  // 0x0189, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bHeatRateAffectedByTouching;  // 0x018A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<EFlammableState, UFlammableState*> FlammableStates;  // 0x0190, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBoxSphereBounds CachedWorldBounds;  // 0x01E0, size 0x1C
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBoxSphereBounds CachedLocalBounds;  // 0x01FC, size 0x1C
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTransform CachedWorldTransform;  // 0x0220, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TMap<UFlammableInstance*, FBox> CachedInstanceTouchingBoxes;  // 0x0250, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    UFlammableInstance::FCacheIntersectingBoxesAsyncPayload QueuedAsyncPayload;  // 0x0030, private
    FOctreeElementId2 OctreeElementId;  // 0x00FC
    FFlammableAudioData AudioData;  // 0x02A0, private
    FVector AudioLocation;  // 0x02A8, private

    UFUNCTION(BlueprintCallable) void DebugVisualStats(float DeltaSeconds) const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Extinguish(float InExtinguishRampTimeAmount, float InExtinguishTimeAmount, bool bStopCombustionImmediately);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UFlammableState*> GetAllFlammableStates() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCombustionMaximumTemperature() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCombustionTemperature() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetCurrentFlammableStateElapsedTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UFireControllerComponent* GetFireController() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FBoxSphereBounds GetFlammableLocalBounds() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FBoxSphereBounds GetFlammablePropagationBounds() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) UFlammableState* GetFlammableState(EFlammableState FlammableState) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FBoxSphereBounds GetFlammableWorldBounds() const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetFlammableWorldTransform() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCurrentState(EFlammableState FlammableState) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsExtinguished() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsValidFlammable() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFlammableState(EFlammableState FlammableState, bool bAllowClient);  // parameters 0x2

    // Virtual functions that start here:
    //   AttachFlammable, DetachFlammable, FetchFlammableLocalBounds, FetchFlammableWorldTransform
    //   GetFlammableWorldTransform, IsValidFlammable, Update, UpdateTargetState
};
