// /Script/Niagara.NiagaraComponent
// Derives from: UFXSystemComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x600, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UNiagaraComponent : public UFXSystemComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAutoManageAttachment : 1;  // 0x0558, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAutoAttachWeldSimulatedBodies : 1;  // 0x0558, mask 0x08
    UPROPERTY() float MaxTimeBeforeForceUpdateTransform;  // 0x055C, size 0x4
    UPROPERTY(Transient) TArray<FNiagaraMaterialOverride> EmitterMaterials;  // 0x0560, size 0x10
    ENCPoolMethod PoolingMethod;  // 0x0570, not reflected
    UPROPERTY(BlueprintAssignable) FOnNiagaraSystemFinished OnSystemFinished;  // 0x0578, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) TWeakObjectPtr<USceneComponent> AutoAttachParent;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AutoAttachSocketName;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AutoAttachLocationRule;  // 0x0598, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AutoAttachRotationRule;  // 0x0599, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AutoAttachScaleRule;  // 0x059A, size 0x1
private:
    UPROPERTY(EditAnywhere) UNiagaraSystem* Asset;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere) ENiagaraTickBehavior TickBehavior;  // 0x0458, size 0x1
    UPROPERTY(EditAnywhere) int32 RandomSeedOffset;  // 0x045C, size 0x4
    UPROPERTY() FNiagaraUserRedirectionParameterStore OverrideParameters;  // 0x0460, size 0xC8
    UPROPERTY(EditAnywhere) uint8 bForceSolo : 1;  // 0x0528, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bEnableGpuComputeDebug : 1;  // 0x0528, mask 0x02
    TUniquePtr<FNiagaraSystemInstance,TDefaultDelete<FNiagaraSystemInstance> > SystemInstance;  // 0x0530, not reflected
    ENiagaraAgeUpdateMode AgeUpdateMode;  // 0x0538, not reflected
    float DesiredAge;  // 0x053C, not reflected
    float LastHandledDesiredAge;  // 0x0540, not reflected
    bool bCanRenderWhileSeeking;  // 0x0544, not reflected
    float SeekDelta;  // 0x0548, not reflected
    bool bLockDesiredAgeDeltaTimeToSeekDelta;  // 0x054C, not reflected
    float MaxSimTime;  // 0x0550, not reflected
    bool bIsSeeking;  // 0x0554, not reflected
    UPROPERTY() uint8 bAutoDestroy : 1;  // 0x0558, mask 0x01
    UPROPERTY() uint8 bRenderingEnabled : 1;  // 0x0558, mask 0x02
    uint32 : 1 bActivateShouldResetWhenReady;  // 0x059C, not reflected
    uint32 : 1 bAllowScalability;  // 0x059C, not reflected
    uint32 : 1 bAwaitingActivationDueToNotReady;  // 0x059C, not reflected
    uint32 : 1 bDidAutoAttach;  // 0x059C, not reflected
    uint32 : 1 bDuringUpdateContextReset;  // 0x059C, not reflected
    uint32 : 1 bIsCulledByScalability;  // 0x059C, not reflected
    uint32 : 1 bNeedsUpdateEmitterMaterials;  // 0x059C, not reflected
    FVector SavedAutoAttachRelativeLocation;  // 0x05A0, not reflected
    FRotator SavedAutoAttachRelativeRotation;  // 0x05AC, not reflected
    FVector SavedAutoAttachRelativeScale3D;  // 0x05B8, not reflected
    FDelegateHandle AssetExposedParametersChangedHandle;  // 0x05C8, not reflected
    int32 ScalabilityManagerHandle;  // 0x05D0, not reflected
    float ForceUpdateTransformTime;  // 0x05D4, not reflected
    FBox CurrLocalBounds;  // 0x05D8, not reflected
public:
    UFUNCTION(BlueprintCallable) void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) ENiagaraAgeUpdateMode GetAgeUpdateMode() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) UNiagaraSystem* GetAsset() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) UNiagaraDataInterface* GetDataInterface(FString Name);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDesiredAge() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetForceSolo() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetLockDesiredAgeDeltaTimeToSeekDelta() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMaxSimTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);  // parameters 0x30
    UFUNCTION(BlueprintCallable) TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetPreviewLODDistance() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetPreviewLODDistanceEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetRandomSeedOffset() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSeekDelta() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) ENiagaraTickBehavior GetTickBehavior() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void InitForPerformanceBaseline();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPaused() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ReinitializeSystem();
    UFUNCTION(BlueprintCallable) void ResetSystem();
    UFUNCTION(BlueprintCallable) void SeekToDesiredAge(float InDesiredAge);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAllowScalability(bool bAllow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAsset(UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetAutoDestroy(bool bInAutoDestroy);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDesiredAge(float InDesiredAge);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetForceSolo(bool bInForceSolo);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetGpuComputeDebug(bool bEnableDebug);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMaxSimTime(float InMaxTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetNiagaraVariableActor(FString InVariableName, AActor* Actor);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetNiagaraVariableBool(FString InVariableName, bool InValue);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetNiagaraVariableFloat(FString InVariableName, float InValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetNiagaraVariableInt(FString InVariableName, int32 InValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetNiagaraVariableLinearColor(FString InVariableName, const FLinearColor& InValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetNiagaraVariableObject(FString InVariableName, UObject* Object);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetNiagaraVariableQuat(FString InVariableName, const FQuat& InValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetNiagaraVariableVec4(FString InVariableName, const FVector4& InValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetPaused(bool bInPaused);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetRandomSeedOffset(int32 NewRandomSeedOffset);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRenderingEnabled(bool bInRenderingEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSeekDelta(float InSeekDelta);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetVariableActor(FName InVariableName, AActor* Actor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVariableBool(FName InVariableName, bool InValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetVariableFloat(FName InVariableName, float InValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetVariableInt(FName InVariableName, int32 InValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetVariableMaterial(FName InVariableName, UMaterialInterface* Object);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVariableObject(FName InVariableName, UObject* Object);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVariableQuat(FName InVariableName, const FQuat& InValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetVariableTextureRenderTarget(FName InVariableName, UTextureRenderTarget* TextureRenderTarget);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVariableVec2(FName InVariableName, FVector2D InValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVariableVec3(FName InVariableName, FVector InValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetVariableVec4(FName InVariableName, const FVector4& InValue);  // parameters 0x20
};
