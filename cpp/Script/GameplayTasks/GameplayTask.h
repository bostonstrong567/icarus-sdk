// /Script/GameplayTasks.GameplayTask
// Derives from: UObject
// size 0x68, declared in Engine/Source/Runtime/GameplayTasks/Classes/GameplayTask.h

UCLASS(Abstract, Config=Game)
class UGameplayTask : public UObject, public IGameplayTaskOwnerInterface
{
public:
    UPROPERTY() FName InstanceName;  // 0x0030, size 0x8
    UPROPERTY(Config) ETaskResourceOverlapPolicy ResourceOverlapPolicy;  // 0x003A, size 0x1
    UPROPERTY() UGameplayTask* ChildTask;  // 0x0060, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint8 Priority;  // 0x0038, protected
    EGameplayTaskState TaskState;  // 0x0039, protected
    uint32 : 1 bTickingTask;  // 0x003C, protected
    uint32 : 1 bSimulatedTask;  // 0x003C, protected
    uint32 : 1 bIsSimulating;  // 0x003C, protected
    uint32 : 1 bIsPausable;  // 0x003C, protected
    uint32 : 1 bCaresAboutPriority;  // 0x003C, protected
    uint32 : 1 bOwnedByTasksComponent;  // 0x003C, protected
    uint32 : 1 bClaimRequiredResources;  // 0x003C, protected
    uint32 : 1 bOwnerFinished;  // 0x003C, protected
    FGameplayResourceSet RequiredResources;  // 0x0040, protected
    FGameplayResourceSet ClaimedResources;  // 0x0042, protected
    TWeakInterfacePtr<IGameplayTaskOwnerInterface> TaskOwner;  // 0x0048, protected
    TWeakObjectPtr<UGameplayTasksComponent,FWeakObjectPtr> TasksComponent;  // 0x0058, protected

    UFUNCTION(BlueprintCallable) void EndTask();
    UFUNCTION(BlueprintCallable) void ReadyForActivation();

    // Virtual functions that start here:
    //   Activate, ExternalCancel, ExternalConfirm, GetDebugString, InitSimulatedTask, IsWaitingOnAvatar
    //   IsWaitingOnRemotePlayerdata, OnDestroy, Pause, Resume, TickTask
};
