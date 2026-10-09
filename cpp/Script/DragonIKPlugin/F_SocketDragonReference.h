// /Script/DragonIKPlugin.SocketDragonReference
// size 0x40, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/AnimNode_DragonControlBase.h

USTRUCT()
struct FSocketDragonReference
{
public:
    UPROPERTY(EditAnywhere) FName SocketName;  // 0x0030, size 0x8
private:
    FTransform CachedSocketLocalTransform;  // 0x0000, not reflected
    int32 CachedSocketMeshBoneIndex;  // 0x0038, not reflected
    FCompactPoseBoneIndex CachedSocketCompactBoneIndex;  // 0x003C, not reflected
};
