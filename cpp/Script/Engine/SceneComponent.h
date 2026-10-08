// /Script/Engine.SceneComponent
// Derives from: UActorComponent > UObject
// size 0x200, declared in Engine/Source/Runtime/Engine/Classes/Components/SceneComponent.h

UCLASS(Config=Engine)
class USceneComponent : public UActorComponent
{
public:
    UPROPERTY(Transient) TWeakObjectPtr<APhysicsVolume> PhysicsVolume;  // 0x00B8, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing, Instanced) USceneComponent* AttachParent;  // 0x00C0, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing) FName AttachSocketName;  // 0x00C8, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing, Transient) TArray<USceneComponent*> AttachChildren;  // 0x00D0, size 0x10
    UPROPERTY(Transient) TArray<USceneComponent*> ClientAttachedChildren;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FVector RelativeLocation;  // 0x011C, size 0xC
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FRotator RelativeRotation;  // 0x0128, size 0xC
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, Interp, BlueprintReadOnly) FVector RelativeScale3D;  // 0x0134, size 0xC
    UPROPERTY() FVector ComponentVelocity;  // 0x0140, size 0xC
    UPROPERTY(Transient) uint8 bComponentToWorldUpdated : 1;  // 0x014C, mask 0x01
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) uint8 bAbsoluteLocation : 1;  // 0x014C, mask 0x04
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) uint8 bAbsoluteRotation : 1;  // 0x014C, mask 0x08
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) uint8 bAbsoluteScale : 1;  // 0x014C, mask 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) uint8 bVisible : 1;  // 0x014C, mask 0x20
    UPROPERTY(Replicated, Transient) uint8 bShouldBeAttached : 1;  // 0x014C, mask 0x40
    UPROPERTY(Replicated, Transient) uint8 bShouldSnapLocationWhenAttached : 1;  // 0x014C, mask 0x80
    UPROPERTY(Replicated, Transient) uint8 bShouldSnapRotationWhenAttached : 1;  // 0x014D, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bShouldUpdatePhysicsVolume : 1;  // 0x014D, mask 0x02
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) uint8 bHiddenInGame : 1;  // 0x014D, mask 0x04
    UPROPERTY() uint8 bBoundsChangeTriggersStreamingDataRebuild : 1;  // 0x014D, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseAttachParentBound : 1;  // 0x014D, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EComponentMobility> Mobility;  // 0x014F, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EDetailMode> DetailMode;  // 0x0150, size 0x1
    UPROPERTY(BlueprintAssignable) FPhysicsVolumeChanged PhysicsVolumeChangedDelegate;  // 0x0151, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    const FLevelCollection * CachedLevelCollection;  // 0x00B0
    FName NetOldAttachSocketName;  // 0x00F0, private
    USceneComponent * NetOldAttachParent;  // 0x00F8, private
    FBoxSphereBounds Bounds;  // 0x0100
    uint8 : 1 bSkipUpdateOverlaps;  // 0x014C, private
    uint8 : 1 bDisableDetachmentUpdateOverlaps;  // 0x014D, protected
    uint8 : 1 bWantsOnUpdateTransform;  // 0x014D, protected
    uint8 : 1 bNetUpdateTransform;  // 0x014D, private
    uint8 : 1 bNetUpdateAttachment;  // 0x014E, private
    FTransformUpdated TransformUpdated;  // 0x0158
    TArray<FScopedMovementUpdate *,TSizedDefaultAllocator<32> > ScopedMovementStack;  // 0x0170, private
    FRotationConversionCache WorldRotationCache;  // 0x0180, private
    FRotationConversionCache RelativeRotationCache;  // 0x01A0, private
    FTransform ComponentToWorld;  // 0x01C0, private
    FIsRootComponentChanged IsRootComponentChanged;  // 0x01F0

    UFUNCTION(BlueprintCallable) void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesSocketExist(FName InSocketName) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FName> GetAllSocketNames() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) USceneComponent* GetAttachParent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetAttachSocketName() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) USceneComponent* GetChildComponent(int32 ChildIndex) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetChildrenComponents(bool bIncludeAllDescendants, TArray<USceneComponent*>& Children) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetComponentVelocity() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetForwardVector() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumChildrenComponents() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetParentComponents(TArray<USceneComponent*>& Parents) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) APhysicsVolume* GetPhysicsVolume() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetRelativeTransform() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetRightVector() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetShouldUpdatePhysicsVolume() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetSocketLocation(FName InSocketName) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FQuat GetSocketQuaternion(FName InSocketName) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetSocketRotation(FName InSocketName) const;  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetSocketTransform(FName InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace) const;  // parameters 0x40
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetUpVector() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAnySimulatingPhysics() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSimulatingPhysics(FName BoneName) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsVisible() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void K2_AddLocalOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_AddLocalRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_AddLocalTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xBD
    UFUNCTION(BlueprintCallable) void K2_AddRelativeLocation(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_AddRelativeRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_AddWorldOffset(FVector DeltaLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_AddWorldRotation(FRotator DeltaRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_AddWorldTransform(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xBD
    UFUNCTION(BlueprintCallable) void K2_AddWorldTransformKeepScale(const FTransform& DeltaTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xBD
    UFUNCTION(BlueprintCallable) bool K2_AttachTo(USceneComponent* InParent, FName InSocketName, TEnumAsByte<EAttachLocation> AttachType, bool bWeldSimulatedBodies);  // parameters 0x13
    UFUNCTION(BlueprintCallable) bool K2_AttachToComponent(USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector K2_GetComponentLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator K2_GetComponentRotation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector K2_GetComponentScale() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform K2_GetComponentToWorld() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable) void K2_SetRelativeLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_SetRelativeLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xA5
    UFUNCTION(BlueprintCallable) void K2_SetRelativeRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_SetRelativeTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xBD
    UFUNCTION(BlueprintCallable) void K2_SetWorldLocation(FVector NewLocation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_SetWorldLocationAndRotation(FVector NewLocation, FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xA5
    UFUNCTION(BlueprintCallable) void K2_SetWorldRotation(FRotator NewRotation, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0x99
    UFUNCTION(BlueprintCallable) void K2_SetWorldTransform(const FTransform& NewTransform, bool bSweep, FHitResult& SweepHitResult, bool bTeleport);  // parameters 0xBD
    UFUNCTION() void OnRep_AttachChildren();
    UFUNCTION() void OnRep_AttachParent();
    UFUNCTION() void OnRep_AttachSocketName();
    UFUNCTION() void OnRep_Transform();
    UFUNCTION() void OnRep_Visibility(bool OldValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ResetRelativeTransform();
    UFUNCTION(BlueprintCallable) void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetMobility(TEnumAsByte<EComponentMobility> NewMobility);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRelativeScale3D(FVector NewScale3D);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetWorldScale3D(FVector NewScale);  // parameters 0xC
    UFUNCTION(BlueprintCallable) bool SnapTo(USceneComponent* InParent, FName InSocketName);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void ToggleVisibility(bool bPropagateToChildren);  // parameters 0x1

    // Virtual functions that start here:
    //   CalcBoundingCylinder, CalcBounds, CalcLocalBounds, CanAttachAsChild, CanHaveStaticMobility
    //   DetachFromComponent, DetachFromParent, DoesSocketExist, GetCollisionEnabled, GetCollisionObjectType
    //   GetCollisionResponseToChannel, GetCollisionResponseToChannels, GetComponentVelocity
    //   GetPlacementExtent, GetSocketLocation, GetSocketQuaternion, GetSocketRotation, GetSocketTransform
    //   HasAnySockets, IsAnySimulatingPhysics, IsPrecomputedLightingValid, IsSimulatingPhysics, IsVisible
    //   IsVisibleInEditor, IsWorldGeometry, MoveComponentImpl, OnAttachmentChanged, OnChildAttached
    //   OnChildDetached, OnHiddenInGameChanged, OnUpdateTransform, OnVisibilityChanged
    //   PropagateLightingScenarioChange, QuerySupportedSockets, SetMobility, ShouldCollideWhenPlacing
    //   UpdateBounds, UpdateOverlapsImpl, UpdatePhysicsVolume
};
