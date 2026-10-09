// /Script/Engine.AnimNode_StateMachine
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h

USTRUCT()
struct FAnimNode_StateMachine : public FAnimNode_Base
{
public:
    UPROPERTY() int32 StateMachineIndexInClass;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxTransitionsPerFrame;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) bool bSkipFirstUpdateTransition;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere) bool bReinitializeOnBecomingRelevant;  // 0x0019, size 0x1
protected:
    int32 CurrentState;  // 0x001C, not reflected
    float ElapsedTime;  // 0x0020, not reflected
    int32 EvaluatingTransitionIndex;  // 0x0024, not reflected
    const FBakedAnimationStateMachine * PRIVATE_MachineDescription;  // 0x0028, not reflected
    TArray<FAnimationActiveTransitionEntry,TSizedDefaultAllocator<32> > ActiveTransitionArray;  // 0x0030, not reflected
    TArray<FPoseLink,TSizedDefaultAllocator<32> > StatePoseLinks;  // 0x0040, not reflected
    TArray<int,TSizedDefaultAllocator<32> > StatesUpdated;  // 0x0050, not reflected
    TArray<TDelegate<void __cdecl(FAnimNode_StateMachine const &,int,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > OnGraphStatesEntered;  // 0x0060, not reflected
    TArray<TDelegate<void __cdecl(FAnimNode_StateMachine const &,int,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > OnGraphStatesExited;  // 0x0070, not reflected
private:
    bool bFirstUpdate;  // 0x001A, not reflected
    TArray<FPoseContext *,TSizedDefaultAllocator<32> > StateCachedPoses;  // 0x0080, not reflected
    FGraphTraversalCounter UpdateCounter;  // 0x0090, not reflected
    TArray<FGraphTraversalCounter,TSizedDefaultAllocator<32> > StateCacheBoneCounters;  // 0x00A0, not reflected
};
