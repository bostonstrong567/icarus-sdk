// /Script/AnimGraphRuntime.IKChainLink
// size 0x3C, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_LegIK.h

USTRUCT()
struct FIKChainLink
{

    // Not reflected:
    FVector Location;  // 0x0000
    float Length;  // 0x000C
    FVector LinkAxisZ;  // 0x0010
    FVector RealBendDir;  // 0x001C
    FVector BaseBendDir;  // 0x0028
    FName BoneName;  // 0x0034
};
