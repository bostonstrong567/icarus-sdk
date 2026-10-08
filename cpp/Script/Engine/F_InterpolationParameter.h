// /Script/Engine.InterpolationParameter
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Animation/BlendSpaceBase.h

USTRUCT()
struct FInterpolationParameter
{
    UPROPERTY(EditAnywhere) float InterpolationTime;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EFilterInterpolationType> InterpolationType;  // 0x0004, size 0x1
};
