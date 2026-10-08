// /Script/Engine.ActorComponent
// Derives from: UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Components/ActorComponent.h

UCLASS(Abstract, Config=Engine)
class UActorComponent : public UObject, public IInterface_AssetUserData
{
public:
    UPROPERTY(EditAnywhere) FActorComponentTickFunction PrimaryComponentTick;  // 0x0030, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> ComponentTags;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x0070, size 0x10
    UPROPERTY() int32 UCSSerializationIndex;  // 0x0084, size 0x4
    UPROPERTY() uint8 bNetAddressable : 1;  // 0x0088, mask 0x08
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) uint8 bReplicates : 1;  // 0x0088, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAutoActivate : 1;  // 0x0089, mask 0x80
    UPROPERTY(Replicated, ReplicatedUsing, Transient) uint8 bIsActive : 1;  // 0x008A, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bEditableWhenInherited : 1;  // 0x008A, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bCanEverAffectNavigation : 1;  // 0x008A, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIsEditorOnly : 1;  // 0x008A, mask 0x20
    UPROPERTY() EComponentCreationMethod CreationMethod;  // 0x008C, size 0x1
    UPROPERTY(BlueprintAssignable) FActorComponentActivatedSignature OnComponentActivated;  // 0x008D, size 0x1
    UPROPERTY(BlueprintAssignable) FActorComponentDeactivateSignature OnComponentDeactivated;  // 0x008E, size 0x1
    UPROPERTY() TArray<FSimpleMemberReference> UCSModifiedProperties;  // 0x0090, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    int32 MarkedForEndOfFrameUpdateArrayIndex;  // 0x0080, private
    uint8 : 1 bRegistered;  // 0x0088, protected
    uint8 : 1 bRenderStateCreated;  // 0x0088, protected
    uint8 : 1 bPhysicsStateCreated;  // 0x0088, protected
    uint8 : 1 bRenderStateDirty;  // 0x0088, private
    uint8 : 1 bRenderTransformDirty;  // 0x0088, private
    uint8 : 1 bRenderDynamicDataDirty;  // 0x0088, private
    uint8 : 1 bRoutedPostRename;  // 0x0089, private
    uint8 : 1 bAutoRegister;  // 0x0089
    uint8 : 1 bAllowReregistration;  // 0x0089, protected
    uint8 : 1 bTickInEditor;  // 0x0089
    uint8 : 1 bNeverNeedsRenderUpdate;  // 0x0089
    uint8 : 1 bAllowConcurrentTick;  // 0x0089
    uint8 : 1 bAllowAnyoneToDestroyMe;  // 0x0089
    uint8 : 1 bNavigationRelevant;  // 0x008A
    uint8 : 1 bWantsInitializeComponent;  // 0x008A
    uint8 : 1 bHasBeenCreated;  // 0x008A, private
    uint8 : 1 bHasBeenInitialized;  // 0x008A, private
    uint8 : 1 bHasBegunPlay;  // 0x008B, private
    uint8 : 1 bIsBeingDestroyed;  // 0x008B, private
    uint8 : 1 bTickFunctionsRegistered;  // 0x008B, private
    uint8 : 1 bIsNetStartupComponent;  // 0x008B, private
    uint8 : 2 MarkedForEndOfFrameUpdateState;  // 0x008B, private
    uint8 : 1 bMarkedForPreEndOfFrameSync;  // 0x008B, private
    AActor * OwnerPrivate;  // 0x00A0, private
    UWorld * WorldPrivate;  // 0x00A8, private

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
