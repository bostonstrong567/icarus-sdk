// /Script/Engine.BoneReference
// size 0x10, declared in Engine/Source/Runtime/Engine/Public/BoneContainer.h

USTRUCT()
struct FBoneReference
{
    UPROPERTY(EditAnywhere) FName BoneName;  // 0x0000, size 0x8

    // Not reflected:
    int32 : 31 BoneIndex;  // 0x0008
    uint32 : 1 bUseSkeletonIndex;  // 0x0008
    FCompactPoseBoneIndex CachedCompactPoseIndex;  // 0x000C
};
