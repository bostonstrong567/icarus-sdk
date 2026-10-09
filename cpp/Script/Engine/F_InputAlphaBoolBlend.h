// /Script/Engine.InputAlphaBoolBlend
// size 0x48, declared in Engine/Source/Runtime/Engine/Classes/Animation/InputScaleBias.h

USTRUCT()
struct FInputAlphaBoolBlend
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BlendInTime;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BlendOutTime;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAlphaBlendOption BlendOption;  // 0x0008, size 0x1
    UPROPERTY(Transient) bool bInitialized;  // 0x0009, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CustomCurve;  // 0x0010, size 0x8
    UPROPERTY(Transient) FAlphaBlend AlphaBlend;  // 0x0018, size 0x30
};
