// /Script/AnimationCore.ConstraintData
// size 0x80, declared in Engine/Source/Runtime/AnimationCore/Public/Constraint.h

USTRUCT()
struct FConstraintData
{
public:
    UPROPERTY() FConstraintDescriptor Constraint;  // 0x0000, size 0x10
    UPROPERTY() float Weight;  // 0x0010, size 0x4
    UPROPERTY() bool bMaintainOffset;  // 0x0014, size 0x1
    UPROPERTY() FTransform Offset;  // 0x0020, size 0x30
    UPROPERTY(Transient) FTransform CurrentTransform;  // 0x0050, size 0x30
};
