// /Script/Engine.ParticleSystemComponent
// Derives from: UFXSystemComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x6B0, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystemComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UParticleSystemComponent : public UFXSystemComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UParticleSystem* Template;  // 0x0450, size 0x8
    UPROPERTY(Transient) TArray<UMaterialInterface*> EmitterMaterials;  // 0x0458, size 0x10
    UPROPERTY(Transient) TArray<USkeletalMeshComponent*> SkelMeshComponents;  // 0x0468, size 0x10
    uint8 : 1 bDeactivateTriggered;  // 0x0478, not reflected
    uint8 : 1 bResetTriggered;  // 0x0478, not reflected
    uint8 : 1 bSuppressSpawning;  // 0x0478, not reflected
    uint8 : 1 bWasActive;  // 0x0478, not reflected
    uint8 : 1 bWasCompleted;  // 0x0478, not reflected
    uint8 : 1 bWasDeactivated;  // 0x0478, not reflected
    uint8 : 1 bHasBeenActivated;  // 0x0479, not reflected
    uint8 : 1 bIsManagingSignificance;  // 0x0479, not reflected
    uint8 : 1 bJustRegistered;  // 0x0479, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bResetOnDetach : 1;  // 0x0479, mask 0x01
    UPROPERTY() uint8 bUpdateOnDedicatedServer : 1;  // 0x0479, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAllowRecycling : 1;  // 0x0479, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAutoManageAttachment : 1;  // 0x0479, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAutoAttachWeldSimulatedBodies : 1;  // 0x0479, mask 0x40
    uint8 : 1 bAutoDestroy;  // 0x047A, not reflected
    uint8 : 1 bForceLODUpdateFromRenderer;  // 0x047A, not reflected
    uint8 : 1 bForcedInActive;  // 0x047A, not reflected
    uint8 : 1 bIsViewRelevanceDirty;  // 0x047A, not reflected
    uint8 : 1 bWasManagingSignificance;  // 0x047A, not reflected
    UPROPERTY() uint8 bWarmingUp : 1;  // 0x047A, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverrideLODMethod : 1;  // 0x047A, mask 0x04
    UPROPERTY() uint8 bSkipUpdateDynamicDataDuringTick : 1;  // 0x047A, mask 0x08
    EPSCPoolMethod PoolingMethod;  // 0x0484, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ParticleSystemLODMethod> LODMethod;  // 0x0485, size 0x1
    UPROPERTY() EParticleSignificanceLevel RequiredSignificance;  // 0x0486, size 0x1
    TEnumAsByte<enum ParticleReplayState> ReplayState;  // 0x0487, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FParticleSysParam> InstanceParameters;  // 0x0488, size 0x10
    UPROPERTY(BlueprintAssignable) FParticleSpawnSignature OnParticleSpawn;  // 0x0498, size 0x10
    UPROPERTY(BlueprintAssignable) FParticleBurstSignature OnParticleBurst;  // 0x04A8, size 0x10
    UPROPERTY(BlueprintAssignable) FParticleDeathSignature OnParticleDeath;  // 0x04B8, size 0x10
    UPROPERTY(BlueprintAssignable) FParticleCollisionSignature OnParticleCollide;  // 0x04C8, size 0x10
    UPROPERTY() bool bOldPositionValid;  // 0x04D8, size 0x1
    UPROPERTY() FVector OldPosition;  // 0x04DC, size 0xC
    UPROPERTY() FVector PartSysVelocity;  // 0x04E8, size 0xC
    UPROPERTY() float WarmupTime;  // 0x04F4, size 0x4
    UPROPERTY() float WarmupTickRate;  // 0x04F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondsBeforeInactive;  // 0x0500, size 0x4
    UPROPERTY() float MaxTimeBeforeForceUpdateTransform;  // 0x0508, size 0x4
    float AccumTickTime;  // 0x050C, not reflected
    float LastSignificantTime;  // 0x0510, not reflected
    float AccumLODDistanceCheckTime;  // 0x0514, not reflected
    TArray<FMaterialRelevance,TSizedDefaultAllocator<32> > CachedViewRelevanceFlags;  // 0x0518, not reflected
    UPROPERTY() TArray<UParticleSystemReplay*> ReplayClips;  // 0x0528, size 0x10
    int32 ReplayClipIDNumber;  // 0x0538, not reflected
    int32 ReplayFrameIndex;  // 0x053C, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CustomTimeDilation;  // 0x0540, size 0x4
    float EmitterDelay;  // 0x0544, not reflected
    TArray<FParticleEventSpawnData,TSizedDefaultAllocator<32> > SpawnEvents;  // 0x0548, not reflected
    TArray<FParticleEventDeathData,TSizedDefaultAllocator<32> > DeathEvents;  // 0x0558, not reflected
    TArray<FParticleEventCollideData,TSizedDefaultAllocator<32> > CollisionEvents;  // 0x0568, not reflected
    TArray<FParticleEventBurstData,TSizedDefaultAllocator<32> > BurstEvents;  // 0x0578, not reflected
    TArray<FParticleEventKismetData,TSizedDefaultAllocator<32> > KismetEvents;  // 0x0588, not reflected
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) TWeakObjectPtr<USceneComponent> AutoAttachParent;  // 0x0598, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AutoAttachSocketName;  // 0x05A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AutoAttachLocationRule;  // 0x05A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AutoAttachRotationRule;  // 0x05A9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAttachmentRule AutoAttachScaleRule;  // 0x05AA, size 0x1
    FFXSystem * FXSystem;  // 0x05D0, not reflected
    UPROPERTY(BlueprintAssignable) FOnSystemFinished OnSystemFinished;  // 0x05D8, size 0x10
    FRenderCommandFence * ReleaseResourcesFence;  // 0x0640, not reflected
    TArray<FParticleEmitterInstance *,TSizedDefaultAllocator<32> > EmitterInstances;  // 0x0648, not reflected
    FRandomStream RandomStream;  // 0x0658, not reflected
