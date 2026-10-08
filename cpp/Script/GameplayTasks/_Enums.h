// /Script/GameplayTasks.EGameplayTaskRunResult
UENUM()
enum class EGameplayTaskRunResult : uint8
{
    Error = 0,
    Failed = 1,
    Success_Paused = 2,
    Success_Active = 3,
    Success_Finished = 4,
};

// /Script/GameplayTasks.EGameplayTaskState
UENUM()
enum class EGameplayTaskState : uint8
{
    Uninitialized = 0,
    AwaitingActivation = 1,
    Paused = 2,
    Active = 3,
    Finished = 4,
};

// /Script/GameplayTasks.ETaskResourceOverlapPolicy
UENUM()
enum class ETaskResourceOverlapPolicy : uint8
{
    StartOnTop = 0,
    StartAtEnd = 1,
};
