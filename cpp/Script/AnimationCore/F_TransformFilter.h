// /Script/AnimationCore.TransformFilter
// size 0x9, declared in Engine/Source/Runtime/AnimationCore/Public/Constraint.h

USTRUCT()
struct FTransformFilter
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFilterOptionPerAxis TranslationFilter;  // 0x0000, size 0x3
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFilterOptionPerAxis RotationFilter;  // 0x0003, size 0x3
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFilterOptionPerAxis ScaleFilter;  // 0x0006, size 0x3
};
