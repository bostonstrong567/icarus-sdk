// /Script/GameplayTasks.GameplayTasksComponent
// Derives from: UActorComponent > UObject
// size 0x120, declared in Engine/Source/Runtime/GameplayTasks/Classes/GameplayTasksComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UGameplayTasksComponent : public UActorComponent, public IGameplayTaskOwnerInterface
{
public:
    UPROPERTY() uint8 bIsNetDirty : 1;  // 0x00BC, mask 0x02
    UPROPERTY(Replicated, ReplicatedUsing) TArray<UGameplayTask*> SimulatedTasks;  // 0x00C0, size 0x10
    UPROPERTY() TArray<UGameplayTask*> TaskPriorityQueue;  // 0x00D0, size 0x10
    UPROPERTY() TArray<UGameplayTask*> TickingTasks;  // 0x00F0, size 0x10
    UPROPERTY(Transient) TArray<UGameplayTask*> KnownTasks;  // 0x0100, size 0x10
    UPROPERTY(BlueprintReadWrite) FOnClaimedResourcesChangeSignature OnClaimedResourcesChange;  // 0x0110, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    int32 EventLockCounter;  // 0x00B8, private
    uint8 : 1 bInEventProcessingInProgress;  // 0x00BC, private
    uint8 TopActivePriority;  // 0x00BD, protected
    FGameplayResourceSet CurrentlyClaimedResources;  // 0x00BE, protected
    TArray<FGameplayTaskEventData,TSizedDefaultAllocator<32> > TaskEvents;  // 0x00E0, protected

    UFUNCTION(BlueprintCallable) static EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, UGameplayTask* Task, uint8 Priority, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalRequiredResources, TArray<TSubclassOf<UGameplayTaskResource>> AdditionalClaimedResources);  // parameters 0x41
    UFUNCTION() void OnRep_SimulatedTasks();

    // Virtual functions that start here:
    //   GetShouldTick
};
