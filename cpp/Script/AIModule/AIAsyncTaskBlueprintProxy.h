// /Script/AIModule.AIAsyncTaskBlueprintProxy
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h

UCLASS(MinimalAPI)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FOAISimpleDelegate OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FOAISimpleDelegate OnFail;  // 0x0038, size 0x10
    TWeakObjectPtr<AAIController,FWeakObjectPtr> AIController;  // 0x0048, not reflected
    FAIRequestID MoveRequestId;  // 0x0050, not reflected
    TWeakObjectPtr<UWorld,FWeakObjectPtr> MyWorld;  // 0x0054, not reflected
    FTimerHandle TimerHandle_OnInstantFinish;  // 0x0060, not reflected

    UFUNCTION() void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);  // parameters 0x5
};
