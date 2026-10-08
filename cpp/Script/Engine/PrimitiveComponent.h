// /Script/Engine.PrimitiveComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x450, declared in Engine/Source/Runtime/Engine/Classes/Components/PrimitiveComponent.h

UCLASS(Abstract, Config=Engine)
class UPrimitiveComponent : public USceneComponent, public INavRelevantInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinDrawDistance;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LDMaxDrawDistance;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CachedMaxDrawDistance;  // 0x0208, size 0x4
    UPROPERTY() TEnumAsByte<ESceneDepthPriorityGroup> DepthPriorityGroup;  // 0x020C, size 0x1
    UPROPERTY() TEnumAsByte<ESceneDepthPriorityGroup> ViewOwnerDepthPriorityGroup;  // 0x020D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EIndirectLightingCacheQuality> IndirectLightingCacheQuality;  // 0x020E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ELightmapType LightmapType;  // 0x020F, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseMaxLODAsImposter : 1;  // 0x0210, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bBatchImpostersAsInstances : 1;  // 0x0210, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bNeverDistanceCull : 1;  // 0x0210, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAlwaysCreatePhysicsState : 1;  // 0x0210, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bGenerateOverlapEvents : 1;  // 0x0211, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bMultiBodyOverlap : 1;  // 0x0211, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bTraceComplexOnMove : 1;  // 0x0211, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bReturnMaterialOnMove : 1;  // 0x0211, mask 0x08
    UPROPERTY() uint8 bUseViewOwnerDepthPriorityGroup : 1;  // 0x0211, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAllowCullDistanceVolume : 1;  // 0x0211, mask 0x20
    UPROPERTY() uint8 bHasMotionBlurVelocityMeshes : 1;  // 0x0211, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bVisibleInReflectionCaptures : 1;  // 0x0211, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bVisibleInRealTimeSkyCaptures : 1;  // 0x0212, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bVisibleInRayTracing : 1;  // 0x0212, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bRenderInMainPass : 1;  // 0x0212, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bRenderInDepthPass : 1;  // 0x0212, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bReceivesDecals : 1;  // 0x0212, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOwnerNoSee : 1;  // 0x0212, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOnlyOwnerSee : 1;  // 0x0212, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bTreatAsBackgroundForOcclusion : 1;  // 0x0212, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseAsOccluder : 1;  // 0x0213, mask 0x01
    UPROPERTY() uint8 bSelectable : 1;  // 0x0213, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bForceMipStreaming : 1;  // 0x0213, mask 0x04
    UPROPERTY() uint8 bHasPerInstanceHitProxies : 1;  // 0x0213, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 CastShadow : 1;  // 0x0213, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAffectDynamicIndirectLighting : 1;  // 0x0213, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAffectDistanceFieldLighting : 1;  // 0x0213, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastDynamicShadow : 1;  // 0x0213, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastStaticShadow : 1;  // 0x0214, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastVolumetricTranslucentShadow : 1;  // 0x0214, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastContactShadow : 1;  // 0x0214, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bSelfShadowOnly : 1;  // 0x0214, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastFarShadow : 1;  // 0x0214, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastInsetShadow : 1;  // 0x0214, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastCinematicShadow : 1;  // 0x0214, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastHiddenShadow : 1;  // 0x0214, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastShadowAsTwoSided : 1;  // 0x0215, mask 0x01
    UPROPERTY(Deprecated) uint8 bLightAsIfStatic : 1;  // 0x0215, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bLightAttachmentsAsGroup : 1;  // 0x0215, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bExcludeFromLightAttachmentGroup : 1;  // 0x0215, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bReceiveMobileCSMShadows : 1;  // 0x0215, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bSingleSampleShadowFromStationaryLights : 1;  // 0x0215, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIgnoreRadialImpulse : 1;  // 0x0215, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bIgnoreRadialForce : 1;  // 0x0215, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bApplyImpulseOnDamage : 1;  // 0x0216, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bReplicatePhysicsToAutonomousProxy : 1;  // 0x0216, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bFillCollisionUnderneathForNavmesh : 1;  // 0x0216, mask 0x04
    UPROPERTY() uint8 AlwaysLoadOnClient : 1;  // 0x0216, mask 0x08
    UPROPERTY() uint8 AlwaysLoadOnServer : 1;  // 0x0216, mask 0x10
    UPROPERTY() uint8 bUseEditorCompositing : 1;  // 0x0216, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bRenderCustomDepth : 1;  // 0x0216, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bVisibleInSceneCaptureOnly : 1;  // 0x0216, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bHiddenInSceneCapture : 1;  // 0x0217, mask 0x01
    UPROPERTY() TEnumAsByte<EHasCustomNavigableGeometry> bHasCustomNavigableGeometry;  // 0x0218, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn;  // 0x021A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLightingChannels LightingChannels;  // 0x021B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ERendererStencilMask CustomDepthStencilWriteMask;  // 0x021C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CustomDepthStencilValue;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere) FCustomPrimitiveData CustomPrimitiveData;  // 0x0228, size 0x10
    UPROPERTY(Transient) FCustomPrimitiveData CustomPrimitiveDataInternal;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 TranslucencySortPriority;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TranslucencySortDistanceOffset;  // 0x0254, size 0x4
    UPROPERTY() int32 VisibilityId;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures;  // 0x0260, size 0x10
    UPROPERTY(EditAnywhere) int8 VirtualTextureLodBias;  // 0x0270, size 0x1
    UPROPERTY(EditAnywhere) int8 VirtualTextureCullMips;  // 0x0271, size 0x1
    UPROPERTY(EditAnywhere) int8 VirtualTextureMinCoverage;  // 0x0272, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;  // 0x0273, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LpvBiasMultiplier;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere) float BoundsScale;  // 0x0284, size 0x4
    UPROPERTY(Transient) TArray<AActor*> MoveIgnoreActors;  // 0x0298, size 0x10
    UPROPERTY(Transient) TArray<UPrimitiveComponent*> MoveIgnoreComponents;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBodyInstance BodyInstance;  // 0x02C8, size 0x158
    UPROPERTY(BlueprintAssignable) FComponentHitSignature OnComponentHit;  // 0x0420, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentBeginOverlapSignature OnComponentBeginOverlap;  // 0x0421, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentEndOverlapSignature OnComponentEndOverlap;  // 0x0422, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentWakeSignature OnComponentWake;  // 0x0423, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentSleepSignature OnComponentSleep;  // 0x0424, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentBeginCursorOverSignature OnBeginCursorOver;  // 0x0426, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentEndCursorOverSignature OnEndCursorOver;  // 0x0427, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentOnClickedSignature OnClicked;  // 0x0428, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentOnReleasedSignature OnReleased;  // 0x0429, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentOnInputTouchBeginSignature OnInputTouchBegin;  // 0x042A, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentOnInputTouchEndSignature OnInputTouchEnd;  // 0x042B, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentBeginTouchOverSignature OnInputTouchEnter;  // 0x042C, size 0x1
    UPROPERTY(BlueprintAssignable) FComponentEndTouchOverSignature OnInputTouchLeave;  // 0x042D, size 0x1
    UPROPERTY(Instanced) UPrimitiveComponent* LODParentPrimitive;  // 0x0448, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bAttachedToStreamingManagerAsStatic;  // 0x0210
    uint8 : 1 bAttachedToStreamingManagerAsDynamic;  // 0x0210
    uint8 : 1 bHandledByStreamingManagerAsDynamic;  // 0x0210
    uint8 : 1 bIgnoreStreamingManagerUpdate;  // 0x0210
    uint8 : 1 bCachedAllCollideableDescendantsRelative;  // 0x0217, protected
    uint8 MoveIgnoreMask;  // 0x0219, private
    FPhysScene_PhysX * DeferredCreatePhysicsStateScene;  // 0x0248
    FPrimitiveComponentId ComponentId;  // 0x0274
    FThreadSafeCounter AttachmentCounter;  // 0x027C
    float LastCheckedAllCollideableDescendantsTime;  // 0x0280, protected
    float LastSubmitTime;  // 0x0288
    float LastRenderTime;  // 0x028C, private
    float LastRenderTimeOnScreen;  // 0x0290, private
    TArray<FOverlapInfo,TSizedDefaultAllocator<32> > OverlappingComponents;  // 0x02B8, protected
    FComponentCollisionSettingsChangedSignature OnComponentCollisionSettingsChangedEvent;  // 0x0425
    FPrimitiveSceneProxy * SceneProxy;  // 0x0430
    FRenderCommandFence DetachFence;  // 0x0438

    UFUNCTION(BlueprintCallable) void AddAngularImpulse(FVector Impulse, FName BoneName, bool bVelChange);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void AddAngularImpulseInDegrees(FVector Impulse, FName BoneName, bool bVelChange);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void AddAngularImpulseInRadians(FVector Impulse, FName BoneName, bool bVelChange);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void AddForce(FVector Force, FName BoneName, bool bAccelChange);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void AddForceAtLocation(FVector Force, FVector Location, FName BoneName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void AddForceAtLocationLocal(FVector Force, FVector Location, FName BoneName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void AddImpulse(FVector Impulse, FName BoneName, bool bVelChange);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void AddImpulseAtLocation(FVector Impulse, FVector Location, FName BoneName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void AddRadialForce(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);  // parameters 0x16
    UFUNCTION(BlueprintCallable) void AddRadialImpulse(FVector Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);  // parameters 0x16
    UFUNCTION(BlueprintCallable) void AddTorque(FVector Torque, FName BoneName, bool bAccelChange);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void AddTorqueInDegrees(FVector Torque, FName BoneName, bool bAccelChange);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void AddTorqueInRadians(FVector Torque, FName BoneName, bool bAccelChange);  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanCharacterStepUp(APawn* Pawn) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ClearMoveIgnoreActors();
    UFUNCTION(BlueprintCallable) void ClearMoveIgnoreComponents();
    UFUNCTION(BlueprintCallable) TArray<AActor*> CopyArrayOfMoveIgnoreActors();  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();  // parameters 0x10
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int32 ElementIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int32 ElementIndex, UMaterialInterface* Parent);  // parameters 0x18
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int32 ElementIndex, UMaterialInterface* SourceMaterial, FName OptionalName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAngularDamping() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetCenterOfMass(FName BoneName) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetClosestPointOnCollision(const FVector& Point, FVector& OutPointOnBody, FName BoneName) const;  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<ECollisionEnabled> GetCollisionEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<ECollisionChannel> GetCollisionObjectType() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetCollisionProfileName() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel) const;  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetGenerateOverlapEvents() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetInertiaTensor(FName BoneName) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLinearDamping() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMass() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetMassScale(FName BoneName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) UMaterialInterface* GetMaterial(int32 ElementIndex) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) UMaterialInterface* GetMaterialFromCollisionFaceIndex(int32 FaceIndex, int32& SectionIndex) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumMaterials() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOverlappingComponents(TArray<UPrimitiveComponent*>& OutOverlappingComponents) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetPhysicsAngularVelocity(FName BoneName) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetPhysicsAngularVelocityInDegrees(FName BoneName) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetPhysicsAngularVelocityInRadians(FName BoneName) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable) FVector GetPhysicsLinearVelocity(FName BoneName);  // parameters 0x14
    UFUNCTION(BlueprintCallable) FVector GetPhysicsLinearVelocityAtPoint(FVector Point, FName BoneName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) FWalkableSlopeOverride GetWalkableSlopeOverride() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void IgnoreActorWhenMoving(AActor* Actor, bool bShouldIgnore);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void IgnoreComponentWhenMoving(UPrimitiveComponent* Component, bool bShouldIgnore);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAnyRigidBodyAwake();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsGravityEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOverlappingActor(AActor* Other) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOverlappingComponent(UPrimitiveComponent* OtherComp) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) bool K2_BoxOverlapComponent(FVector InBoxCentre, FBox InBox, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);  // parameters 0xD5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool K2_IsCollisionEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool K2_IsPhysicsCollisionEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool K2_IsQueryCollisionEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool K2_LineTraceComponent(FVector TraceStart, FVector TraceEnd, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);  // parameters 0xC5
    UFUNCTION(BlueprintCallable) bool K2_SphereOverlapComponent(FVector InSphereCentre, float InSphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);  // parameters 0xBD
    UFUNCTION(BlueprintCallable) bool K2_SphereTraceComponent(FVector TraceStart, FVector TraceEnd, float SphereRadius, bool bTraceComplex, bool bShowTrace, bool bPersistentShowTrace, FVector& HitLocation, FVector& HitNormal, FName& BoneName, FHitResult& OutHit);  // parameters 0xC9
    UFUNCTION(BlueprintCallable) void PutRigidBodyToSleep(FName BoneName);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector ScaleByMomentOfInertia(FVector InputVector, FName BoneName) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetAllMassScale(float InMassScale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAllPhysicsAngularVelocityInDegrees(const FVector& NewAngVel, bool bAddToCurrent);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetAllPhysicsAngularVelocityInRadians(const FVector& NewAngVel, bool bAddToCurrent);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetAllPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetAllUseCCD(bool InUseCCD);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAngularDamping(float InDamping);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetBoundsScale(float NewBoundsScale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCastHiddenShadow(bool NewCastHiddenShadow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCastInsetShadow(bool bInCastInsetShadow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCastShadow(bool NewCastShadow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCenterOfMass(FVector CenterOfMassOffset, FName BoneName);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCollisionProfileName(FName InCollisionProfileName, bool bUpdateOverlaps);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCullDistance(float NewCullDistance);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCustomDepthStencilValue(int32 Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCustomPrimitiveDataFloat(int32 DataIndex, float Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetCustomPrimitiveDataVector2(int32 DataIndex, FVector2D Value);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetCustomPrimitiveDataVector3(int32 DataIndex, FVector Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetCustomPrimitiveDataVector4(int32 DataIndex, FVector4 Value);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetDefaultCustomPrimitiveDataFloat(int32 DataIndex, float Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDefaultCustomPrimitiveDataVector2(int32 DataIndex, FVector2D Value);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetDefaultCustomPrimitiveDataVector3(int32 DataIndex, FVector Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetDefaultCustomPrimitiveDataVector4(int32 DataIndex, FVector4 Value);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetEnableGravity(bool bGravityEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetExcludeFromLightAttachmentGroup(bool bInExcludeFromLightAttachmentGroup);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetHiddenInSceneCapture(bool bValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLightAttachmentsAsGroup(bool bInLightAttachmentsAsGroup);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void SetLinearDamping(float InDamping);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMassOverrideInKg(FName BoneName, float MassInKg, bool bOverrideMass);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void SetMassScale(FName BoneName, float InMassScale);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetMaterial(int32 ElementIndex, UMaterialInterface* Material);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetMaterialByName(FName MaterialSlotName, UMaterialInterface* Material);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOwnerNoSee(bool bNewOwnerNoSee);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPhysMaterialOverride(UPhysicalMaterial* NewPhysMaterial);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetPhysicsAngularVelocity(FVector NewAngVel, bool bAddToCurrent, FName BoneName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetPhysicsAngularVelocityInDegrees(FVector NewAngVel, bool bAddToCurrent, FName BoneName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetPhysicsAngularVelocityInRadians(FVector NewAngVel, bool bAddToCurrent, FName BoneName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetPhysicsLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, FName BoneName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetReceivesDecals(bool bNewReceivesDecals);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRenderCustomDepth(bool bValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRenderInMainPass(bool bValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSimulatePhysics(bool bSimulate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTranslucencySortDistanceOffset(float NewTranslucencySortDistanceOffset);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTranslucentSortPriority(int32 NewTranslucentSortPriority);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetUseCCD(bool InUseCCD, FName BoneName);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetVisibleInSceneCaptureOnly(bool bValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWalkableSlopeOverride(const FWalkableSlopeOverride& NewOverride);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void WakeAllRigidBodies();
    UFUNCTION(BlueprintCallable) void WakeRigidBody(FName BoneName);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool WasRecentlyRendered(float Tolerance) const;  // parameters 0x5

    // Virtual functions that start here:
    //   AddAngularImpulse, AddAngularImpulseInRadians, AddForce, AddForceAtLocation
    //   AddForceAtLocationLocal, AddImpulse, AddImpulseAtLocation, AddRadialForce, AddRadialImpulse
    //   AddTorqueInRadians, AreAllCollideableDescendantsRelative, AreSymmetricRotations
    //   BuildTextureStreamingData, CalculateMass, CanCharacterStepUp, CanEditSimulatePhysics
    //   ComponentOverlapComponentImpl, ComponentOverlapMultiImpl, ComputePenetration
    //   CreateAndSetMaterialInstanceDynamic, CreateAndSetMaterialInstanceDynamicFromMaterial
    //   CreateDynamicMaterialInstance, CreateSceneProxy, DoCustomNavigableGeometryExport, GetAngularDamping
    //   GetBodyInstance, GetBodySetup, GetCollisionShape, GetComponentTransformFromBodyInstance
    //   GetDiffuseBoost, GetEmissiveBoost, GetInertiaTensor, GetLightAndShadowMapMemoryUsage
    //   GetLightMapResolution, GetLinearDamping, GetMass, GetMassScale, GetMaterial
    //   GetMaterialFromCollisionFaceIndex, GetNumMaterials, GetRenderMatrix, GetRuntimeVirtualTextures
    //   GetShadowIndirectOnly, GetSquaredDistanceToCollision, GetStaticDepthPriorityGroup
    //   GetStaticLightMapResolution, GetStaticLightingType, GetStreamingRenderAssetInfo, GetUsedMaterials
    //   GetUsedTextures, GetVirtualTextureMainPassMaxDrawDistance, GetVirtualTextureRenderPassType
    //   GetWeldedBodies, HasValidSettingsForStaticLighting, InitSweepCollisionParams, IsAnyRigidBodyAwake
    //   IsGravityEnabled, IsZeroExtent, LineTraceComponent, OnComponentCollisionSettingsChanged
    //   OverlapComponent, PutAllRigidBodiesToSleep, ReceiveComponentDamage, ScaleByMomentOfInertia
    //   SetAllMassScale, SetAllPhysicsAngularVelocityInRadians, SetAllPhysicsLinearVelocity
    //   SetAllPhysicsPosition, SetAllPhysicsRotation, SetAllUseCCD, SetAngularDamping, SetCollisionEnabled
    //   SetCollisionObjectType, SetCollisionProfileName, SetCollisionResponseToAllChannels
    //   SetCollisionResponseToChannel, SetCollisionResponseToChannels, SetConstraintMode, SetEnableGravity
    //   SetLinearDamping, SetMassOverrideInKg, SetMassScale, SetMaterial, SetMaterialByName
    //   SetNotifyRigidBodyCollision, SetPhysMaterialOverride, SetPhysicsAngularVelocityInRadians
    //   SetPhysicsLinearVelocity, SetSimulatePhysics, SetUseCCD, SetWalkableSlopeOverride
    //   ShouldRecreateProxyOnUpdateTransform, ShouldRenderSelected, SupportsStaticLighting, SweepComponent
    //   UnWeldChildren, UnWeldFromParent, UpdatePhysicsToRBChannels, UsesOnlyUnlitMaterials
    //   WakeAllRigidBodies, WakeRigidBody, WeldTo, WeldToImplementation
};
