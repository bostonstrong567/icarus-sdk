// /Script/NavigationSystem.NavigationSystemV1
// Derives from: UNavigationSystemBase > UObject
// size 0x15E0, declared in Engine/Source/Runtime/NavigationSystem/Public/NavigationSystem.h

UCLASS(Transient, Config=Engine)
class UNavigationSystemV1 : public UNavigationSystemBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Transient) ANavigationData* MainNavData;  // 0x0028, size 0x8
    UPROPERTY(Transient) ANavigationData* AbstractNavData;  // 0x0030, size 0x8
    uint32 : 1 bWholeWorldNavigable;  // 0x0068, not reflected
    UPROPERTY(EditAnywhere, Config) uint8 bInitialBuildingLocked : 1;  // 0x0068, mask 0x40
    UPROPERTY(EditAnywhere, Config) uint8 bSkipAgentHeightCheckWhenPickingNavData : 1;  // 0x0069, mask 0x01
    UPROPERTY(Transient) TArray<ANavigationData*> NavDataSet;  // 0x0090, size 0x10
    UPROPERTY(Transient) TArray<ANavigationData*> NavDataRegistrationQueue;  // 0x00A0, size 0x10
    TArray<FNavigationBoundsUpdateRequest,TSizedDefaultAllocator<32> > PendingNavBoundsUpdates;  // 0x00B0, not reflected
    UPROPERTY(Transient) FOnNavDataGenericEvent OnNavDataRegisteredEvent;  // 0x00C0, size 0x10
    UPROPERTY(Transient, BlueprintAssignable) FOnNavDataGenericEvent OnNavigationGenerationFinishedDelegate;  // 0x00D0, size 0x10
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnNavigationInitDone;  // 0x00E0, not reflected
    TMap<unsigned int,FOctreeElementId2,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,FOctreeElementId2,0> > ObjectToOctreeId;  // 0x14B8, not reflected
    TSet<FNavigationDirtyElement,DefaultKeyFuncs<FNavigationDirtyElement,0>,FDefaultSetAllocator> PendingOctreeUpdates;  // 0x1508, not reflected
    TSharedPtr<FNavigationOctree,1> NavOctree;  // 0x1558, not reflected
    TMultiMap<UObject *,FWeakObjectPtr,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject *,FWeakObjectPtr,1> > OctreeChildNodesMap;  // 0x1568, not reflected
    uint8 : 1 bNavOctreeLock;  // 0x15B8, not reflected
    UPROPERTY(EditAnywhere, Config) float DirtyAreasUpdateFreq;  // 0x15BC, size 0x4
    float DirtyAreasUpdateTime;  // 0x15C0, not reflected
    TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32> > DirtyAreas;  // 0x15C8, not reflected
    uint8 : 1 bCanAccumulateDirtyAreas;  // 0x15D8, not reflected
protected:
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) FName DefaultAgentName;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, Config, BlueprintReadOnly) TSoftClassPtr<UCrowdManagerBase> CrowdManagerClass;  // 0x0040, size 0x28
    UPROPERTY(EditAnywhere, Config) uint8 bAutoCreateNavigationData : 1;  // 0x0068, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bSpawnNavDataInNavBoundsLevel : 1;  // 0x0068, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bAllowClientSideNavigation : 1;  // 0x0068, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bShouldDiscardSubLevelNavData : 1;  // 0x0068, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bTickWhilePaused : 1;  // 0x0068, mask 0x10
    UPROPERTY() uint8 bSupportRebuilding : 1;  // 0x0068, mask 0x20
    UPROPERTY(EditAnywhere, Config) uint8 bGenerateNavigationOnlyAroundNavigationInvokers : 1;  // 0x0069, mask 0x02
    UPROPERTY(EditAnywhere, Config) float ActiveTilesUpdateInterval;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, Config) ENavDataGatheringModeConfig DataGatheringMode;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, Config) float DirtyAreaWarningSizeThreshold;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere, Config) TArray<FNavDataConfig> SupportedAgents;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere, Config) FNavAgentSelector SupportedAgentsMask;  // 0x0088, size 0x4
    TSet<FNavigationBounds,DefaultKeyFuncs<FNavigationBounds,0>,FDefaultSetAllocator> RegisteredNavBounds;  // 0x0108, not reflected
    UPROPERTY() FNavigationSystemRunMode OperationMode;  // 0x01BC, size 0x1
    TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32> > AsyncPathFindingQueries;  // 0x01C0, not reflected
    TArray<FAsyncPathFindingQuery,TSizedDefaultAllocator<32> > AsyncPathFindingCompletedQueries;  // 0x01D0, not reflected
    TRefCountPtr<FGraphEvent> AsyncPathFindingTask;  // 0x01E0, not reflected
    TAtomic<bool> bAbortAsyncQueriesRequested;  // 0x01E8, not reflected
    FWindowsCriticalSection NavDataRegistration;  // 0x01F0, not reflected
    TMap<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavAgentProperties,TWeakObjectPtr<ANavigationData,FWeakObjectPtr>,0> > AgentToNavDataMap;  // 0x0218, not reflected
    FNavigationOctreeController DefaultOctreeController;  // 0x0268, not reflected
    TMap<unsigned int,FNavigationSystem::FCustomLinkOwnerInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,FNavigationSystem::FCustomLinkOwnerInfo,0> > CustomLinksMap;  // 0x0320, not reflected
    FNavigationDirtyAreasController DefaultDirtyAreasController;  // 0x0370, not reflected
    FWindowsCriticalSection NavDataRegistrationSection;  // 0x0390, not reflected
    uint8 NavBuildingLockFlags;  // 0x03B8, not reflected
    uint8 InitialNavBuildingLockFlags;  // 0x03B9, not reflected
    uint8 : 1 bAsyncBuildPaused;  // 0x03BA, not reflected
    uint8 : 1 bCleanUpDone;  // 0x03BA, not reflected
    uint8 : 1 bInitialLevelsAdded;  // 0x03BA, not reflected
    uint8 : 1 bInitialSetupHasBeenPerformed;  // 0x03BA, not reflected
    uint8 : 1 bWorldInitDone;  // 0x03BA, not reflected
    FBox NavigableWorldBounds;  // 0x03BC, not reflected
    int32 CurrentlyDrawnNavDataIndex;  // 0x03D8, not reflected
    TSet<UClass const *,DefaultKeyFuncs<UClass const *,0>,FDefaultSetAllocator> NavAreaClasses;  // 0x03E0, not reflected
    FNavRegenTimeSliceManager NavRegenTimeSliceManager;  // 0x0430, not reflected
