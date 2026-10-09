// /Script/AnimGraphRuntime.AnimNode_ApplyLimits
// size 0xE8, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_ApplyLimits.h

USTRUCT()
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
public:
    UPROPERTY(EditAnywhere) TArray<FAngularRangeLimit> AngularRangeLimits;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> AngularOffsets;  // 0x00D8, size 0x10
};
