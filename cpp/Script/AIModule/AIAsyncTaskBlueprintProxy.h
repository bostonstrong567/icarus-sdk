// /Script/AIModule.AIAsyncTaskBlueprintProxy
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h

UCLASS(MinimalAPI)
class UAIAsyncTaskBlueprintProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FOAISimpleDelegate OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FOAISimpleDelegate OnFail;  // 0x0038, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<AAIController,FWeakObjectPtr> AIController;  // 0x0048
    FAIRequestID MoveRequestId;  // 0x0050
    TWeakObjectPtr<UWorld,FWeakObjectPtr> MyWorld;  // 0x0054
    FTimerHandle TimerHandle_OnInstantFinish;  // 0x0060

    UFUNCTION() void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);  // parameters 0x5
};