private:
    uint8 : 1 bIsElligibleForAsyncTick;  // 0x0478, not reflected
    uint8 : 1 bIsElligibleForAsyncTickComputed;  // 0x0478, not reflected
    uint8 : 1 bAsyncDataCopyIsValid;  // 0x047B, not reflected
    uint8 : 1 bDidAutoAttach;  // 0x047B, not reflected
    uint8 : 1 bIsTransformDirty;  // 0x047B, not reflected
    uint8 : 1 bNeedsFinalize;  // 0x047B, not reflected
    uint8 : 1 bParallelRenderThreadUpdate;  // 0x047B, not reflected
    volatile bool bAsyncWorkOutstanding;  // 0x047C, not reflected
    int32 : 1 bPendingManagerAdd;  // 0x0480, not reflected
    int32 : 1 bPendingManagerRemove;  // 0x0480, not reflected
    int32 : 30 ManagerHandle;  // 0x0480, not reflected
    int32 LODLevel;  // 0x04FC, not reflected
    float TimeSinceLastForceUpdateTransform;  // 0x0504, not reflected
    FVector SavedAutoAttachRelativeLocation;  // 0x05AC, not reflected
    FRotator SavedAutoAttachRelativeRotation;  // 0x05B8, not reflected
    FVector SavedAutoAttachRelativeScale3D;  // 0x05C4, not reflected
    TArray<FParticleSysParam,TSizedDefaultAllocator<32> > AsyncInstanceParameters;  // 0x05E8, not reflected
    TArray<FVector,TSizedDefaultAllocator<32> > PlayerLocations;  // 0x05F8, not reflected
    TArray<float,TSizedDefaultAllocator<32> > PlayerLODDistanceFactor;  // 0x0608, not reflected
    FBoxSphereBounds AsyncBounds;  // 0x0618, not reflected
    FVector AsyncPartSysVelocity;  // 0x0634, not reflected
    FTransform AsyncComponentToWorld;  // 0x0660, not reflected
    TRefCountPtr<FGraphEvent> AsyncWork;  // 0x0690, not reflected
    float DeltaTimeTick;  // 0x0698, not reflected
    int32 TotalActiveParticles;  // 0x069C, not reflected
    uint32 NumSignificantEmitters;  // 0x06A0, not reflected
    uint32 TimeSinceLastTick;  // 0x06A4, not reflected
