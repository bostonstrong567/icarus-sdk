// /Game/BP/Player/BP_PlayerBuildingPlacement.BP_PlayerBuildingPlacement_C
// Derives from: UActorComponent > UObject
// size 0x711, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_PlayerBuildingPlacement_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BuildingVariation;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TSubclassOf<ABP_Building_Base_C> ClassToBuild;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* GhostBuildingActor;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FreespaceMode;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_Grid_Base_C* AutoFocusedGrid;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_Grid_Base_C* RemoteFocusedGrid;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool BuildingAlternateRotation;  // 0x00E8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 BuildingRotationalOffsetState;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FTransform BuildingGridSnappedCache;  // 0x00F0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform LockedInGridCache;  // 0x0120, size 0x30
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool BuildingBlocked;  // 0x0150, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FTransform BuildingNewGridCache;  // 0x0160, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BuildingWasCapsuleHit;  // 0x0190, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LandscapeWasTraceHit;  // 0x0191, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LongTraceDownWasHit;  // 0x0192, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult BuildingCapsuleHitCache;  // 0x0194, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult LandscapeTraceHit;  // 0x021C, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult LongTraceDownHitCache;  // 0x02A4, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BuildingLockedStartTime;  // 0x032C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<RotationalDirections> LockedInComparison;  // 0x0330, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<RotationalDirections> CondensedFrameTest;  // 0x0331, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BuildingLockRequiredTime;  // 0x0334, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<RotationalDirections> LastFullyLockedInValue;  // 0x0338, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TempVariation;  // 0x033C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BuildingRotationalOffsetStateMax;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Building_Base_C* OldBuilding;  // 0x0348, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<EBuildingResourceType>, FItemsStaticRowHandle> WallVariations;  // 0x0350, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<EBuildingResourceType>, FItemsStaticRowHandle> FrameVariations;  // 0x03A0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<EBuildingResourceType>, FItemsStaticRowHandle> AngledWallVariations;  // 0x03F0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<EBuildingResourceType>, FItemsStaticRowHandle> FloorVariations;  // 0x0440, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<EBuildingResourceType>, FItemsStaticRowHandle> RampVariations;  // 0x0490, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TEnumAsByte<EBuildingResourceType>, FItemsStaticRowHandle> BeamVariations;  // 0x04E0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) BuildingVariationsStructure BuildingVariantStruct;  // 0x0530, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSoftClassPtr<ABuildingBase>, int32> buildingClassToTypeIndex;  // 0x0540, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<TSoftClassPtr<ABuildingBase>, int32> buildingClassToVariantIndex;  // 0x0590, size 0x50
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool DisableGridAutoFocus;  // 0x05E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ManualNewGridOffset;  // 0x05E4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform InterpolatedGridSnappedCache;  // 0x05F0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform InterpolatedNewGridCache;  // 0x0620, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpolationSpeed;  // 0x0650, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBuildingPiecesRowHandle, FItemsStaticRowHandle> BuildingPieceToItemStatic;  // 0x0658, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FBuildingPiecesRowHandle, int32> BuildingPieceToVarient;  // 0x06A8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText UpgradeFailureMessage;  // 0x06F8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BuildingOutOfBoundsBlocked;  // 0x0710, size 0x1

    UFUNCTION(BlueprintCallable) void AddReplacementBuilding(ABP_Grid_Base_C* FocusedGrid, FTransform WorldSpaceTransform, TSubclassOf<ABP_Building_Base_C> DesiredClass, ABP_Building_Base_C* OldBuilding, FItemData ItemData);  // parameters 0x240
    UFUNCTION(BlueprintCallable) void AttemptToPlaceBuilding();
    UFUNCTION(BlueprintCallable) void AttemptToSwapBuilding(ABP_Building_Base_C* BuildingToSwap, TEnumAsByte<EBuildingResourceType> ResourceType, bool& Success);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void BuildCheck(TSubclassOf<ABP_Building_Base_C> ToBuild, bool& Success);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void CacheBuildingItemStaticLookup();
    UFUNCTION(BlueprintCallable) void CacheBuildingTypeLookup(TSoftClassPtr<ABP_Building_Base_C> BuildingClassSoftRef, int32& BuildingVariantsStructTypeIndex);  // parameters 0x2C
    UFUNCTION(BlueprintCallable) void CheckBuildBlockerSubSystem(AActor* Actor, bool& Blocked);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void ClearBuildingCaches();
    UFUNCTION(BlueprintCallable) void ClientBuildingFocusChange(AIcarusActor* FocuedItem);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClientLowerGridOffset();
    UFUNCTION(BlueprintCallable) void ClientRaiseGridOffset();
    UFUNCTION(BlueprintCallable) void ConfigureGhostActor();
    UFUNCTION(BlueprintCallable) void DebugWindDamageCycle();
    UFUNCTION(BlueprintCallable) void DebugWindDamgeSingle();
    UFUNCTION() void ExecuteUbergraph_BP_PlayerBuildingPlacement(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindItemInInventory(const FItemsStaticRowHandle& Item, bool& Found);  // parameters 0x19
    UFUNCTION(BlueprintCallable) TEnumAsByte<EBuildingType> GetBuildingType(ABP_Building_Base_C* Building, bool& Success);  // parameters 0xA
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLocalPlayerView(FVector& Location, FRotator& Rotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GhostActorSlowTick();
    UFUNCTION(BlueprintCallable) void HandleInvalidPlacementText(FText InvalidReason, bool InvalidPlacement);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void InjectPlayerDesiredRotations(FTransform NewParam1, FTransform& NewParam);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void InvalidPlacementText(bool InvalidPlacement, FText InvalidReason);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void IsHitNearBuilding(FHitResult Hit, bool& NewParam1);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void OnLoaded_4D0287A642DEED0DCA1218A46059E2A2(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_9489F6834FA9BA550AC52889E53D7474(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_GhostBuildingActor();
    UFUNCTION(BlueprintCallable) void PerformBuildingTrace();
    UFUNCTION(BlueprintCallable) void ProcessBuildingHit(FHitResult HitStruct, ABP_Building_Base_C* HitBuilding, TSubclassOf<ABP_Building_Base_C> ClassToBuild);  // parameters 0x98
    UFUNCTION(BlueprintCallable) void ProcessGroundHit(const FHitResult& Hit, TSubclassOf<ABP_Building_Base_C> ClassToBuild, bool FreespaceBuilding);  // parameters 0x91
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RelativeAxisLock(TEnumAsByte<RotationalDirections> RelativeRotationalDirection, bool& Locked);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void RemoteFocusDelayedClear(TSubclassOf<UObject> Class);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveItemFromInventory(const FItemsStaticRowHandle& Item, FItemData& RemovedItem);  // parameters 0x208
    UFUNCTION(BlueprintCallable, Client, Reliable) void ResetClientHeight();
    UFUNCTION(BlueprintCallable) void RestrictedServerClearBuildingCaches();
    UFUNCTION(BlueprintCallable) void RestrictedServerProcessBuildingHit(FHitResult HitStruct, ABP_Building_Base_C* HitBuilding, TSubclassOf<ABP_Building_Base_C> ClassToBuild);  // parameters 0x98
    UFUNCTION(BlueprintCallable) void RestrictedServerProcessGroundHit(const FHitResult& Hit, TSubclassOf<ABP_Building_Base_C> ClassToBuild, bool FreespaceBuilding);  // parameters 0x91
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerAddNewBuilding(ABP_Grid_Base_C* FocusedGrid, FTransform WorldSpaceTransform, TSubclassOf<ABP_Building_Base_C> DesiredClass);  // parameters 0x48
    UFUNCTION(BlueprintCallable) void ServerBrieflyDisableGridAutoFocus();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerClearBuildingCaches();
    UFUNCTION(BlueprintCallable) void ServerManuallyReenableGridAutoFocus();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerProcessBuildingHit(FHitResult HitStruct, ABP_Building_Base_C* HitBuilding, TSubclassOf<ABP_Building_Base_C> ClassToBuild);  // parameters 0x98
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerProcessGroundHit(const FHitResult& Hit, TSubclassOf<ABP_Building_Base_C> ClassToBuild, bool FreespaceBuilding);  // parameters 0x91
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerSetGhostClass(TSubclassOf<ABP_Building_Base_C> NewClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerSetGridOffset(FVector NewGridOffset);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerSetRotationMode(int32 InRotationMode);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ServerSpawnNewGhostBuilding(TSubclassOf<ABP_Building_Base_C> New_Building_Class);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerSpawnNewGridWithBuilding(FTransform NewGridTrans, TSubclassOf<ABP_Building_Base_C> DesiredClass);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void SetBuildingBlocked(bool IsBlocked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBuildingVariation(int32 Variation);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupBuilding(ABP_Building_Base_C* Building, ABP_Building_Base_C* OldBuilding);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ShapeTraceSurfaceNormalFix(FHitResult Hit, FHitResult& FixedNormalHit, bool& Success);  // parameters 0x111
    UFUNCTION(BlueprintCallable) void TempGhostSet();
    UFUNCTION(BlueprintCallable) void ToggleRotationMode();
    UFUNCTION(BlueprintCallable) void UpdateInterpolatedPlacementTransforms();
    UFUNCTION(BlueprintCallable) void Walltick_helper();  // named "Walltick helper"
    UFUNCTION(BlueprintCallable) void debug_add_wind_damage_to_all_buildings();  // named "debug add wind damage to all buildings"
    UFUNCTION(BlueprintCallable) void debug_spawn_frame_cube();  // named "debug spawn frame cube"
    UFUNCTION(BlueprintCallable) void debug_spawn_rows_of_frames__then_walls();  // named "debug spawn rows of frames, then walls"
};
