// /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
// size 0xC8, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_TwoWayBlend.h

USTRUCT()
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink A;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseLink B;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAnimAlphaInputType AlphaInputType;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAlphaBoolEnabled : 1;  // 0x0031, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Alpha;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBias AlphaScaleBias;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputAlphaBoolBlend AlphaBoolBlend;  // 0x0040, size 0x48
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AlphaCurveName;  // 0x0088, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInputScaleBiasClamp AlphaScaleBiasClamp;  // 0x0090, size 0x30
protected:
    uint8 : 1 bAIsRelevant;  // 0x0031, not reflected
    uint8 : 1 bBIsRelevant;  // 0x0031, not reflected
    UPROPERTY(EditAnywhere) uint8 bResetChildOnActivation : 1;  // 0x0031, mask 0x08
    float InternalBlendAlpha;  // 0x00C0, not reflected
};
