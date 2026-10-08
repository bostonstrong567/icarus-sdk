// /Script/NavigationSystem.NavigationTestingActor
// Derives from: AActor > UObject
// size 0x310, declared in Engine/Source/Runtime/NavigationSystem/Public/NavigationTestingActor.h

UCLASS(Config=Engine)
class ANavigationTestingActor : public AActor, public INavAgentInterface, public INavPathObserverInterface
{
public:
    UPROPERTY(Instanced) UCapsuleComponent* CapsuleComponent;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UNavigationInvokerComponent* InvokerComponent;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere) uint8 bActAsNavigationInvoker : 1;  // 0x0240, mask 0x01
    UPROPERTY(EditAnywhere) FNavAgentProperties NavAgentProps;  // 0x0248, size 0x30
    UPROPERTY(EditAnywhere) FVector QueryingExtent;  // 0x0278, size 0xC
    UPROPERTY(Transient) ANavigationData* MyNavData;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector ProjectedLocation;  // 0x0290, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bProjectedLocationValid : 1;  // 0x029C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bSearchStart : 1;  // 0x029C, mask 0x02
    UPROPERTY(EditAnywhere) float CostLimitFactor;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere) float MinimumCostLimit;  // 0x02A4, size 0x4
    UPROPERTY(EditAnywhere) uint8 bBacktracking : 1;  // 0x02A8, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bUseHierarchicalPathfinding : 1;  // 0x02A8, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bGatherDetailedInfo : 1;  // 0x02A8, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bDrawDistanceToWall : 1;  // 0x02A8, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bShowNodePool : 1;  // 0x02A8, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bShowBestPath : 1;  // 0x02A8, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bShowDiffWithPreviousStep : 1;  // 0x02A8, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bShouldBeVisibleInGame : 1;  // 0x02A8, mask 0x80
    UPROPERTY(EditAnywhere) TEnumAsByte<ENavCostDisplay> CostDisplayMode;  // 0x02AC, size 0x1
    UPROPERTY(EditAnywhere) FVector2D TextCanvasOffset;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) uint8 bPathExist : 1;  // 0x02B8, mask 0x01
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) uint8 bPathIsPartial : 1;  // 0x02B8, mask 0x02
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) uint8 bPathSearchOutOfNodes : 1;  // 0x02B8, mask 0x04
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float PathfindingTime;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float PathCost;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) int32 PathfindingSteps;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere) ANavigationTestingActor* OtherActor;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UNavigationQueryFilter> FilterClass;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, Transient) int32 ShowStepIndex;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere) float OffsetFromCornersDistance;  // 0x02DC, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FVector ClosestWallLocation;  // 0x02E0
    TSharedPtr<FNavigationPath,1> LastPath;  // 0x02F0
    TDelegate<void __cdecl(FNavigationPath *,enum ENavPathEvent::Type),FDefaultDelegateUserPolicy> PathObserver;  // 0x0300

    // Virtual functions that start here:
    //   BuildPathFindingQuery
};
