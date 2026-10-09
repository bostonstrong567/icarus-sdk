// /Script/AIModule.BehaviorTreeComponent
// Derives from: UBrainComponent > UActorComponent > UObject
// size 0x298, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h

UCLASS(Config=Engine)
class UBehaviorTreeComponent : public UBrainComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    TArray<FBehaviorTreeInstance,TSizedDefaultAllocator<32> > InstanceStack;  // 0x0108, not reflected
    TArray<FBehaviorTreeInstanceId,TSizedDefaultAllocator<32> > KnownInstances;  // 0x0118, not reflected
    UPROPERTY(Transient) TArray<UBTNode*> NodeInstances;  // 0x0128, size 0x10
    FBehaviorTreeSearchData SearchData;  // 0x0138, not reflected
    FBTNodeExecutionInfo ExecutionRequest;  // 0x0188, not reflected
    FBTPendingExecutionInfo PendingExecution;  // 0x01A0, not reflected
    FBTPendingAuxNodesUnregisterInfo PendingUnregisterAuxNodesRequests;  // 0x01B0, not reflected
    FBTTreeStartInfo TreeStartInfo;  // 0x01C0, not reflected
    TMultiMap<FBTNodeIndex,TSharedPtr<FAIMessageObserver,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,0>,1> > TaskMessageObservers;  // 0x01D0, not reflected
    TMap<FGameplayTag,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,float,0> > CooldownTagsMap;  // 0x0220, not reflected
    uint16 ActiveInstanceIdx;  // 0x0270, not reflected
    uint8 StopTreeLock;  // 0x0272, not reflected
    uint8 : 1 bDeferredStopTree;  // 0x0273, not reflected
    uint8 : 1 bIsPaused;  // 0x0273, not reflected
    uint8 : 1 bIsRunning;  // 0x0273, not reflected
    uint8 : 1 bLoopExecution;  // 0x0273, not reflected
    uint8 : 1 bRequestedFlowUpdate;  // 0x0273, not reflected
    uint8 : 1 bRequestedStop;  // 0x0273, not reflected
    uint8 : 1 bWaitingForAbortingTasks;  // 0x0273, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBehaviorTree* DefaultBehaviorTreeAsset;  // 0x0278, size 0x8
    bool bTickedOnce;  // 0x0280, not reflected
    float NextTickDeltaTime;  // 0x0284, not reflected
    float AccumulatedTickDeltaTime;  // 0x0288, not reflected
    float LastRequestedDeltaTimeGameTime;  // 0x028C, not reflected
    const char * CSVTickStatName;  // 0x0290, not reflected
public:
    UFUNCTION(BlueprintCallable) void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTagCooldownEndTime(FGameplayTag CooldownTag) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);  // parameters 0x10

    // Virtual functions that start here:
    //   DescribeActiveTasks, DescribeActiveTrees, SetDynamicSubtree
};
