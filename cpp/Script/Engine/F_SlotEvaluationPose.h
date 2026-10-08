// /Script/Engine.SlotEvaluationPose
// size 0xE0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimInstance.h

USTRUCT()
struct FSlotEvaluationPose
{
    UPROPERTY() TEnumAsByte<EAdditiveAnimationType> AdditiveType;  // 0x0000, size 0x1
    UPROPERTY() float Weight;  // 0x0004, size 0x4

    // Not reflected:
    FCompactPose Pose;  // 0x0008
    FBlendedCurve Curve;  // 0x0020
    FStackCustomAttributes Attributes;  // 0x0050
};
