// /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// size 0x190, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_RotationOffsetBlendSpace.h

USTRUCT()
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink BasePose;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LODThreshold;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBias AlphaScaleBias;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputAlphaBoolBlend AlphaBoolBlend;  // 0x0108, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AlphaCurveName;  // 0x0150, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x0158, size 0x30
    float ActualAlpha;  // 0x0188, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAnimAlphaInputType AlphaInputType;  // 0x018C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAlphaBoolEnabled;  // 0x018D, size 0x1
    bool bIsLODEnabled;  // 0x018E, not reflected
};
