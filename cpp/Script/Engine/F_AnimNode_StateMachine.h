// /Script/Engine.AnimNode_StateMachine
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h

USTRUCT()
struct FAnimNode_StateMachine : public FAnimNode_Base
{
    UPROPERTY() int32 StateMachineIndexInClass;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxTransitionsPerFrame;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) bool bSkipFirstUpdateTransition;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere) bool bReinitializeOnBecomingRelevant;  // 0x0019, size 0x1

    // Not reflected:
    bool bFirstUpdate;  // 0x001A
    int32 CurrentState;  // 0x001C
    float ElapsedTime;  // 0x0020
    int32 EvaluatingTransitionIndex;  // 0x0024
    const FBakedAnimationStateMachine * PRIVATE_MachineDescription;  // 0x0028
    TArray<FAnimationActiveTransitionEntry,TSizedDefaultAllocator<32> > ActiveTransitionArray;  // 0x0030
    TArray<FPoseLink,TSizedDefaultAllocator<32> > StatePoseLinks;  // 0x0040
    TArray<int,TSizedDefaultAllocator<32> > StatesUpdated;  // 0x0050
    TArray<TDelegate<void __cdecl(FAnimNode_StateMachine const &,int,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > OnGraphStatesEntered;  // 0x0060
    TArray<TDelegate<void __cdecl(FAnimNode_StateMachine const &,int,int),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > OnGraphStatesExited;  // 0x0070
    TArray<FPoseContext *,TSizedDefaultAllocator<32> > StateCachedPoses;  // 0x0080
    FGraphTraversalCounter UpdateCounter;  // 0x0090
    TArray<FGraphTraversalCounter,TSizedDefaultAllocator<32> > StateCacheBoneCounters;  // 0x00A0
};
