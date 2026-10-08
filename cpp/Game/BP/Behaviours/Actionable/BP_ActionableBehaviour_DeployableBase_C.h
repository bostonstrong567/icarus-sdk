// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C
// Derives from: UBP_ActionableBehaviour_SimplePlaceWithVariants_C > UBP_ActionableBehaviour_SimplePlace_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xC70, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_DeployableBase_C : public UBP_ActionableBehaviour_SimplePlaceWithVariants_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_DeployablePreview_C* PreviewActor;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CurrentPlacementValid;  // 0x0490, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDeployableData DeployableData;  // 0x0498, size 0xA8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UDeployableComponent* DeployableComponent;  // 0x0540, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform CachedPreviewTransform;  // 0x0550, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpwardsFacingLimit;  // 0x0580, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsRotating;  // 0x0584, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform PlayerPlacementTransform;  // 0x0590, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator DesiredLocalDeployableRotation;  // 0x05C0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform DeployablePlacementTransform;  // 0x05D0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* FoundationActor;  // 0x0600, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SnapRotationToBuildingGrid;  // 0x0608, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AngleSnapAmount;  // 0x060C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> ClassToSnapTo;  // 0x0610, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ActorSnapValid;  // 0x0618, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SnapActor;  // 0x0620, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ItemData;  // 0x0628, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SnapSocket;  // 0x0818, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugDeployment;  // 0x0820, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData SpawnedItem;  // 0x0828, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult LastDeployAttemptTrace;  // 0x0A18, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_DeployFail;  // 0x0AA0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TriedToShowRadialMenu;  // 0x0AA8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 SelectedVariantIndex;  // 0x0AAC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDeployableSetup DeployableSetup;  // 0x0AB0, size 0x198
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SnapOverridePressed;  // 0x0C48, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftClassPtr<AActor>> BlacklistedFoundationClasses;  // 0x0C50, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsPreviewActorSheltered;  // 0x0C60, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPreviewActorOutsidePlaceOnly;  // 0x0C61, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DisableDeployableCollision;  // 0x0C62, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<ABP_DeployablePreview_C> PreviewClass;  // 0x0C68, size 0x8

    UFUNCTION(BlueprintCallable) void BlueprintDeploy(FTransform DeployTransform, AActor* FoundationActor, FItemData ItemData, int32 VarientIndex);  // parameters 0x22C
    UFUNCTION(BlueprintCallable) void ChangePreviewItem(int32 VariantIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void CheckValidPlacement(FHitResult InHit, bool& IsValidPlacement, FText& InvalidReason);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void CustomDeploymentCheck(AActor* HitActor, bool& ValidPlacement, FText& Reason);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void DEBUG_DisplayDeploymentFailureMessage(FString Message, float Duration);  // parameters 0x14
    UFUNCTION(BlueprintCallable) bool DoTrace(FHitResult& OutHit);  // parameters 0x89
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_DeployableBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindClosestSocketPointOnActor(AActor* InActor, TArray<FName>& SocketsAndTags, FVector Origin, UActorComponent*& OutComponent, FTransform& OutTransform, FName& OutSocket, bool& FoundPoint);  // parameters 0x69
    UFUNCTION(BlueprintCallable) void FindValidSocketOnActors(TArray<AActor*>& Actors, FVector TraceLocation, TArray<FName>& SocketsAndTags, bool& Found, FTransform& SocketTransform, AActor*& SnapActor, FName& SnapSocket);  // parameters 0x80
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetBoundsCollider(UBoxComponent*& BoundsCollider) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetContextMenuItems(TArray<FContextMenuItemData>& MenuItems);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetFoundationActorDepth(AActor* Foundation, int32& ActorDepth);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<TEnumAsByte<EObjectTypeQuery>> GetObjectTraceChannels() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetOwnerRotation(FRotator& OutRotation) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetPreviewActorOverlappingComponents(TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void GetPreviewMeshPlacement(FVector AttemptedPlacePosition, FVector PlacePositionNormal, AActor* HitFloorActor, FTransform& OutPreviewTransform, FName& OutSnapSocket, AActor*& OutSnapActor, bool& OutActorSnapValid);  // parameters 0x61
    UFUNCTION(BlueprintCallable) void GetPreviewStaticMeshAsset(int32 PreviewVariantIndex, TSoftObjectPtr<UStaticMesh>& StaticMeshAsset);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTraceDistance(float& TraceDistance);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTraceIgnoreActors(TArray<AActor*>& OutIgnoreActors);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void HandleInvalidPlacementText(bool InvalidPlacement, FText InvalidReason);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void InvalidPlacementText(bool ValidPlacement, FText InvalidReason);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool IsDestroyed(AActor* Actor);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsHitActorBlacklisted(AActor* HitActor, FHitResult Hit, bool& IsBlacklisted);  // parameters 0x91
    UFUNCTION(BlueprintCallable) void MenuItemSelected(FName ItemIdentifier, int32 ItemPayload);  // parameters 0xC
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_BeginRotationMode(FTransform DeployableTransform, FRotator RelativeRotation, FTransform PlayerTransform, AActor* FoundationActor);  // parameters 0x78
    UFUNCTION(BlueprintCallable) void OnActionCameraTraceHit(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void OnContextMenuSegmentHighlightChanged(UUMG_ContextMenu_Radial_Item_C* Segment);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnDeploy(ADeployable* SpawnedDeployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_948E897349D7ED52413C2997A58E4378(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_CEA16C5D424F96B896AF2BB339E5C750(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_F2A5421C4D141CEB2D751992D50E6C36(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_SelectedVariantIndex();
    UFUNCTION(BlueprintCallable) void OpenRadialMenu();
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) bool PerformLineTrace(FVector TraceStart, FVector TraceEnd, bool TraceComplex, TArray<AActor*>& IgnoreActors, FHitResult& OutHit);  // parameters 0xB9
    UFUNCTION(BlueprintCallable) void PlayDeployFailSound();
    UFUNCTION(BlueprintCallable) void PlayDeployedSound(ADeployable* Deployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void PreloadDeployables();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_BeginRotationMode(FHitResult Hit, FTransform Transform, FRotator PlayerRotation);  // parameters 0xCC
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_NotifyVariantChanged(int32 SelectedVariantIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_UpdateRotationState(bool IsRotating);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_ValidateAndDeploy(FHitResult InHit, FTransform DeployTransform, AActor* FoundationActor, FItemData ItemData, int32 VariantIndex);  // parameters 0x2BC
    UFUNCTION(BlueprintCallable) void ShouldActionCameraTrace(EActionableEventType ActionableType, EActionableTrigger ActionableTrigger, bool& ShouldTrace);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure) void ShouldConsume(bool& bConsume);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnPreviewMesh(int32 PreviewVariantIndex);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TickCameraTraceHit(FHitResult Hit, bool DidHit);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void TryDeploy(FHitResult InHit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void Update_Preview_Material(bool ValidPlacement);  // parameters 0x1, named "Update Preview Material"
    UFUNCTION(BlueprintCallable) void UpdateDeployableSetup();
    UFUNCTION(BlueprintCallable) void UpdateMeshPreview(FHitResult Hit, bool DidHit);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void UpdateMeshVisibility();
    UFUNCTION(BlueprintCallable) void UpdateReplicatedShelter();
    UFUNCTION(BlueprintCallable) void UpdateRotationState(bool IsRotating);  // parameters 0x1
};
