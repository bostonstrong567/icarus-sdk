// /Script/GameplayTasks.GameplayTask_WaitDelay
// Derives from: UGameplayTask > UObject
// size 0x80, declared in Engine/Source/Runtime/GameplayTasks/Classes/Tasks/GameplayTask_WaitDelay.h

UCLASS(MinimalAPI, Config=Game)
class UGameplayTask_WaitDelay : public UGameplayTask
{
public:
    UPROPERTY(BlueprintAssignable) FTaskDelayDelegate OnFinish;  // 0x0068, size 0x10
private:
    float Time;  // 0x0078, not reflected
    float TimeStarted;  // 0x007C, not reflected
public:
    UFUNCTION(BlueprintCallable) static UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, float Time, uint8 Priority);  // parameters 0x20
};
