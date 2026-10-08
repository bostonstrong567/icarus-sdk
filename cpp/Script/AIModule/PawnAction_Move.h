// /Script/AIModule.PawnAction_Move
// Derives from: UPawnAction > UObject
// size 0xE0, declared in Engine/Source/Runtime/AIModule/Classes/Actions/PawnAction_Move.h

UCLASS(EditInlineNew)
class UPawnAction_Move : public UPawnAction
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* GoalActor;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector GoalLocation;  // 0x0098, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AcceptableRadius;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UNavigationQueryFilter> FilterClass;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAllowStrafe : 1;  // 0x00B0, mask 0x01
    UPROPERTY() uint8 bFinishOnOverlap : 1;  // 0x00B0, mask 0x02
    UPROPERTY() uint8 bUsePathfinding : 1;  // 0x00B0, mask 0x04
    UPROPERTY() uint8 bAllowPartialPath : 1;  // 0x00B0, mask 0x08
    UPROPERTY() uint8 bProjectGoalToNavigation : 1;  // 0x00B0, mask 0x10
    UPROPERTY() uint8 bUpdatePathToGoal : 1;  // 0x00B0, mask 0x20
    UPROPERTY() uint8 bAbortChildActionOnPathChange : 1;  // 0x00B0, mask 0x40

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<FNavigationPath,1> Path;  // 0x00B8, protected
    FDelegateHandle PathObserverDelegateHandle;  // 0x00C8, protected
    FTimerHandle TimerHandle_DeferredPerformMoveAction;  // 0x00D0, protected
    FTimerHandle TimerHandle_TryToRepath;  // 0x00D8, protected

    // Virtual functions that start here:
    //   IsPartialPathAllowed, OnPathUpdated, RequestMove
};
