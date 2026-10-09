// /Script/Engine.BlendProfileBoneEntry
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Animation/BlendProfile.h

USTRUCT()
struct FBlendProfileBoneEntry
{
public:
    UPROPERTY(EditAnywhere) FBoneReference BoneReference;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) float BlendScale;  // 0x0010, size 0x4
};
