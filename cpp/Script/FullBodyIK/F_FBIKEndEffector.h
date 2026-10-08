// /Script/FullBodyIK.FBIKEndEffector
// size 0x40, declared in Engine/Plugins/Experimental/FullBodyIK/Source/FullBodyIK/Private/RigUnit_FullbodyIK.h

USTRUCT()
struct FFBIKEndEffector
{
    UPROPERTY() FRigElementKey Item;  // 0x0000, size 0xC
    UPROPERTY() FVector Position;  // 0x000C, size 0xC
    UPROPERTY() float PositionAlpha;  // 0x0018, size 0x4
    UPROPERTY() int32 PositionDepth;  // 0x001C, size 0x4
    UPROPERTY() FQuat Rotation;  // 0x0020, size 0x10
    UPROPERTY() float RotationAlpha;  // 0x0030, size 0x4
    UPROPERTY() int32 RotationDepth;  // 0x0034, size 0x4
    UPROPERTY() float Pull;  // 0x0038, size 0x4
};
