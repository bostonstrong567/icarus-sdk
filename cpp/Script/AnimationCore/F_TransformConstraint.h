// /Script/AnimationCore.TransformConstraint
// size 0x28, declared in Engine/Source/Runtime/AnimationCore/Public/Constraint.h

USTRUCT()
struct FTransformConstraint
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FConstraintDescription Operator;  // 0x0000, size 0xD
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SourceNode;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TargetNode;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Weight;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bMaintainOffset;  // 0x0024, size 0x1
};