private:
    TWeakObjectPtr<UCrowdManagerBase,FWeakObjectPtr> CrowdManager;  // 0x00F8, not reflected
    uint32 : 1 bNavDataRemovedDueToMissingNavBounds;  // 0x0100, not reflected
    TMap<AActor *,FNavigationInvoker,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<AActor *,FNavigationInvoker,0> > Invokers;  // 0x0158, not reflected
    TArray<FNavigationInvokerRaw,TSizedDefaultAllocator<32> > InvokerLocations;  // 0x01A8, not reflected
    float NextInvokersUpdateTime;  // 0x01B8, not reflected
public:
    UFUNCTION(BlueprintCallable) static UNavigationPath* FindPathToActorSynchronously(UObject* WorldContextObject, const FVector& PathStart, AActor* GoalActor, float TetherDistance, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);  // parameters 0x40
    UFUNCTION(BlueprintCallable) static UNavigationPath* FindPathToLocationSynchronously(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, AActor* PathfindingContext, TSubclassOf<UNavigationQueryFilter> FilterClass);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) static UNavigationSystemV1* GetNavigationSystem(UObject* WorldContextObject);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static TEnumAsByte<ENavigationQueryResult> GetPathCost(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathCost, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static TEnumAsByte<ENavigationQueryResult> GetPathLength(UObject* WorldContextObject, const FVector& PathStart, const FVector& PathEnd, float& PathLength, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetRandomPointInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector GetRandomReachablePointInRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsNavigationBeingBuilt(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsNavigationBeingBuiltOrLocked(UObject* WorldContextObject);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool K2_GetRandomLocationInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_GetRandomPointInNavigableRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_GetRandomReachablePointInRadius(UObject* WorldContextObject, const FVector& Origin, FVector& RandomLocation, float Radius, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass);  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool K2_ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, FVector& ProjectedLocation, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, FVector QueryExtent);  // parameters 0x3D
    UFUNCTION(BlueprintCallable) bool K2_ReplaceAreaInOctreeData(UObject* Object, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static bool NavigationRaycast(UObject* WorldContextObject, const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation, TSubclassOf<UNavigationQueryFilter> FilterClass, AController* Querier);  // parameters 0x41
    UFUNCTION(BlueprintCallable) void OnNavigationBoundsUpdated(ANavMeshBoundsVolume* NavVolume);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FVector ProjectPointToNavigation(UObject* WorldContextObject, const FVector& Point, ANavigationData* NavData, TSubclassOf<UNavigationQueryFilter> FilterClass, FVector QueryExtent);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void RegisterNavigationInvoker(AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ResetMaxSimultaneousTileGenerationJobsCount();
    UFUNCTION(BlueprintCallable) void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMaxSimultaneousTileGenerationJobsCount(int32 MaxNumberOfJobs);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SimpleMoveToActor(AController* Controller, AActor* Goal);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static void SimpleMoveToLocation(AController* Controller, const FVector& Goal);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void UnregisterNavigationInvoker(AActor* Invoker);  // parameters 0x8

    // Virtual functions that start here:
    //   AddLevelToOctree, Build, CancelBuild, ConditionalPopulateNavOctree, ConstructNavOctree
    //   CreateCrowdManager, CreateNavigationDataInstance, CreateNavigationDataInstanceInLevel
    //   DestroyNavOctree, DoInitialSetup, GatherNavigationBounds, GetIsAutoUpdateEnabled
    //   GetNavDataForAgentName, GetNavDataForProps, GetNavigationBoundsForNavData
    //   IsThereAnywhereToBuildNavigation, OnBeginTearingDown, OnNavigationBoundsAdded
    //   OnNavigationBoundsRemoved, OnNavigationGenerationFinished, OnWorldInitDone
    //   ProcessRegistrationCandidates, RebuildAll, RebuildDirtyAreas, RegisterCustomLink, RegisterInvoker
    //   RegisterNavData, ReleaseInitialBuildingLock, RequestRegistration, RequestRegistrationDeferred
    //   ShouldDiscardSubLevelNavData, ShouldLoadNavigationOnClient, SpawnMissingNavigationData
    //   UnregisterInvoker, UnregisterNavData, UnregisterUnusedNavData, UpdateAbstractNavData
};
