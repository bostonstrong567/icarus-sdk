// /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
// size 0xA0, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_PoseBlendNode.h

USTRUCT()
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink SourcePose;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere) EAlphaBlendOption BlendOption;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere) UCurveFloat* CustomCurve;  // 0x0098, size 0x8
};
