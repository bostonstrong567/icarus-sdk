// /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
// size 0x50, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_MultiWayBlend.h

USTRUCT()
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FPoseLink> Poses;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> DesiredAlphas;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBias AlphaScaleBias;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAdditiveNode;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bNormalizeAlpha;  // 0x0049, size 0x1

    // Not reflected:
    TArray<float,TSizedDefaultAllocator<32> > CachedAlphas;  // 0x0030
};
