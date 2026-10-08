// /Script/Strider.BoneChainLink
// size 0x18, declared in Engine/Plugins/Marketplace/Strider/Source/Strider/Public/BoneChain.h

USTRUCT()
struct FBoneChainLink
{
    UPROPERTY(EditAnywhere) FBoneReference Bone;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) float Weight;  // 0x0010, size 0x4

    // Not reflected:
    float NormalizedWeight;  // 0x0014
};
