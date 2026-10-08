// /Script/AnimGraphRuntime.IKChain
// size 0x38, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_LegIK.h

USTRUCT()
struct FIKChain
{

    // Not reflected:
    TArray<FIKChainLink,TSizedDefaultAllocator<32> > Links;  // 0x0000
    float MinRotationAngleRadians;  // 0x0010
    FAnimInstanceProxy * MyAnimInstanceProxy;  // 0x0018
    float MaximumReach;  // 0x0020
    int32 NumLinks;  // 0x0024
    FVector HingeRotationAxis;  // 0x0028
    bool bEnableRotationLimit;  // 0x0034
    bool bInitialized;  // 0x0035
};
