// /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
// size 0xC8, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_ApplyAdditive.h

USTRUCT()
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Base;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Additive;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBias AlphaScaleBias;  // 0x0034, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LODThreshold;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputAlphaBoolBlend AlphaBoolBlend;  // 0x0040, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AlphaCurveName;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x0090, size 0x30
    float ActualAlpha;  // 0x00C0, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAnimAlphaInputType AlphaInputType;  // 0x00C4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAlphaBoolEnabled;  // 0x00C5, size 0x1
};
