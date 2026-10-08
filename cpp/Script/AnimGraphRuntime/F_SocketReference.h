// /Script/AnimGraphRuntime.SocketReference
// size 0x40, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_SkeletalControlBase.h

USTRUCT()
struct FSocketReference
{
    UPROPERTY(EditAnywhere) FName SocketName;  // 0x0030, size 0x8

    // Not reflected:
    FTransform CachedSocketLocalTransform;  // 0x0000
    int32 CachedSocketMeshBoneIndex;  // 0x0038
    FCompactPoseBoneIndex CachedSocketCompactBoneIndex;  // 0x003C
};
