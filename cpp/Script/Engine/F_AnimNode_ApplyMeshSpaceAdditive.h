// /Script/Engine.AnimNode_ApplyMeshSpaceAdditive
// size 0xD0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_ApplyMeshSpaceAdditive.h

USTRUCT()
struct FAnimNode_ApplyMeshSpaceAdditive : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Base;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink Additive;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAnimAlphaInputType AlphaInputType;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAlphaBoolEnabled : 1;  // 0x0038, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputAlphaBoolBlend AlphaBoolBlend;  // 0x0040, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AlphaCurveName;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBias AlphaScaleBias;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x0098, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LODThreshold;  // 0x00C8, size 0x4
    float ActualAlpha;  // 0x00CC, not reflected
};
