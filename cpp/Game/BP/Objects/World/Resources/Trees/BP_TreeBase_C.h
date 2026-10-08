// /Game/BP/Objects/World/Resources/Trees/BP_TreeBase.BP_TreeBase_C
// Derives from: ATreeBase > AIcarusActor > AActor > UObject
// size 0x880, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_TreeBase_C : public ATreeBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDecayableComponent* Decayable;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USmoothSync* SmoothSync;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioContextComponent* AudioContext;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HitableBehaviour_Tree_C* BP_HitableBehaviour_Tree;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_Flammable_FLODActor_Tree_C* Flammable;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_FLODTreeComponent_C* FLODTreeComponent;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDurableComponent* Durable;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UExperienceComponent* Experience;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* ProxyTreeMesh;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_BuoyancyComponent_C* BP_BuoyancyComponent;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_TreePrimitive_C* RootTreePrimitive;  // 0x03B0, size 0x8
    UPROPERTY() float Timeline_1_FallTime_993C5D0945E276AD384717AE461774C8;  // 0x03B8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_1__Direction_993C5D0945E276AD384717AE461774C8;  // 0x03BC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_1;  // 0x03C0, size 0x8
    UPROPERTY() float Timeline_0_FallTime_506F6E0448CBBE8B1F14BF952EBE3FD3;  // 0x03C8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Timeline_0__Direction_506F6E0448CBBE8B1F14BF952EBE3FD3;  // 0x03CC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Timeline_0;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UTreePrimitiveComponent* HighestTreePrimitive;  // 0x03D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HighestVerticalOffset;  // 0x03E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PhysicsFellValue;  // 0x03E4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<EDOFMode> CurrentConstraintMode;  // 0x03E8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnHierarchyTransferredToNewTreeBase OnHierarchyTransferredToNewTreeBase;  // 0x03F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FServerOnTrunkHit ServerOnTrunkHit;  // 0x0400, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnBranchDetached OnBranchDetached;  // 0x0410, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTreeAudioData AudioData;  // 0x0420, size 0x1B0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TreeSetupProperties SetupProperties;  // 0x05D0, size 0x140
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UTreePrimitiveComponent*, UStaticMeshComponent*> TreePrimitiveDamageMeshesBottom;  // 0x0710, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UTreePrimitiveComponent*, UStaticMeshComponent*> TreePrimitiveDamageMeshesTop;  // 0x0760, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasVolitileCollision;  // 0x07B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VolitileVelocityThreshold;  // 0x07B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AverageVelocityTop;  // 0x07B8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector AverageVelocityBottom;  // 0x07C4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PreviousAverageVelocityTop;  // 0x07D0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PreviousAverageVelocityBottom;  // 0x07DC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AverageVelocitySmoothTime;  // 0x07E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MassRelativeCollisionDamageRatio;  // 0x07EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TempHitImpulse;  // 0x07F0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TempHitLocation;  // 0x07FC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CollisionImpulseDamageScalarCurve;  // 0x0808, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitPhysicsFellValue;  // 0x0810, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CollisionDamageImpulseMassRatioMin;  // 0x0814, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CollisionDamageImpulseMassRatioMax;  // 0x0818, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CollisionDamageCooldownTime;  // 0x081C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CollisionDamageCooldownValue;  // 0x0820, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UDecalComponent*> DecalComponents;  // 0x0828, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UMaterialInstance*> TreeHitDecal;  // 0x0838, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TreeHitDecalSize;  // 0x0848, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBeingFelledInstantly;  // 0x0854, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasGrantedInitialExperience;  // 0x0855, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnInstantlyFelled OnInstantlyFelled;  // 0x0858, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_InstaFellOverride_StumpOnly;  // 0x0868, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_InstaFellOverride_Fallen;  // 0x0870, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHasBeenTrackedAsCutOnce;  // 0x0878, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InstantChoppedWoodSpawned;  // 0x087C, size 0x4

    UFUNCTION(BlueprintCallable) void AddInstantlySubdividedChildWoodCount(int32 WoodSpawned);  // parameters 0x4
    UFUNCTION() void BndEvt__TerrainAnchor_K2Node_ComponentBoundEvent_0_OnTerrainAchorStateChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CalculateHighestVerticalOffset();
    UFUNCTION(BlueprintCallable) void CheckForInstasplitLogic(AActor* HitByActor, UTreePrimitiveComponent* TreePrimitive);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void CheckIntialExperienceEvent(AIcarusPlayerCharacter* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DebugTreeMetadata(float Delay);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void DebugTreePrimitiveMetadata(float Delay, UTreePrimitiveComponent* TreePrimitive);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_TreeBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindBestDamageTreePrimitive(FVector Location, UTreePrimitiveComponent* HitTreePrimitive, UTreePrimitiveComponent*& TreePrimitive);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void ForceDetachSpecifiedRootLeaves(AActor* Collision_Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) FVector GetAverageVelocityAtPoint(const FHitResult& Hit);  // parameters 0x94
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetHighestVerticalOffset(float& HighestVerticalOffset);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetIsBeingFelledInstantly(bool& InstantlyFelled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetTreePrimitiveAttachPoints(UTreePrimitiveComponent* TreePrimitive, FTransform& BaseTransform, TMap<FName, FTransform>& AttachmentTransforms);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsOriginalTree(bool& IsOriginalTree);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsTreeFalling(bool& IsFalling);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_TreePrimitiveDetached(FVector DetachedPrimitiveOffset, ETreePrimitiveType DetachedPrimitiveType, float DetachedPrimitiveMass, FTreePrimitiveDetachContext DetachContext, bool ShouldPlaySFX, FName DetachPrimitiveName);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void On_Tree_Primitive_Hit_Trunk(UBP_TreePrimitive_C* TreePrimitive, AActor* OtherActor, UPrimitiveComponent* OtherPrimitive, FVector NormalImpulse, FHitResult& Hit);  // parameters 0xAC, named "On Tree Primitive Hit Trunk"
    UFUNCTION(BlueprintCallable) void OnAppliedCollisionDamage(float CollisionDamage, FHitResult Hit);  // parameters 0x8C
    UFUNCTION(BlueprintCallable) void OnBranchDetached__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void OnConstructedTreePrimitives();
    UFUNCTION(BlueprintImplementableEvent) void OnDetachTreePrimitive(UTreePrimitiveComponent* TreePrimitive, const FTreePrimitiveDetachContext& DetachContext);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnEventBreakableHit(UPrimitiveComponent* Primitive, AActor* Other_Actor, FVector Hit_Location, FVector Hit_Normal);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnEventBreakableHit_ProxyMesh(FVector HitLocation, FVector HitNormal, UTreePrimitiveComponent*& TreePrimitive);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void OnHierarchyTransferredToNewTreeBase__DelegateSignature(ABP_TreeBase_C* TreeBase);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void OnHitTree(UPrimitiveComponent* Primitive, AActor* DamageCauser, FVector HitLocation, FVector HitNormal);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnInstantlyFelled__DelegateSignature();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnModifiersUpdated(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void OnPreConstructedTreePrimitives();
    UFUNCTION(BlueprintCallable) void OnRep_CurrentConstraintMode();
    UFUNCTION(BlueprintImplementableEvent) void OnTransferTreePrimitiveHierarchy(UTreePrimitiveComponent* TreePrimitive, const FTreePrimitiveDetachContext& DetachContext, ATreeBase* NewTree);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void OnTrasferredFromOther(ABP_TreeBase_C* SourceTree, UTreePrimitiveComponent* SourcePrimitive);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnTreePrimitiveHit_Branch(UBP_TreePrimitive_C* TreePrimitive, AActor* Other_Actor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit);  // parameters 0xAC
    UFUNCTION(BlueprintCallable) void OnTreePrimitiveOverlap_Branch(UBP_TreePrimitive_C* TreePrimitive, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintImplementableEvent) void OnUpdateTreePrimitiveRuntimeMaskState(const TArray<UTreePrimitiveComponent*>& RemovedTreePrimitives);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PlayInitialBreakSounds();
    UFUNCTION(BlueprintCallable) void PlayInstantlyFelledSound(int32 TrunkCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlaySoundWithDetachContext(FVector Location, FTreePrimitiveDetachContext DetachContext, UFMODEvent* Event);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void RecalculateBuoyancy();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ServerOnTrunkHit__DelegateSignature(UBP_TreePrimitive_C* TreePrimitive, AActor* OtherActor, UPrimitiveComponent* OtherPrimitive, TEnumAsByte<EPhysicalSurface> HitSurface, FVector HitLocation, float ImpulseValue, float Damage);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void SetFLODReservationState(bool ReservationState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetVolitileCollision(bool VolitileCollisionState, bool RefreshCollisions);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SkipRemainingTreeFelling(float Delay);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SpawnFallAudioActor();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void StartTreeFalling(FVector FellDirectionXY, float InitPhysicsFellValue, float InitFireTemperature);  // parameters 0x14
    UFUNCTION() void Timeline_0__FinishedFunc();
    UFUNCTION() void Timeline_0__UpdateFunc();
    UFUNCTION() void Timeline_1__FinishedFunc();
    UFUNCTION() void Timeline_1__UpdateFunc();
    UFUNCTION(BlueprintCallable) void Topple(TreeToppleInfo ToppleInfo);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateAngularDamping(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateAverageVelocityValue(float DeltaSeconds, FVector& AverageVelocity, FVector& PreviousAverage, FVector Location);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void UpdateCollisionDamageCooldown(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdatePrimitivesFellData(float FellValue, float FireTemperature);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateSoftBranchesState(bool RefreshCollision);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateTreeFalling(float FallTime, FVector FellDirectionXY);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateTreePrimitiveDamage(UTreePrimitiveComponent* TreePrimitive);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateTreePrimitiveDamageCap(UTreePrimitiveComponent* TreePrimitive, UTreePrimitiveComponent* PairedTreePrimitive, float DamageValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void UpdateVolitileCollisionState(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
