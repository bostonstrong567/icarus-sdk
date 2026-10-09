// /Script/AIModule.BTTask_MoveTo
// Derives from: UBTTask_BlackboardBase > UBTTaskNode > UBTNode > UObject
// size 0xB0, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/Tasks/BTTask_MoveTo.h

UCLASS(Config=Game)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
public:
    UPROPERTY(EditAnywhere, Config) float AcceptableRadius;  // 0x0098, size 0x4
    UPROPERTY(EditAnywhere) TSubclassOf<UNavigationQueryFilter> FilterClass;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere) float ObservedBlackboardValueTolerance;  // 0x00A8, size 0x4
    uint32 : 1 bUseGameplayTasks;  // 0x00AC, not reflected
    uint32 : 1 bUsePathfinding;  // 0x00AC, not reflected
    UPROPERTY(EditAnywhere) uint8 bObserveBlackboardValue : 1;  // 0x00AC, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bAllowStrafe : 1;  // 0x00AC, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bAllowPartialPath : 1;  // 0x00AC, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bTrackMovingGoal : 1;  // 0x00AC, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bProjectGoalLocation : 1;  // 0x00AC, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bReachTestIncludesAgentRadius : 1;  // 0x00AC, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bReachTestIncludesGoalRadius : 1;  // 0x00AC, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bStopOnOverlap : 1;  // 0x00AC, mask 0x80
    UPROPERTY() uint8 bStopOnOverlapNeedsUpdate : 1;  // 0x00AD, mask 0x01

    // Virtual functions that start here:
    //   PerformMoveTask, PrepareMoveTask
};
