// /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
// Derives from: UGameplayTask > UObject
// size 0x98, declared in Engine/Source/Runtime/GameplayTasks/Classes/Tasks/GameplayTask_TimeLimitedExecution.h

UCLASS(MinimalAPI, Config=Game)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
public:
    UPROPERTY(BlueprintAssignable) FTaskFinishDelegate OnFinished;  // 0x0068, size 0x10
    UPROPERTY(BlueprintAssignable) FTaskFinishDelegate OnTimeExpired;  // 0x0078, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    float Time;  // 0x0088, private
    float TimeStarted;  // 0x008C, private
    uint32 : 1 bTimeExpired;  // 0x0090, private
    uint32 : 1 bChildTaskFinished;  // 0x0090, private
};
