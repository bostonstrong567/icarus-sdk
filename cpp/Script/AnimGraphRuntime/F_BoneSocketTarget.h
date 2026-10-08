// /Script/AnimGraphRuntime.BoneSocketTarget
// size 0x60, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_SkeletalControlBase.h

USTRUCT()
struct FBoneSocketTarget
{
    UPROPERTY(EditAnywhere) bool bUseSocket;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) FBoneReference BoneReference;  // 0x0004, size 0x10
    UPROPERTY(EditAnywhere) FSocketReference SocketReference;  // 0x0020, size 0x40
};
