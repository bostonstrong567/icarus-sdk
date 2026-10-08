// /Script/GameplayTasks.GameplayTask_WaitDelay
// Derives from: UGameplayTask > UObject
// size 0x80, declared in Engine/Source/Runtime/GameplayTasks/Classes/Tasks/GameplayTask_WaitDelay.h

UCLASS(MinimalAPI, Config=Game)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
    UPROPERTY(BlueprintAssignable) FTaskDelayDelegate OnFinish;  // 0x0068, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    float Time;  // 0x0078, private
    float TimeStarted;  // 0x007C, private

    UFUNCTION(BlueprintCallable) static UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, uint8 Priority);  // parameters 0x20
};
