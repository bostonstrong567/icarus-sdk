// /Script/Engine.ActorComponent
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Components/ActorComponent.h

UCLASS(Abstract, Config=Engine)
class UActorComponent : public UObject, public IInterface_AssetUserData
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) FActorComponentTickFunction PrimaryComponentTick;  // 0x0030, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> ComponentTags;  // 0x0060, size 0x10
    uint8 : 1 bAllowAnyoneToDestroyMe;  // 0x0089, not reflected
    uint8 : 1 bAllowConcurrentTick;  // 0x0089, not reflected
    uint8 : 1 bAutoRegister;  // 0x0089, not reflected
    uint8 : 1 bNeverNeedsRenderUpdate;  // 0x0089, not reflected
    uint8 : 1 bTickInEditor;  // 0x0089, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAutoActivate : 1;  // 0x0089, mask 0x80
    uint8 : 1 bNavigationRelevant;  // 0x008A, not reflected
    uint8 : 1 bWantsInitializeComponent;  // 0x008A, not reflected
    UPROPERTY(EditAnywhere) uint8 bEditableWhenInherited : 1;  // 0x008A, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIsEditorOnly : 1;  // 0x008A, mask 0x20
    UPROPERTY() EComponentCreationMethod CreationMethod;  // 0x008C, size 0x1
    UPROPERTY(BlueprintAssignable) FActorComponentActivatedSignature OnComponentActivated;  // 0x008D, size 0x1
    UPROPERTY(BlueprintAssignable) FActorComponentDeactivateSignature OnComponentDeactivated;  // 0x008E, size 0x1
protected:
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x0070, size 0x10
    uint8 : 1 bPhysicsStateCreated;  // 0x0088, not reflected
    uint8 : 1 bRegistered;  // 0x0088, not reflected
    uint8 : 1 bRenderStateCreated;  // 0x0088, not reflected
    UPROPERTY() uint8 bNetAddressable : 1;  // 0x0088, mask 0x08
    uint8 : 1 bAllowReregistration;  // 0x0089, not reflected
    UPROPERTY(EditAnywhere, Config) uint8 bCanEverAffectNavigation : 1;  // 0x008A, mask 0x08
private:
    int32 MarkedForEndOfFrameUpdateArrayIndex;  // 0x0080, not reflected
    UPROPERTY() int32 UCSSerializationIndex;  // 0x0084, size 0x4
    uint8 : 1 bRenderDynamicDataDirty;  // 0x0088, not reflected
    uint8 : 1 bRenderStateDirty;  // 0x0088, not reflected
    uint8 : 1 bRenderTransformDirty;  // 0x0088, not reflected
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) uint8 bReplicates : 1;  // 0x0088, mask 0x10
    uint8 : 1 bRoutedPostRename;  // 0x0089, not reflected
    uint8 : 1 bHasBeenCreated;  // 0x008A, not reflected
    uint8 : 1 bHasBeenInitialized;  // 0x008A, not reflected
    UPROPERTY(Replicated, ReplicatedUsing, Transient) uint8 bIsActive : 1;  // 0x008A, mask 0x01
    uint8 : 1 bHasBegunPlay;  // 0x008B, not reflected
    uint8 : 1 bIsBeingDestroyed;  // 0x008B, not reflected
    uint8 : 1 bIsNetStartupComponent;  // 0x008B, not reflected
    uint8 : 1 bMarkedForPreEndOfFrameSync;  // 0x008B, not reflected
    uint8 : 1 bTickFunctionsRegistered;  // 0x008B, not reflected
    uint8 : 2 MarkedForEndOfFrameUpdateState;  // 0x008B, not reflected
    UPROPERTY() TArray<FSimpleMemberReference> UCSModifiedProperties;  // 0x0090, size 0x10
    AActor * OwnerPrivate;  // 0x00A0, not reflected
    UWorld * WorldPrivate;  // 0x00A8, not reflected
public:
    UFUNCTION(BlueprintCallable) void Activate(bool bReset);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void AddTickPrerequisiteActor(AActor* PrerequisiteActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ComponentHasTag(FName Tag) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void Deactivate();
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetComponentTickInterval() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) AActor* GetOwner() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsActive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsBeingDestroyed() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsComponentTickEnabled() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void K2_DestroyComponent(UObject* Object);  // parameters 0x8
    UFUNCTION() void OnRep_IsActive();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveTickPrerequisiteActor(AActor* PrerequisiteActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveTickPrerequisiteComponent(UActorComponent* PrerequisiteComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetActive(bool bNewActive, bool bReset);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void SetAutoActivate(bool bNewAutoActivate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetComponentTickEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetComponentTickInterval(float TickInterval);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetComponentTickIntervalAndCooldown(float TickInterval);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetIsReplicated(bool ShouldReplicate);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTickableWhenPaused(bool bTickableWhenPaused);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleActive();

    // Virtual functions that start here:
    //   Activate, AddTickPrerequisiteActor, AddTickPrerequisiteComponent, AdditionalStatObject
    //   ApplyWorldOffset, BeginPlay, CreateRenderState_Concurrent, Deactivate, DestroyComponent
    //   DestroyRenderState_Concurrent, EndPlay, GetComponentClassCanReplicate, GetComponentInstanceData
    //   GetReadableName, HasValidPhysicsState, InitializeComponent, InvalidateLightingCacheDetailed
    //   IsComponentTickEnabled, IsNavigationRelevant, IsReadyForOwnerToAutoDestroy
    //   OnActorEnableCollisionChanged, OnComponentCreated, OnComponentDestroyed, OnCreatePhysicsState
    //   OnDestroyPhysicsState, OnEndOfFrameUpdateDuringTick, OnPreEndOfFrameSync, OnRegister
    //   OnRep_IsActive, OnUnregister, PreReplication, RegisterComponentTickFunctions
    //   RemoveTickPrerequisiteActor, RemoveTickPrerequisiteComponent, ReplicateSubobjects
    //   RequiresGameThreadEndOfFrameRecreate, RequiresGameThreadEndOfFrameUpdates
    //   RequiresPreEndOfFrameSync, SendRenderDynamicData_Concurrent, SendRenderTransform_Concurrent
    //   SetActive, SetAutoActivate, SetComponentTickEnabled, SetComponentTickEnabledAsync, ShouldActivate
    //   ShouldCreatePhysicsState, ShouldCreateRenderState, TickComponent, ToggleActive
    //   UninitializeComponent, UpdateComponentToWorld
};
