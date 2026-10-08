// /Script/NavigationSystem.NavigationData
// Derives from: AActor > UObject
// size 0x428, declared in Engine/Source/Runtime/NavigationSystem/Public/NavigationData.h

UCLASS(Abstract, Config=Engine)
class ANavigationData : public AActor, public INavigationDataInterface
{
public:
    UPROPERTY(Transient, Instanced) UPrimitiveComponent* RenderingComp;  // 0x0228, size 0x8
    UPROPERTY() FNavDataConfig NavDataConfig;  // 0x0230, size 0x78
    UPROPERTY(EditAnywhere, Transient) uint8 bEnableDrawing : 1;  // 0x02A8, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bForceRebuildOnLoad : 1;  // 0x02A8, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bAutoDestroyWhenNoNavigation : 1;  // 0x02A8, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bCanBeMainNavData : 1;  // 0x02A8, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bCanSpawnOnRebuild : 1;  // 0x02A8, mask 0x10
    UPROPERTY(Config, Deprecated) uint8 bRebuildAtRuntime : 1;  // 0x02A8, mask 0x20
    UPROPERTY(EditAnywhere, Config) ERuntimeGenerationType RuntimeGeneration;  // 0x02AC, size 0x1
    UPROPERTY(EditAnywhere, Config) float ObservedPathsTickInterval;  // 0x02B0, size 0x4
    UPROPERTY() uint32 DataVersion;  // 0x02B4, size 0x4
    UPROPERTY() TArray<FSupportedAreaData> SupportedAreas;  // 0x03C0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FPathFindingResult (*)(const FNavAgentProperties &, const FPathFindingQuery &) FindPathImplementation;  // 0x02B8, protected
    FPathFindingResult (*)(const FNavAgentProperties &, const FPathFindingQuery &) FindHierarchicalPathImplementation;  // 0x02C0, protected
    bool (*)(const FNavAgentProperties &, const FPathFindingQuery &, int32 *) TestPathImplementation;  // 0x02C8, protected
    bool (*)(const FNavAgentProperties &, const FPathFindingQuery &, int32 *) TestHierarchicalPathImplementation;  // 0x02D0, protected
    bool (*)(const ANavigationData *, const FVector &, const FVector &, FVector &, TSharedPtr<FNavigationQueryFilter const ,1>, const UObject *) RaycastImplementation;  // 0x02D8, protected
    TSharedPtr<FNavDataGenerator,1> NavDataGenerator;  // 0x02E0, protected
    TArray<FNavigationDirtyArea,TSizedDefaultAllocator<32> > SuspendedDirtyAreas;  // 0x02F0, protected
    TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32> > ActivePaths;  // 0x0300, protected
    FWindowsCriticalSection ActivePathsLock;  // 0x0310, protected
    TArray<TWeakPtr<FNavigationPath,1>,TSizedDefaultAllocator<32> > ObservedPaths;  // 0x0338, protected
    TArray<FNavPathRecalculationRequest,TSizedDefaultAllocator<32> > RepathRequests;  // 0x0348, protected
    float NextObservedPathsTickInSeconds;  // 0x0358, protected
    TSharedPtr<FNavigationQueryFilter,1> DefaultQueryFilter;  // 0x0360, protected
    TMap<UClass *,TSharedPtr<FNavigationQueryFilter const ,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass *,TSharedPtr<FNavigationQueryFilter const ,1>,0> > QueryFilters;  // 0x0370, protected
    TMap<UClass const *,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass const *,int,0> > AreaClassToIdMap;  // 0x03D0, protected
    uint32 : 1 bRegistered;  // 0x0420, protected
    uint32 : 1 bSupportsDefaultAgent;  // 0x0420, protected
    uint32 : 1 bRebuildingSuspended;  // 0x0420, protected
    uint16 NavDataUniqueID;  // 0x0424, private

    // Virtual functions that start here:
    //   BatchProjectPoints, BatchRaycast, BeginBatchQuery, CalcPathCost, CalcPathLength
    //   CalcPathLengthAndCost, CancelBuild, CleanUp, CleanUpAndMarkPendingKill
    //   ConditionalConstructGenerator, ConstructRenderingComponent, DoesNodeContainLocation
    //   DoesSupportAgent, EnsureBuildCompletion, FillConfig, FinishBatchQuery, GetBounds
    //   GetMaxSupportedAreas, GetNewAreaID, GetRandomPoint, GetRandomPointInNavigableRadius
    //   GetRandomReachablePointInRadius, LogMemUsed, NeedsRebuild, OnNavAreaAdded, OnNavAreaChanged
    //   OnNavAreaRemoved, OnNavigationBoundsChanged, OnRegistered, OnStreamingLevelAdded
    //   OnStreamingLevelRemoved, RebuildAll, RebuildDirtyAreas, RestrictBuildingToActiveTiles, SetConfig
    //   SetRebuildingSuspended, SupportsRuntimeGeneration, SupportsStreaming, TickAsyncBuild
    //   UpdateCustomLink
};
