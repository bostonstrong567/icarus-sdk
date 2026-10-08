// /Script/DragonIKPlugin.SocketDragonReference
// size 0x40, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/AnimNode_DragonControlBase.h

USTRUCT()
struct FSocketDragonReference
{
    UPROPERTY(EditAnywhere) FName SocketName;  // 0x0030, size 0x8

    // Not reflected:
    FTransform CachedSocketLocalTransform;  // 0x0000
    int32 CachedSocketMeshBoneIndex;  // 0x0038
    FCompactPoseBoneIndex CachedSocketCompactBoneIndex;  // 0x003C
};
