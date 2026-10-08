// /Script/Engine.AnimationActiveTransitionEntry
// size 0xC8, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h

USTRUCT()
struct FAnimationActiveTransitionEntry
{
    UPROPERTY() UBlendProfile* BlendProfile;  // 0x00B8, size 0x8

    // Not reflected:
    float ElapsedTime;  // 0x0000
    float Alpha;  // 0x0004
    float CrossfadeDuration;  // 0x0008
    TArray<FTransform,TSizedDefaultAllocator<32> > InputPose;  // 0x0010
    FPoseLink CustomTransitionGraph;  // 0x0020
    int32 NextState;  // 0x0030
    int32 PreviousState;  // 0x0034
    int32 StartNotify;  // 0x0038
    int32 EndNotify;  // 0x003C
    int32 InterruptNotify;  // 0x0040
    TArray<FAnimNode_TransitionPoseEvaluator *,TSizedDefaultAllocator<32> > PoseEvaluators;  // 0x0048
    TArray<FBlendSampleData,TSizedDefaultAllocator<32> > StateBlendData;  // 0x0058
    TArray<int,TInlineAllocator<3,TSizedDefaultAllocator<32> > > SourceTransitionIndices;  // 0x0068
    FAlphaBlend Blend;  // 0x0088
    EAlphaBlendOption BlendOption;  // 0x00C0
    TEnumAsByte<enum ETransitionLogicType::Type> LogicType;  // 0x00C1
    bool bActive;  // 0x00C2
};
