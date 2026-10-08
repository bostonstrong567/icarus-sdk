// /Script/Strider.BoneChain
// size 0x20, declared in Engine/Plugins/Marketplace/Strider/Source/Strider/Public/BoneChain.h

USTRUCT()
struct FBoneChain
{
    UPROPERTY(EditAnywhere) TArray<FBoneChainLink> BoneChain;  // 0x0000, size 0x10

    // Not reflected:
    TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32> > RootToAnchorBoneIndexHierarchy;  // 0x0010
};
