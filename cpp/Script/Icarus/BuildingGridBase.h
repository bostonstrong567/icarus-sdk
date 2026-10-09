// /Script/Icarus.BuildingGridBase
// Derives from: AIcarusActor > AActor > UObject
// size 0x460, declared in Icarus/Source/Icarus/Actors/BuildingGridBase.h

UCLASS(Config=Engine)
class ABuildingGridBase : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintReadWrite) int32 BuildingCount;  // 0x02C0, size 0x4
    UPROPERTY(BlueprintReadOnly) TArray<ABuildingBase*> BuildingsSelectedForWindDamage;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FVector, FGridPoint> GridPoints;  // 0x03D0, size 0x50
protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABuildingBase*> BuildingsRequiringNavUpdate;  // 0x0420, size 0x10
private:
    TMap<float,TArray<TWeakObjectPtr<ABuildingBase,FWeakObjectPtr>,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,TArray<TWeakObjectPtr<ABuildingBase,FWeakObjectPtr>,TSizedDefaultAllocator<32> >,0> > BuildingsByTier;  // 0x02D8, not reflected
    TMap<float,TArray<TWeakObjectPtr<ABuildingBase,FWeakObjectPtr>,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,TArray<TWeakObjectPtr<ABuildingBase,FWeakObjectPtr>,TSizedDefaultAllocator<32> >,0> > AltitudeMap;  // 0x0328, not reflected
    TArray<TWeakObjectPtr<ABuildingBase,FWeakObjectPtr>,TSizedDefaultAllocator<32> > PendingWeatherChoices;  // 0x0378, not reflected
    int32 CurrentSelectionTierMaxIndex;  // 0x0388, not reflected
    float WeatherSortingTierPercentage;  // 0x038C, not reflected
    TArray<float,TSizedDefaultAllocator<32> > AscendingSortedBuildingTiers;  // 0x0390, not reflected
    TArray<float,TSizedDefaultAllocator<32> > DescendingAltitudeQuartiles;  // 0x03A0, not reflected
    int32 MaxBuildingSelection;  // 0x03B0, not reflected
    int32 CurrentTierIndex;  // 0x03B4, not reflected
    int32 CurrentQuartileIndex;  // 0x03B8, not reflected
    int32 StartingBuildingIndex;  // 0x03BC, not reflected
    TArray<TWeakObjectPtr<ABuildingBase,FWeakObjectPtr>,TSizedDefaultAllocator<32> > CurrentBuildingsToSort;  // 0x03C0, not reflected
    FTimerHandle NextDirtyTimer;  // 0x0430, not reflected
    TArray<TWeakObjectPtr<ABuildingBase,FWeakObjectPtr>,TSizedDefaultAllocator<32> > BuildingsRequiringStabilityUpdate;  // 0x0438, not reflected
    bool bRegisteredWithGridManager;  // 0x0448, not reflected
    TWeakObjectPtr<UBuildingGridRecorderComponent const ,FWeakObjectPtr> DeferredLoadRecorder;  // 0x044C, not reflected
    int32 DeferredLoadTypeIndex;  // 0x0454, not reflected
    int32 DeferredLoadInstanceIndex;  // 0x0458, not reflected
    bool bDeferredGridLoadActive;  // 0x045C, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void AddChildBuildingToDestroy(ABuildingBase* BuildingToDestroy);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void FindNearbyTouchingBuildings(ABuildingBase* StartingBuilding, ABuildingBase* CurrentBuilding, int32 MaximumDepth, TArray<ABuildingBase*>& FoundBuildings, TArray<ABuildingBase*>& CheckedBuildings);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void GetAllTouchingBuildings(TSubclassOf<ABuildingBase> Class, FTransform InTransform, TArray<ABuildingBase*>& NeighborBuildings);  // parameters 0x50
    UFUNCTION(BlueprintImplementableEvent) void GetGridBuildingDataForRecord(UBuildingGridRecorderComponent* RecorderComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetIsQueued() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void LoadGridAndBuildingsFromRecord(UBuildingGridRecorderComponent* RecorderComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void LoadSingleBuildingFromRecord(FName BuildableRowName, FName BuildingItemStaticRowName, const FBuildingInfo& BuildingInfo);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void OnBuildingPieceAdded(ABuildingBase* BuildingPiece);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnBuildingPieceRemoved(ABuildingBase* BuildingPiece);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnDeferredGridLoadBegin(UBuildingGridRecorderComponent* RecorderComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnDeferredGridLoadEnd();
    UFUNCTION(BlueprintImplementableEvent) void PurgeActorsMovedToSubLevel();
    UFUNCTION(BlueprintCallable) void QueueStabilityUpdate(ABuildingBase* BuildingPiece);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveBuildingFromStabilityUpdateQueue(ABuildingBase* BuildingPiece);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FSerializedGrid SerializeForSaveGame(AActor* Origin);  // parameters 0x70
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetAutomaticResumingDestructionEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetQueued(bool bQueued);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartDirtyingBuildingNavigation();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TryAddNewBuildingFromWorldSpace(FTransform WorldSpaceTransform, TSubclassOf<ABuildingBase> DesiredClass, bool bAlternateRotation, FItemData Item, ABuildingBase*& Building);  // parameters 0x239
};
