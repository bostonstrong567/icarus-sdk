// /Script/AIModule.BehaviorTreeComponent
// Derives from: UBrainComponent > UActorComponent > UObject
// size 0x298, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h

UCLASS(Config=Engine)
class UBehaviorTreeComponent : public UBrainComponent
{
public:
    UPROPERTY(Transient) TArray<UBTNode*> NodeInstances;  // 0x0128, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBehaviorTree* DefaultBehaviorTreeAsset;  // 0x0278, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TArray<FBehaviorTreeInstance,TSizedDefaultAllocator<32> > InstanceStack;  // 0x0108, protected
    TArray<FBehaviorTreeInstanceId,TSizedDefaultAllocator<32> > KnownInstances;  // 0x0118, protected
    FBehaviorTreeSearchData SearchData;  // 0x0138, protected
    FBTNodeExecutionInfo ExecutionRequest;  // 0x0188, protected
    FBTPendingExecutionInfo PendingExecution;  // 0x01A0, protected
    FBTPendingAuxNodesUnregisterInfo PendingUnregisterAuxNodesRequests;  // 0x01B0, protected
    FBTTreeStartInfo TreeStartInfo;  // 0x01C0, protected
    TMultiMap<FBTNodeIndex,TSharedPtr<FAIMessageObserver,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FBTNodeIndex,TSharedPtr<FAIMessageObserver,0>,1> > TaskMessageObservers;  // 0x01D0, protected
    TMap<FGameplayTag,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,float,0> > CooldownTagsMap;  // 0x0220, protected
    uint16 ActiveInstanceIdx;  // 0x0270, protected
    uint8 StopTreeLock;  // 0x0272, protected
    uint8 : 1 bDeferredStopTree;  // 0x0273, protected
    uint8 : 1 bLoopExecution;  // 0x0273, protected
    uint8 : 1 bWaitingForAbortingTasks;  // 0x0273, protected
    uint8 : 1 bRequestedFlowUpdate;  // 0x0273, protected
    uint8 : 1 bRequestedStop;  // 0x0273, protected
    uint8 : 1 bIsRunning;  // 0x0273, protected
    uint8 : 1 bIsPaused;  // 0x0273, protected
    bool bTickedOnce;  // 0x0280, protected
    float NextTickDeltaTime;  // 0x0284, protected
    float AccumulatedTickDeltaTime;  // 0x0288, protected
    float LastRequestedDeltaTimeGameTime;  // 0x028C, protected
    const char * CSVTickStatName;  // 0x0290, protected

    UFUNCTION(BlueprintCallable) void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTagCooldownEndTime(FGameplayTag CooldownTag) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);  // parameters 0x10

    // Virtual functions that start here:
    //   DescribeActiveTasks, DescribeActiveTrees, SetDynamicSubtree
};
