// /Script/Engine.AnimationActiveTransitionEntry
// size 0xC8, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h

USTRUCT()
struct FAnimationActiveTransitionEntry
{
public:
    float ElapsedTime;  // 0x0000, not reflected
    float Alpha;  // 0x0004, not reflected
    float CrossfadeDuration;  // 0x0008, not reflected
    TArray<FTransform,TSizedDefaultAllocator<32> > InputPose;  // 0x0010, not reflected
    FPoseLink CustomTransitionGraph;  // 0x0020, not reflected
    int32 NextState;  // 0x0030, not reflected
    int32 PreviousState;  // 0x0034, not reflected
    int32 StartNotify;  // 0x0038, not reflected
    int32 EndNotify;  // 0x003C, not reflected
    int32 InterruptNotify;  // 0x0040, not reflected
    TArray<FAnimNode_TransitionPoseEvaluator *,TSizedDefaultAllocator<32> > PoseEvaluators;  // 0x0048, not reflected
    TArray<FBlendSampleData,TSizedDefaultAllocator<32> > StateBlendData;  // 0x0058, not reflected
    TArray<int,TInlineAllocator<3,TSizedDefaultAllocator<32> > > SourceTransitionIndices;  // 0x0068, not reflected
    UPROPERTY() UBlendProfile* BlendProfile;  // 0x00B8, size 0x8
    EAlphaBlendOption BlendOption;  // 0x00C0, not reflected
    TEnumAsByte<enum ETransitionLogicType::Type> LogicType;  // 0x00C1, not reflected
    bool bActive;  // 0x00C2, not reflected
protected:
    FAlphaBlend Blend;  // 0x0088, not reflected
};
