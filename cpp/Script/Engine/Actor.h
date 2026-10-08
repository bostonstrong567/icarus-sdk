// /Script/Engine.Actor
// Derives from: UObject
// size 0x220, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/Actor.h

UCLASS(Config=Engine)
class AActor : public UObject
{
public:
    UPROPERTY(EditAnywhere) FActorTickFunction PrimaryActorTick;  // 0x0028, size 0x30
    UPROPERTY() uint8 bNetTemporary : 1;  // 0x0058, mask 0x01
    UPROPERTY() uint8 bNetStartup : 1;  // 0x0058, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bOnlyRelevantToOwner : 1;  // 0x0058, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAlwaysRelevant : 1;  // 0x0058, mask 0x08
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) uint8 bReplicateMovement : 1;  // 0x0058, mask 0x10
    UPROPERTY(EditAnywhere, Replicated, Interp, BlueprintReadOnly) uint8 bHidden : 1;  // 0x0058, mask 0x20
    UPROPERTY(Replicated) uint8 bTearOff : 1;  // 0x0058, mask 0x40
    UPROPERTY() uint8 bForceNetAddressable : 1;  // 0x0058, mask 0x80
    UPROPERTY(Transient) uint8 bExchangedRoles : 1;  // 0x0059, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bNetLoadOnClient : 1;  // 0x0059, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bNetUseOwnerRelevancy : 1;  // 0x0059, mask 0x04
    UPROPERTY() uint8 bRelevantForNetworkReplays : 1;  // 0x0059, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bRelevantForLevelBounds : 1;  // 0x0059, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bReplayRewindable : 1;  // 0x0059, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bAllowTickBeforeBeginPlay : 1;  // 0x0059, mask 0x40
    UPROPERTY(BlueprintReadWrite) uint8 bAutoDestroyWhenFinished : 1;  // 0x0059, mask 0x80
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) uint8 bCanBeDamaged : 1;  // 0x005A, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bBlockInput : 1;  // 0x005A, mask 0x02
    UPROPERTY() uint8 bCollideWhenPlacing : 1;  // 0x005A, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bFindCameraComponentWhenViewTarget : 1;  // 0x005A, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bGenerateOverlapEventsDuringLevelStreaming : 1;  // 0x005A, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bIgnoresOriginShifting : 1;  // 0x005A, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableAutoLODGeneration : 1;  // 0x005A, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bIsEditorOnlyActor : 1;  // 0x005A, mask 0x80
    UPROPERTY() uint8 bActorSeamlessTraveled : 1;  // 0x005B, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bReplicates : 1;  // 0x005B, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bCanBeInCluster : 1;  // 0x005B, mask 0x04
    UPROPERTY() uint8 bAllowReceiveTickEventOnDedicatedServer : 1;  // 0x005B, mask 0x08
    UPROPERTY() uint8 bActorEnableCollision : 1;  // 0x005C, mask 0x08
    UPROPERTY(Transient) uint8 bActorIsBeingDestroyed : 1;  // 0x005C, mask 0x10
    UPROPERTY(EditAnywhere) EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming;  // 0x005D, size 0x1
    UPROPERTY(EditAnywhere, Config) EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming;  // 0x005E, size 0x1
    UPROPERTY(Replicated, Transient) TEnumAsByte<ENetRole> RemoteRole;  // 0x005F, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) FRepMovement ReplicatedMovement;  // 0x0060, size 0x34
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InitialLifeSpan;  // 0x0094, size 0x4
    UPROPERTY(BlueprintReadWrite) float CustomTimeDilation;  // 0x0098, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing, Transient) FRepAttachment AttachmentReplication;  // 0x00A0, size 0x40
    UPROPERTY(Replicated, ReplicatedUsing) AActor* Owner;  // 0x00E0, size 0x8
    UPROPERTY() FName NetDriverName;  // 0x00E8, size 0x8
    UPROPERTY(Replicated) TEnumAsByte<ENetRole> Role;  // 0x00F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ENetDormancy> NetDormancy;  // 0x00F1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod;  // 0x00F2, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EAutoReceiveInput> AutoReceiveInput;  // 0x00F3, size 0x1
    UPROPERTY(EditAnywhere) int32 InputPriority;  // 0x00F4, size 0x4
    UPROPERTY(Instanced) UInputComponent* InputComponent;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float NetCullDistanceSquared;  // 0x0100, size 0x4
    UPROPERTY(Transient) int32 NetTag;  // 0x0104, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NetUpdateFrequency;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinNetUpdateFrequency;  // 0x010C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NetPriority;  // 0x0110, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadWrite) APawn* Instigator;  // 0x0118, size 0x8
    UPROPERTY(Transient) TArray<AActor*> Children;  // 0x0120, size 0x10
    UPROPERTY(Instanced, BlueprintReadOnly) USceneComponent* RootComponent;  // 0x0130, size 0x8
    UPROPERTY(Transient) TArray<AMatineeActor*> ControllingMatineeActors;  // 0x0138, size 0x10
    UPROPERTY() TArray<FName> Layers;  // 0x0150, size 0x10
    UPROPERTY(Instanced) TWeakObjectPtr<UChildActorComponent> ParentComponent;  // 0x0160, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> Tags;  // 0x0170, size 0x10
    UPROPERTY(BlueprintAssignable) FTakeAnyDamageSignature OnTakeAnyDamage;  // 0x0180, size 0x1
    UPROPERTY(BlueprintAssignable) FTakePointDamageSignature OnTakePointDamage;  // 0x0181, size 0x1
    UPROPERTY(BlueprintAssignable) FTakeRadialDamageSignature OnTakeRadialDamage;  // 0x0182, size 0x1
    UPROPERTY(BlueprintAssignable) FActorBeginOverlapSignature OnActorBeginOverlap;  // 0x0183, size 0x1
    UPROPERTY(BlueprintAssignable) FActorEndOverlapSignature OnActorEndOverlap;  // 0x0184, size 0x1
    UPROPERTY(BlueprintAssignable) FActorBeginCursorOverSignature OnBeginCursorOver;  // 0x0185, size 0x1
    UPROPERTY(BlueprintAssignable) FActorEndCursorOverSignature OnEndCursorOver;  // 0x0186, size 0x1
    UPROPERTY(BlueprintAssignable) FActorOnClickedSignature OnClicked;  // 0x0187, size 0x1
    UPROPERTY(BlueprintAssignable) FActorOnReleasedSignature OnReleased;  // 0x0188, size 0x1
    UPROPERTY(BlueprintAssignable) FActorOnInputTouchBeginSignature OnInputTouchBegin;  // 0x0189, size 0x1
    UPROPERTY(BlueprintAssignable) FActorOnInputTouchEndSignature OnInputTouchEnd;  // 0x018A, size 0x1
    UPROPERTY(BlueprintAssignable) FActorBeginTouchOverSignature OnInputTouchEnter;  // 0x018B, size 0x1
    UPROPERTY(BlueprintAssignable) FActorEndTouchOverSignature OnInputTouchLeave;  // 0x018C, size 0x1
    UPROPERTY(BlueprintAssignable) FActorHitSignature OnActorHit;  // 0x018D, size 0x1
    UPROPERTY(BlueprintAssignable) FActorDestroyedSignature OnDestroyed;  // 0x018E, size 0x1
    UPROPERTY(BlueprintAssignable) FActorEndPlaySignature OnEndPlay;  // 0x018F, size 0x1
    UPROPERTY() TArray<UActorComponent*> InstanceComponents;  // 0x01F0, size 0x10
    UPROPERTY() TArray<UActorComponent*> BlueprintCreatedComponents;  // 0x0200, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bNetCheckedInitialPhysicsState;  // 0x005B, protected
    uint8 : 1 bHasFinishedSpawning;  // 0x005B, private
    uint8 : 1 bActorInitialized;  // 0x005B, private
    uint8 : 1 bActorBeginningPlayFromLevelStreaming;  // 0x005B, private
    uint8 : 1 bTickFunctionsRegistered;  // 0x005C, private
    uint8 : 1 bHasDeferredComponentRegistration;  // 0x005C, private
    uint8 : 1 bRunningUserConstructionScript;  // 0x005C, private
    uint8 : 1 bActorWantsDestroyDuringBeginPlay;  // 0x005C, private
    AActor::EActorBeginPlayState : 2 ActorHasBegunPlay;  // 0x005C, private
    float CreationTime;  // 0x009C
    float LastRenderTime;  // 0x0114, private
    FTimerHandle TimerHandle_LifeSpanExpired;  // 0x0148, protected
    uint8 : 1 bActorIsBeingConstructed;  // 0x0168
    TArray<UActorComponent *,TSizedDefaultAllocator<32> > ReplicatedComponents;  // 0x0190, protected
    TSet<UActorComponent *,DefaultKeyFuncs<UActorComponent *,0>,FDefaultSetAllocator> OwnedComponents;  // 0x01A0, private
    FRenderCommandFence DetachFence;  // 0x0210

    UFUNCTION(BlueprintCallable, BlueprintPure) bool ActorHasTag(FName Tag) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) UActorComponent* AddComponent(FName TemplateName, bool bManualAttachment, const FTransform& RelativeTransform, UObject* ComponentTemplateContext, bool bDeferredFinish);  // parameters 0x58
    UFUNCTION(BlueprintCallable) UActorComponent* AddComponentByClass(TSubclassOf<UActorComponent> Class, bool bManualAttachment, const FTransform& RelativeTransform, bool bDeferredFinish);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void AddTickPrerequisiteActor(AActor* PrerequisiteActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DetachRootComponentFromParent(bool bMaintainWorldPosition);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DisableInput(APlayerController* PlayerController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EnableInput(APlayerController* PlayerController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void FinishAddComponent(UActorComponent* Component, bool bManualAttachment, const FTransform& RelativeTransform);  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void FlushNetDormancy();
    UFUNCTION(BlueprintCallable) void ForceNetUpdate();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetActorBounds(bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, bool bIncludeFromChildActors) const;  // parameters 0x1D
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetActorEnableCollision() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetActorEyesViewPoint(FVector& OutLocation, FRotator& OutRotation) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetActorForwardVector() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetActorRelativeScale3D() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetActorRightVector() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetActorScale3D() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetActorTickInterval() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetActorTimeDilation() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetActorUpVector() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAllChildActors(TArray<AActor*>& ChildActors, bool bIncludeDescendants) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetAttachParentActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetAttachParentSocketName() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAttachedActors(TArray<AActor*>& OutActors, bool bResetArray) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) UActorComponent* GetComponentByClass(TSubclassOf<UActorComponent> ComponentClass) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UActorComponent*> GetComponentsByInterface(TSubclassOf<UInterface> Interface) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UActorComponent*> GetComponentsByTag(TSubclassOf<UActorComponent> ComponentClass, FName Tag) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDistanceTo(AActor* OtherActor) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetDotProductTo(AActor* OtherActor) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetGameTimeSinceCreation() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHorizontalDistanceTo(AActor* OtherActor) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetHorizontalDotProductTo(AActor* OtherActor) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInputAxisKeyValue(FKey InputAxisKey) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInputAxisValue(FName InputAxisName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetInputVectorAxisValue(FKey InputAxisKey) const;  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) APawn* GetInstigator() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) AController* GetInstigatorController() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLifeSpan() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<ENetRole> GetLocalRole() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOverlappingActors(TArray<AActor*>& OverlappingActors, TSubclassOf<AActor> ClassFilter) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOverlappingComponents(TArray<UPrimitiveComponent*>& OverlappingComponents) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetOwner() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetParentActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UChildActorComponent* GetParentComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<ENetRole> GetRemoteRole() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSquaredDistanceTo(AActor* OtherActor) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSquaredHorizontalDistanceTo(AActor* OtherActor) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) bool GetTickableWhenPaused();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetTransform() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetVelocity() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetVerticalDistanceTo(AActor* OtherActor) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasAuthority() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsActorBeingDestroyed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsActorTickEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsChildActor() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOverlappingActor(AActor* Other) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void K2_AddActorLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_AddActorLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_AddActorLocalTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xBD
    UFUNCTION(BlueprintCallable) void K2_AddActorWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_AddActorWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_AddActorWorldTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xBD
    UFUNCTION(BlueprintCallable) void K2_AddActorWorldTransformKeepScale(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xBD
    UFUNCTION(BlueprintCallable) void K2_AttachRootComponentTo(USceneComponent* InParent, FName InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);  // parameters 0x12
    UFUNCTION(BlueprintCallable) void K2_AttachRootComponentToActor(AActor* InParentActor, FName InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);  // parameters 0x12
    UFUNCTION(BlueprintCallable) void K2_AttachToActor(AActor* ParentActor, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void K2_DestroyActor();
    UFUNCTION(BlueprintCallable) void K2_DestroyComponent(UActorComponent* Component);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector K2_GetActorLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator K2_GetActorRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UActorComponent*> K2_GetComponentsByClass(TSubclassOf<UActorComponent> ComponentClass) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) USceneComponent* K2_GetRootComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void K2_OnBecomeViewTarget(APlayerController* PC);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void K2_OnEndViewTarget(APlayerController* PC);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void K2_OnReset();
    UFUNCTION(BlueprintCallable) bool K2_SetActorLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x9A
    UFUNCTION(BlueprintCallable) bool K2_SetActorLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xA6
    UFUNCTION(BlueprintCallable) void K2_SetActorRelativeLocation(FVector NewRelativeLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_SetActorRelativeRotation(FRotator NewRelativeRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_SetActorRelativeTransform(const FTransform& NewRelativeTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xBD
    UFUNCTION(BlueprintCallable) bool K2_SetActorRotation(FRotator NewRotation, bool bTeleportPhysics);  // parameters 0xE
    UFUNCTION(BlueprintCallable) bool K2_SetActorTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xBE
    UFUNCTION(BlueprintCallable) bool K2_TeleportTo(FVector DestLocation, FRotator DestRotation);  // parameters 0x19
    UFUNCTION(BlueprintCallable) UMaterialInstanceDynamic* MakeMIDForMaterial(UMaterialInterface* Parent);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void MakeNoise(float Loudness, APawn* NoiseInstigator, FVector NoiseLocation, float MaxRange, FName Tag);  // parameters 0x28
    UFUNCTION() void OnRep_AttachmentReplication();
    UFUNCTION() void OnRep_Instigator();
    UFUNCTION() void OnRep_Owner();
    UFUNCTION() void OnRep_ReplicateMovement();
    UFUNCTION() void OnRep_ReplicatedMovement();
    UFUNCTION(BlueprintCallable) void PrestreamTextures(float Seconds, bool bEnableStreaming, int32 CinematicTextureGroups);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorBeginCursorOver();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorBeginOverlap(AActor* OtherActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorEndCursorOver();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorEndOverlap(AActor* OtherActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorOnClicked(FKey ButtonPressed);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActorOnReleased(FKey ButtonReleased);  // parameters 0x18
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveDestroyed();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xC8
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceivePointDamage(float Damage, UDamageType* DamageType, FVector HitLocation, FVector HitNormal, UPrimitiveComponent* HitComponent, FName BoneName, FVector ShotFromDirection, AController* InstigatedBy, AActor* DamageCauser, const FHitResult& HitInfo);  // parameters 0xE0
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveRadialDamage(float DamageReceived, UDamageType* DamageType, FVector Origin, const FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0xB8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetActorEnableCollision(bool bNewActorEnableCollision);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetActorHiddenInGame(bool bNewHidden);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetActorRelativeScale3D(FVector NewRelativeScale);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetActorScale3D(FVector NewScale3D);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetActorTickEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetActorTickInterval(float TickInterval);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAutoDestroyWhenFinished(bool bVal);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLifeSpan(float InLifespan);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetNetDormancy(TEnumAsByte<ENetDormancy> NewDormancy);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetOwner(AActor* NewOwner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetReplicateMovement(bool bInReplicateMovement);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void SetReplicates(bool bInReplicates);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTickableWhenPaused(bool bTickableWhenPaused);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SnapRootComponentTo(AActor* InParentActor, FName InSocketName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TearOff();
    UFUNCTION(BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool WasRecentlyRendered(float Tolerance) const;  // parameters 0x5

    // Virtual functions that start here:
    //   AddTickPrerequisiteActor, AddTickPrerequisiteComponent, ApplyWorldOffset, BecomeViewTarget
    //   BeginPlay, CalcCamera, CalculateComponentsBoundingBoxInLocalSpace, CanBeBaseForCharacter
    //   CheckStillInWorld, ClearCrossLevelReferences, DestroyNetworkActorHandled, Destroyed, DisableInput
    //   DispatchPhysicsCollisionHit, DisplayDebug, EnableInput, EndPlay, EndViewTarget, FellOutOfWorld
    //   FindComponentByClass, ForceNetRelevant, ForceNetUpdate, GatherCurrentMovement
    //   GetActorEyesViewPoint, GetComponentsBoundingBox, GetComponentsBoundingCylinder
    //   GetComponentsCollisionResponseToChannel, GetDefaultAttachComponent, GetHumanReadableName
    //   GetLastRenderTime, GetLifeSpan, GetNetConnection, GetNetDormancy, GetNetOwner, GetNetOwningPlayer
    //   GetNetPriority, GetReplayPriority, GetSimpleCollisionCylinder, GetTargetLocation, GetVelocity
    //   HasActiveCameraComponent, HasActivePawnControlCameraComponent, HasLocalNetOwner, HasNetOwner
    //   InternalTakePointDamage, InternalTakeRadialDamage, InvalidateLightingCacheDetailed, IsAttachedTo
    //   IsBasedOnActor, IsComponentRelevantForNavigation, IsLevelBoundsRelevant, IsNetRelevantFor
    //   IsRelevancyOwnerFor, IsReplayRelevantFor, IsReplicationPausedForConnection
    //   IsRootComponentCollisionRegistered, K2_DestroyActor, LifeSpanExpired, MarkComponentsAsPendingKill
    //   NotifyActorBeginCursorOver, NotifyActorBeginOverlap, NotifyActorEndCursorOver
    //   NotifyActorEndOverlap, NotifyActorOnClicked, NotifyActorOnInputTouchBegin
    //   NotifyActorOnInputTouchEnd, NotifyActorOnInputTouchEnter, NotifyActorOnInputTouchLeave
    //   NotifyActorOnReleased, NotifyHit, OnActorChannelOpen, OnConstruction, OnNetCleanup
    //   OnRep_AttachmentReplication, OnRep_Instigator, OnRep_Owner, OnRep_ReplicateMovement
    //   OnRep_ReplicatedMovement, OnReplicationPausedChanged, OnSerializeNewActor
    //   OnSubobjectCreatedFromReplication, OnSubobjectDestroyFromReplication, OutsideWorldBounds
    //   PostActorCreated, PostInitializeComponents, PostNetInit, PostNetReceiveLocationAndRotation
    //   PostNetReceivePhysicState, PostNetReceiveRole, PostNetReceiveVelocity, PostRegisterAllComponents
    //   PostRenderFor, PostUnregisterAllComponents, PreInitializeComponents, PreRegisterAllComponents
    //   PreReplication, PreReplicationForReplay, PrestreamTextures, RegisterActorTickFunctions
    //   RegisterAllComponents, RemoveTickPrerequisiteActor, RemoveTickPrerequisiteComponent
    //   ReplicateSubobjects, ReregisterAllComponents, RerunConstructionScripts, Reset, RewindForReplay
    //   SetActorHiddenInGame, SetLifeSpan, SetOwner, SetReplicateMovement, ShouldTickIfViewportsOnly
    //   TakeDamage, TearOff, TeleportSucceeded, TeleportTo, Tick, TickActor, TornOff
    //   UnregisterAllComponents, UseShortConnectTimeout
};
