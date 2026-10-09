// /Script/AnimGraphRuntime.IKChain
// size 0x38, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_LegIK.h

USTRUCT()
struct FIKChain
{
public:
    TArray<FIKChainLink,TSizedDefaultAllocator<32> > Links;  // 0x0000, not reflected
    float MinRotationAngleRadians;  // 0x0010, not reflected
private:
    FAnimInstanceProxy * MyAnimInstanceProxy;  // 0x0018, not reflected
    float MaximumReach;  // 0x0020, not reflected
    int32 NumLinks;  // 0x0024, not reflected
    FVector HingeRotationAxis;  // 0x0028, not reflected
    bool bEnableRotationLimit;  // 0x0034, not reflected
    bool bInitialized;  // 0x0035, not reflected
};
