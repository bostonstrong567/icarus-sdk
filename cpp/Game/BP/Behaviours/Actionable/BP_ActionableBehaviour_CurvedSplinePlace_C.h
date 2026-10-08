// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_CurvedSplinePlace.BP_ActionableBehaviour_CurvedSplinePlace_C
// Derives from: UBP_ActionableBehaviour_SimplePlace_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x580, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_CurvedSplinePlace_C : public UBP_ActionableBehaviour_SimplePlace_C, public IAmmoDisplayInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_IcarusSplineActor_C* WorkingSpline;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TEnumAsByte<SplineTypes>> ToolTypeMap;  // 0x0478, size 0x50
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 ToolInt;  // 0x04C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<SplineTypes> SplineType;  // 0x04CC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESplinePointType> ToolSplinePointType;  // 0x04CD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<SplineTypes>, float> SplineTypeMaxDistance;  // 0x04D0, size 0x50
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TEnumAsByte<NewSplinePlacementRule> Snapping;  // 0x0520, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_SplinePlaced_Anchorable;  // 0x0528, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_SplinePlaced_Spline;  // 0x0530, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* FMODEvent_SplinePlaced_Deployable;  // 0x0538, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InspectorTraceRange;  // 0x0540, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum LimitInspectorToType;  // 0x0548, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SplineHighlightTimerHandle;  // 0x0558, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AResourceNetwork* FocusedNetwork;  // 0x0560, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_ResourceNetworkInspector_FullScreen_C* InspectorWidget;  // 0x0568, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* OwningItem;  // 0x0570, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* RemoveSplineAudio;  // 0x0578, size 0x8

    UFUNCTION(BlueprintCallable) void ActorIsLinkable(AIcarusActor* IcarusActor, bool& Linkable);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void Cleanup_Spline(bool CleanupWorkingSplineOnly);  // parameters 0x1, named "Cleanup Spline"
    UFUNCTION(BlueprintCallable) void ClearSplineNetworkHighlights();
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_CurvedSplinePlace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindSegmentFromComponent(ABP_IcarusSplineActor_C* SplineActor, UPrimitiveComponent* HitComponent, UBP_IcarusSplineSegment_C*& SplineSegment, int32& SegmentIndex, bool& Success);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) void GetClosestWorldAndLocalPointsOnSpline(USplineComponent* Spline, const FVector& WorldLocation, FVector& ClosestLocal, FVector& ClosestWorld);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void GetCurrentAmmoInfo(TSoftObjectPtr<UTexture2D>& AmmoIcon, FText& CurrentAmmo, FText& TotalAmmo, FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, FIcarusResourcesRowHandle& Resource, float& Percent);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void GetSplineConnectionPointFromActor(AActor* Actor, TEnumAsByte<SplineTypes> SplineType, FTransform& Transform);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void GetSplineStencilValue(bool bIsHovered, bool bIsFocused, bool bCorrectSplineType, const FIcarusResourcesEnum& Key, int32& StencilValue);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void HighlightPrimitive(UObject* Object, int32 StencilValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void HighlightTrace(AResourceNetwork*& HoveredNetwork);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void InspectorLineTrace();
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_PlayDisconnectAudio(FHitResult& Hit_Result);  // parameters 0x88
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlaySplinePointPlacedAudio(UFMODEvent* FMODEvent, FVector Location, TEnumAsByte<EPhysicalSurface> Surface);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void OnActionCameraTraceHit(FHitResult Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void OnDynamicWidgetDisplayed();
    UFUNCTION(BlueprintCallable) void OnMenuOpened();
    UFUNCTION(BlueprintCallable) void OnRep_Snapping();
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void Play_Disconnect_Audio(FHitResult& Hit_Result);  // parameters 0x88, named "Play Disconnect Audio"
    UFUNCTION(BlueprintCallable) void PlayNegativeFeedback();
    UFUNCTION(BlueprintCallable) void PlaySplinePointPlacedAudio(TEnumAsByte<ECurvedSplinePlaceContext> Context, FHitResult& Hit);  // parameters 0x8C
    UFUNCTION(BlueprintCallable) void ProcessLastSplinePoint(const FTransform& HitTransform, UBP_IcarusSplineSegment_C* SplineSegment, ABP_IcarusSplineActor_C* SplineActor);  // parameters 0x40
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerCleanupWorkingSpline();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerClearTracedSpline();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerUpdateSplinePointType(TEnumAsByte<ESplinePointType> ToolSplinePointType);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_ClientRequestHit(const FHitResult& Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable) void ShouldActionCameraTrace(EActionableEventType ActionableType, EActionableTrigger ActionableTrigger, bool& ShouldTrace);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void SplineAnchorableHitCheck(AActor* HitActor, bool& CanPlacePoint);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void TickCameraTraceHit(FHitResult Hit, bool DidHit);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void TickHighlight();
    UFUNCTION(BlueprintCallable) void Try_Link_As_Icarus_Actor(AActor* Actor, FHitResult& Hit);  // parameters 0x90, named "Try Link As Icarus Actor"
    UFUNCTION(BlueprintCallable) void UpdateSnapping(TEnumAsByte<NewSplinePlacementRule> Snapping);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateSplineNetworkHighlighting(AResourceNetwork* HoveredNetwork, AResourceNetwork* FocusedNetwork);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ValidPlacementCheck(FHitResult Hit, bool& Valid);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void WorldSpaceTooCloseToAnySpline(FVector WorldSpaceLocation, bool& Blocked);  // parameters 0xD
};