public:
    UFUNCTION(BlueprintCallable) void BeginTrails(FName InFirstSocketName, FName InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);  // parameters 0x18
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* CreateNamedDynamicMaterialInstance(FName InName, UMaterialInterface* SourceMaterial);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void EndTrails();
    UFUNCTION(BlueprintCallable) void GenerateParticleEvent(FName InEventName, float InEmitterTime, FVector InLocation, FVector InDirection, FVector InVelocity);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetBeamEndPoint(int32 EmitterIndex, FVector& OutEndPoint) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetBeamSourcePoint(int32 EmitterIndex, int32 SourceIndex, FVector& OutSourcePoint) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetBeamSourceStrength(int32 EmitterIndex, int32 SourceIndex, float& OutSourceStrength) const;  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetBeamSourceTangent(int32 EmitterIndex, int32 SourceIndex, FVector& OutTangentPoint) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetBeamTargetPoint(int32 EmitterIndex, int32 TargetIndex, FVector& OutTargetPoint) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetBeamTargetStrength(int32 EmitterIndex, int32 TargetIndex, float& OutTargetStrength) const;  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetBeamTargetTangent(int32 EmitterIndex, int32 TargetIndex, FVector& OutTangentPoint) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) UMaterialInterface* GetNamedMaterial(FName InName) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumActiveParticles() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAutoAttachParams(USceneComponent* Parent, FName SocketName, TEnumAsByte<EAttachLocation> LocationType);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetBeamEndPoint(int32 EmitterIndex, FVector NewEndPoint);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetBeamSourcePoint(int32 EmitterIndex, FVector NewSourcePoint, int32 SourceIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetBeamSourceStrength(int32 EmitterIndex, float NewSourceStrength, int32 SourceIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetBeamSourceTangent(int32 EmitterIndex, FVector NewTangentPoint, int32 SourceIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetBeamTargetPoint(int32 EmitterIndex, FVector NewTargetPoint, int32 TargetIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetBeamTargetStrength(int32 EmitterIndex, float NewTargetStrength, int32 TargetIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetBeamTargetTangent(int32 EmitterIndex, FVector NewTangentPoint, int32 TargetIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetMaterialParameter(FName ParameterName, UMaterialInterface* Param);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetTemplate(UParticleSystem* NewTemplate);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTrailSourceData(FName InFirstSocketName, FName InSecondSocketName, TEnumAsByte<ETrailWidthMode> InWidthMode, float InWidth);  // parameters 0x18

    // Virtual functions that start here:
    //   CreateNamedDynamicMaterialInstance, DetermineLODLevelForLocation, GetActorParameter
    //   GetAnyVectorParameter, GetBeamEndPoint, GetBeamSourcePoint, GetBeamSourceStrength
    //   GetBeamSourceTangent, GetBeamTargetPoint, GetBeamTargetStrength, GetBeamTargetTangent
    //   GetColorParameter, GetFloatParameter, GetLODLevel, GetMaterialParameter, GetNameForMaterial
    //   GetNamedMaterial, GetNamedMaterialIndex, GetOwnedTrailEmitters, GetVectorParameter, InitParticles
    //   ParticleLineCheck, RewindEmitterInstances, SetBeamEndPoint, SetBeamSourcePoint
    //   SetBeamSourceStrength, SetBeamSourceTangent, SetBeamTargetPoint, SetBeamTargetStrength
    //   SetBeamTargetTangent, SetLODLevel, UpdateDynamicData, UpdateLODInformation
};
