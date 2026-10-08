// /Script/AnimationCore.ConstraintDescription
// size 0xD, declared in Engine/Source/Runtime/AnimationCore/Public/Constraint.h

USTRUCT()
struct FConstraintDescription
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bTranslation;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRotation;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bScale;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bParent;  // 0x0003, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFilterOptionPerAxis TranslationAxes;  // 0x0004, size 0x3
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFilterOptionPerAxis RotationAxes;  // 0x0007, size 0x3
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFilterOptionPerAxis ScaleAxes;  // 0x000A, size 0x3
};
