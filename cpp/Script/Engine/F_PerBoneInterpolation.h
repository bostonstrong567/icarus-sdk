// /Script/Engine.PerBoneInterpolation
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Animation/BlendSpaceBase.h

USTRUCT()
struct FPerBoneInterpolation
{
    UPROPERTY(EditAnywhere) FBoneReference BoneReference;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) float InterpolationSpeedPerSec;  // 0x0010, size 0x4
};
