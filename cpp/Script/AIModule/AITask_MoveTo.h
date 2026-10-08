// /Script/AIModule.AITask_MoveTo
// Derives from: UAITask > UGameplayTask > UObject
// size 0x110, declared in Engine/Source/Runtime/AIModule/Classes/Tasks/AITask_MoveTo.h

UCLASS(Config=Game)
class UAITask_MoveTo : public UAITask
{
public:
    UPROPERTY(BlueprintAssignable) FGenericGameplayTaskDelegate OnRequestFailed;  // 0x0070, size 0x10
    UPROPERTY(BlueprintAssignable) FMoveTaskCompletedSignature OnMoveFinished;  // 0x0080, size 0x10
    UPROPERTY() FAIMoveRequest MoveRequest;  // 0x0090, size 0x40

    // Not reflected: the engine's scripting cannot see these.
    FDelegateHandle PathFinishDelegateHandle;  // 0x00D0, protected
    FDelegateHandle PathUpdateDelegateHandle;  // 0x00D8, protected
    FTimerHandle MoveRetryTimerHandle;  // 0x00E0, protected
    FTimerHandle PathRetryTimerHandle;  // 0x00E8, protected
    FAIRequestID MoveRequestID;  // 0x00F0, protected
    TSharedPtr<FNavigationPath,1> Path;  // 0x00F8, protected
    TEnumAsByte<enum EPathFollowingResult::Type> MoveResult;  // 0x0108, protected
    uint8 : 1 bUseContinuousTracking;  // 0x0109, protected

    UFUNCTION(BlueprintCallable) static UAITask_MoveTo* AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag> ProjectGoalOnNavigation);  // parameters 0x38

    // Virtual functions that start here:
    //   OnPathEvent, OnRequestFinished, PerformMove, ResetObservers, ResetTimers
};
