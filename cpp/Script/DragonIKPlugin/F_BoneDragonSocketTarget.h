// /Script/DragonIKPlugin.BoneDragonSocketTarget
// size 0x60, declared in Engine/Plugins/Marketplace/DragonIK/Source/DragonIKPlugin/Public/AnimNode_DragonControlBase.h

USTRUCT()
struct FBoneDragonSocketTarget
{
public:
    UPROPERTY(EditAnywhere) bool bUseSocket;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) FBoneReference BoneReference;  // 0x0004, size 0x10
    UPROPERTY(EditAnywhere) FSocketDragonReference SocketReference;  // 0x0020, size 0x40
};
