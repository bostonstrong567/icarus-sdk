// /Script/AnimGraphRuntime.ReferenceBoneFrame
// size 0x20, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_TwistCorrectiveNode.h

USTRUCT()
struct FReferenceBoneFrame
{
public:
    UPROPERTY(EditAnywhere) FBoneReference Bone;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FAxis Axis;  // 0x0010, size 0x10
};
