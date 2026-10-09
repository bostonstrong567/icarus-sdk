// /Script/AIModule.AITask_MoveTo
// Derives from: UAITask > UGameplayTask > UObject
// size 0x110, declared in Engine/Source/Runtime/AIModule/Classes/Tasks/AITask_MoveTo.h

UCLASS(Config=Game)
class UAITask_MoveTo : public UAITask
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(BlueprintAssignable) FGenericGameplayTaskDelegate OnRequestFailed;  // 0x0070, size 0x10
    UPROPERTY(BlueprintAssignable) FMoveTaskCompletedSignature OnMoveFinished;  // 0x0080, size 0x10
    UPROPERTY() FAIMoveRequest MoveRequest;  // 0x0090, size 0x40
    FDelegateHandle PathFinishDelegateHandle;  // 0x00D0, not reflected
    FDelegateHandle PathUpdateDelegateHandle;  // 0x00D8, not reflected
    FTimerHandle MoveRetryTimerHandle;  // 0x00E0, not reflected
    FTimerHandle PathRetryTimerHandle;  // 0x00E8, not reflected
    FAIRequestID MoveRequestID;  // 0x00F0, not reflected
    TSharedPtr<FNavigationPath,1> Path;  // 0x00F8, not reflected
    TEnumAsByte<enum EPathFollowingResult::Type> MoveResult;  // 0x0108, not reflected
    uint8 : 1 bUseContinuousTracking;  // 0x0109, not reflected
public:
    UFUNCTION(BlueprintCallable) static UAITask_MoveTo* AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag> ProjectGoalOnNavigation);  // parameters 0x38

    // Virtual functions that start here:
    //   OnPathEvent, OnRequestFinished, PerformMove, ResetObservers, ResetTimers
};
