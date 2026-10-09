// /Script/Engine.RigTransformConstraint
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Animation/Rig.h

USTRUCT()
struct FRigTransformConstraint
{
public:
    UPROPERTY() TEnumAsByte<EConstraintTransform> TranformType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) FName ParentSpace;  // 0x0004, size 0x8
    UPROPERTY() float Weight;  // 0x000C, size 0x4
};
