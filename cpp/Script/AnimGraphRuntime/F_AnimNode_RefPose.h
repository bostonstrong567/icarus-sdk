// /Script/AnimGraphRuntime.AnimNode_RefPose
// size 0x18, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RefPose.h

USTRUCT()
struct FAnimNode_RefPose : public FAnimNode_Base
{
    UPROPERTY() TEnumAsByte<ERefPoseType> RefPoseType;  // 0x0010, size 0x1
};
