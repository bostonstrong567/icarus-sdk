// /Script/Engine.BoneFilter
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h

USTRUCT()
struct FBoneFilter
{
public:
    UPROPERTY(EditAnywhere) bool bExcludeSelf;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) FName BoneName;  // 0x0004, size 0x8
};
