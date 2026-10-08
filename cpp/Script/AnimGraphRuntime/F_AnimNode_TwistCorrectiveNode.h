// /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// size 0x138, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_TwistCorrectiveNode.h

USTRUCT()
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) FReferenceBoneFrame BaseFrame;  // 0x00C8, size 0x20
    UPROPERTY(EditAnywhere) FReferenceBoneFrame TwistFrame;  // 0x00E8, size 0x20
    UPROPERTY(EditAnywhere) FAxis TwistPlaneNormalAxis;  // 0x0108, size 0x10
    UPROPERTY(EditAnywhere) float RangeMax;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere) float RemappedMin;  // 0x011C, size 0x4
    UPROPERTY(EditAnywhere) float RemappedMax;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere) FAnimCurveParam Curve;  // 0x0124, size 0xC

    // Not reflected:
    float ReferenceAngle;  // 0x0130
    float RangeMaxInRadian;  // 0x0134
};
