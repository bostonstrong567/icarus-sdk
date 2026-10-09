// /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
// Derives from: UGameplayTask > UObject
// size 0x98, declared in Engine/Source/Runtime/GameplayTasks/Classes/Tasks/GameplayTask_TimeLimitedExecution.h

UCLASS(MinimalAPI, Config=Game)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
    UPROPERTY(BlueprintAssignable) FTaskFinishDelegate OnFinished;  // 0x0068, size 0x10
    UPROPERTY(BlueprintAssignable) FTaskFinishDelegate OnTimeExpired;  // 0x0078, size 0x10
private:
    float Time;  // 0x0088, not reflected
    float TimeStarted;  // 0x008C, not reflected
    uint32 : 1 bChildTaskFinished;  // 0x0090, not reflected
    uint32 : 1 bTimeExpired;  // 0x0090, not reflected
};
