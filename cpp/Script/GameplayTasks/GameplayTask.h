// /Script/GameplayTasks.GameplayTask
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/GameplayTasks/Classes/GameplayTask.h

UCLASS(Abstract, Config=Game)
class UGameplayTask : public UObject, public IGameplayTaskOwnerInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FName InstanceName;  // 0x0030, size 0x8
    uint8 Priority;  // 0x0038, not reflected
    EGameplayTaskState TaskState;  // 0x0039, not reflected
    UPROPERTY(Config) ETaskResourceOverlapPolicy ResourceOverlapPolicy;  // 0x003A, size 0x1
    uint32 : 1 bCaresAboutPriority;  // 0x003C, not reflected
    uint32 : 1 bClaimRequiredResources;  // 0x003C, not reflected
    uint32 : 1 bIsPausable;  // 0x003C, not reflected
    uint32 : 1 bIsSimulating;  // 0x003C, not reflected
    uint32 : 1 bOwnedByTasksComponent;  // 0x003C, not reflected
    uint32 : 1 bOwnerFinished;  // 0x003C, not reflected
    uint32 : 1 bSimulatedTask;  // 0x003C, not reflected
    uint32 : 1 bTickingTask;  // 0x003C, not reflected
    FGameplayResourceSet RequiredResources;  // 0x0040, not reflected
    FGameplayResourceSet ClaimedResources;  // 0x0042, not reflected
    TWeakInterfacePtr<IGameplayTaskOwnerInterface> TaskOwner;  // 0x0048, not reflected
    TWeakObjectPtr<UGameplayTasksComponent,FWeakObjectPtr> TasksComponent;  // 0x0058, not reflected
    UPROPERTY() UGameplayTask* ChildTask;  // 0x0060, size 0x8
public:
    UFUNCTION(BlueprintCallable) void EndTask();
    UFUNCTION(BlueprintCallable) void ReadyForActivation();

    // Virtual functions that start here:
    //   Activate, ExternalCancel, ExternalConfirm, GetDebugString, InitSimulatedTask, IsWaitingOnAvatar
    //   IsWaitingOnRemotePlayerdata, OnDestroy, Pause, Resume, TickTask
};
