// /Script/AnimGraphRuntime.IKChainLink
// size 0x3C, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_LegIK.h

USTRUCT()
struct FIKChainLink
{
public:
    FVector Location;  // 0x0000, not reflected
    float Length;  // 0x000C, not reflected
    FVector LinkAxisZ;  // 0x0010, not reflected
    FVector RealBendDir;  // 0x001C, not reflected
    FVector BaseBendDir;  // 0x0028, not reflected
    FName BoneName;  // 0x0034, not reflected
};
