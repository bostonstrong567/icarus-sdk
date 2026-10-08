// /Game/BP/Building/BP_Grid_Base.BP_Grid_Base_C
// Derives from: ABuildingGridBase > AIcarusActor > AActor > UObject
// size 0x748, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Grid_Base_C : public ABuildingGridBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_BuildingAudioComponent_C* BP_BuildingAudioComponent;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector GridSize;  // 0x0488, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> BuilldingsToAnchorReinit;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> BuildingsToPushHardStab;  // 0x04A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxBuildingSearchDistance;  // 0x04B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABuildingBase*> BuildingsToStartDestroy;  // 0x04C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FQueuesEmptied QueuesEmptied;  // 0x04D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Queued;  // 0x04E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AutomaticResumingDestructionEnabled;  // 0x04E1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> OnFireBuildings;  // 0x04E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> CurrentWindDamagedBuildings;  // 0x04F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> Buildings_to_Record;  // 0x0508, size 0x10, named "Buildings to Record"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Burn_Time_Remaining;  // 0x0518, size 0x4, named "Burn Time Remaining"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> ActiveOverweightBuilding;  // 0x0520, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DirtyTerrainChecks;  // 0x0530, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Sorted;  // 0x0531, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> WeatherChoiceInternalDirtiedBuildings;  // 0x0538, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> WeatherChoiceInternalBuffer;  // 0x0548, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<float, ActorArrayStruct> AltitudeMap_OLD;  // 0x0558, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<float, ActorArrayStruct> BuildingsByTier_OLD;  // 0x05A8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> BuildingsSelectedForWindDamage_OLD;  // 0x05F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> AscendingSortedBuildingTiers_OLD;  // 0x0608, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> DescendingSortedBuildingAltitudes;  // 0x0618, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> DescendingAltitudesQuartiles_OLD;  // 0x0628, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxBuildingSelection_OLD;  // 0x0638, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentAltitudeQuartile;  // 0x063C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BuildingCount_OLD;  // 0x0640, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentSelectionTierMaxIndex;  // 0x0644, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeatherSortingTierPercentage;  // 0x0648, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> StrippingBuildings;  // 0x0650, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> ReloadedBuildings;  // 0x0660, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TerrainAnchorValidTime;  // 0x0670, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WaitingForTerrainAnchor;  // 0x0674, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> UnzippableChain;  // 0x0678, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> UnzippableChainInternalWorking;  // 0x0688, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> UnzippableChainInternalBest;  // 0x0698, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DesiredUnzipCount;  // 0x06A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Building_Base_C*> UnzippableStarterBuildingBuffer;  // 0x06B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PerformingUnzip;  // 0x06C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastUnzipStormTier;  // 0x06C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UnzipCycleCounter;  // 0x06C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UnzipCycleMaxCount;  // 0x06CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastUnzipCountMultiplier;  // 0x06D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastUnzipDamageMultiplier;  // 0x06D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<ABP_Building_Base_C*, int32> PendingBuildingHealthUpdates;  // 0x06D8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAlterationsEnum> MBuildingAlterations;  // 0x0728, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FIcarusStatReplicated> MBuildingAdditionalStats;  // 0x0738, size 0x10

    UFUNCTION(BlueprintCallable) void AddBuildingOnFire(const ABP_Building_Base_C*& OnFireBuilding);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AddChildBuildingToDestroy(ABuildingBase* BuildingToDestroy);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddSortedBuildingToAnchorReinit(ABP_Building_Base_C* BuildingToAdd);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AppendUniqueBuildingArray(TArray<ABuildingBase*>& Array_1, TArray<ABuildingBase*>& Array_2, TArray<ABuildingBase*>& Array1UniquelyAddedTo2);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void AppendUniqueBuildingArrayByRef(TArray<ABuildingBase*>& Source, TArray<ABuildingBase*>& Target);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) void BackwardsShift(FTransform GridspaceLocWithWorldRot, FTransform& ShiftedLoc);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void BlockGridspaceRotatedToGridSpaceNotRotated(FVector Gridspace, FRotator WorldRot, FVector& GridSpaceWithNoRot);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void BuildingSpecificAlternateRotations(FTransform InTrans, TSubclassOf<ABuildingBase> BuildingClass, FTransform& OutTrans);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void CanAddBuilding(TSubclassOf<ABP_Building_Base_C> NewBuilding, FTransform GridSpaceTransform, bool& Blocked);  // parameters 0x41
    UFUNCTION(BlueprintCallable) void CheckBuildingLocationFromWorldspaceRounded(FTransform WorldSpaceTransform, TSubclassOf<ABP_Building_Base_C> BuildingType, bool AlternateRotation, bool ShouldSnapToGrid, FTransform& OutWorldSpaceTransform, bool& Blocked, FTransform& OutGridSpaceTransform);  // parameters 0xB0
    UFUNCTION(BlueprintCallable) void DefaultShiftsFromGridSpaceRotations(FRotator GridSpaceRotation, FVector& Shift);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void DoPurgeActorsMovedToSubLevel();
    UFUNCTION(BlueprintCallable) void DownAndReverse(FTransform InTrans, FTransform& OutTrans);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) void DownShift(FTransform GridspaceLocWithWorldRot, FTransform& ShiftedLoc);  // parameters 0x60
    UFUNCTION() void ExecuteUbergraph_BP_Grid_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FireSlowAmount(float& SlowAmount);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void ForwardShift(FTransform GridspaceLocWithWorldRot, FTransform& ShiftedLoc);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void GatherAllUnzipLinks(TArray<ABP_Building_Base_C*>& Building, TArray<ABP_Building_Base_C*>& NewlyGatheredLinks);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void GatherUnzipLink(ABP_Building_Base_C* Building, TArray<ABP_Building_Base_C*>& NewlyGatheredLinks);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetGridBuildingDataForRecord(UBuildingGridRecorderComponent* RecorderComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetIsQueued() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetModifiers(AActor* Building, TArray<FModifierStateSaveData>& Array);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetNeighbors(ABP_Building_Base_C* Building, TArray<ABP_Building_Base_C*>& TouchedBuildings);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GridSpaceToWorldSpace(FTransform InGridSpaceTransform, FTransform& OutWorldSpaceTransform);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void Handle_Try_Add_New_Building_from_World_Space(FTransform World_Space_Transform, TSubclassOf<ABP_Building_Base_C> DesiredClass, bool AlternateRotation, FItemData Item, bool ShouldSnapToGrid, int32 ForcedUID, bool& Success, ABP_Building_Base_C*& Building);  // parameters 0x248, named "Handle Try Add New Building from World Space"
    UFUNCTION(BlueprintCallable) void InitBuilding_Weather_Selection_Size();  // named "InitBuilding Weather Selection Size"
    UFUNCTION(BlueprintCallable) void IsBuildingPlanar(ABP_Building_Base_C* Building1, ABP_Building_Base_C* Building2, bool& IsPlanar);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsTerrainAnchorValid(bool& TerrainLoaded);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IsVectorPairEqual(FVectorPair Pair1, FVectorPair pair2, bool& Equal);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) void LeftShift(FTransform GridspaceLocWithWorldRot, FTransform& ShiftedTrans);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void LoadGridAndBuildingsFromRecord(UBuildingGridRecorderComponent* RecorderComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void LoadSingleBuildingFromRecord(FName BuildableRowName, FName BuildingItemStaticRowName, const FBuildingInfo& BuildingInfo);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnDeferredGridLoadBegin(UBuildingGridRecorderComponent* RecorderComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnDeferredGridLoadEnd();
    UFUNCTION(BlueprintImplementableEvent) void OnTerrainAnchorStateChanged();
    UFUNCTION(BlueprintCallable) void PerformUnzip();
    UFUNCTION(BlueprintCallable) void Prepare_and_perform_Unzip(float StormTier, float UnzipCountMultiplier, float UnzipDamageMultiplier);  // parameters 0xC, named "Prepare and perform Unzip"
    UFUNCTION(BlueprintCallable) void PrepareUnzip();
    UFUNCTION(BlueprintImplementableEvent) void PurgeActorsMovedToSubLevel();
    UFUNCTION(BlueprintCallable) void QueuesEmptied__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RecordBuildingsByTier(ABP_Building_Base_C* Building);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RecordZHeight(ABP_Building_Base_C* Building);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveBuildingFromGrid(ABP_Building_Base_C* RemovedBuilding);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveBuildingOnFire(const ABP_Building_Base_C*& OnFireBuilding);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Reverse(FTransform InTrans, FTransform& OutTrans);  // parameters 0x60
    UFUNCTION(BlueprintCallable, BlueprintPure) void RightShift(FTransform GridspaceLocWithWorldRot, FTransform& ShiftedLoc);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void Rotate(FTransform InTrans, FTransform& OutTrans);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void Round_Grid_Space_Rot_to_Valid_Grid_Space_Rot(FRotator inGridSpaceRot, FRotator& RoundedGridSpaceRot);  // parameters 0x18, named "Round Grid Space Rot to Valid Grid Space Rot"
    UFUNCTION(BlueprintCallable) void Round_World_Space_Rot_to_Valid_World_Space_Rot(FRotator WorldSpaceRot, FRotator& RoundedWorldSpaceRot, FVector& DefaultShiftsFromGridspaceRot);  // parameters 0x24, named "Round World Space Rot to Valid World Space Rot"
    UFUNCTION(BlueprintCallable) void SelectBuildingForWindDamage(float StormTier, ABP_Building_Base_C*& SelectedBuilding);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FSerializedGrid SerializeForSaveGame(AActor* Origin);  // parameters 0x70
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetAutomaticResumingDestructionEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetQueued(bool bQueued);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SortAltitudeKeys();
    UFUNCTION(BlueprintCallable) void SortTierKeys();
    UFUNCTION(BlueprintCallable) void StartBuildingSearch(ABP_Building_Base_C* StartingBuilding, int32 StartingDepth, TArray<ABP_Building_Base_C*>& BuildingArray);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void StartReloadingBuildingHealth();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryAddNewBuildingFromWorldSpace(FTransform WorldSpaceTransform, TSubclassOf<ABuildingBase> DesiredClass, bool bAlternateRotation, FItemData Item, ABuildingBase*& Building);  // parameters 0x239
    UFUNCTION(BlueprintCallable) void UnrecordBuildingsByTier(ABP_Building_Base_C* Building);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnrecordZHeight(ABP_Building_Base_C* Building);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void UpShift(FTransform GridspaceLocWithWorldRot, FTransform& ShiftedLoc);  // parameters 0x60
    UFUNCTION(BlueprintCallable) void WeatherSortingDebug();
    UFUNCTION(BlueprintCallable) void WeatherSortingTick();
    UFUNCTION(BlueprintCallable) void WorldSpaceToGridSpaceFloored(FTransform InWorldTransform, bool AlternateRotation, TSubclassOf<ABP_Building_Base_C> BuildingClass, FTransform& OutGridTransform);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void WorldSpaceToGridSpaceRounded(FTransform InWorldTransform, bool AlternateRotation, TSubclassOf<ABuildingBase> BuildingClass, bool ShouldSnapToGrid, FTransform& OutGridTransform);  // parameters 0x80
    UFUNCTION(BlueprintCallable) FString debugprint();  // parameters 0x10
};
