// /Script/AnimGraphRuntime.AnimNode_LegIK
// size 0xF8, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_LegIK.h

USTRUCT()
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) float ReachPrecision;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxIterations;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere) TArray<FAnimLegIKDefinition> LegsDefinition;  // 0x00D0, size 0x10

    // Not reflected:
    TArray<FAnimLegIKData,TSizedDefaultAllocator<32> > LegsData;  // 0x00E0
    FAnimInstanceProxy * MyAnimInstanceProxy;  // 0x00F0
};
