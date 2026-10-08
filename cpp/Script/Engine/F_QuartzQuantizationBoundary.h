// /Script/Engine.QuartzQuantizationBoundary
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h

USTRUCT()
struct FQuartzQuantizationBoundary
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EQuartzCommandQuantization Quantization;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Multiplier;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EQuarztQuantizationReference CountingReferencePoint;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bFireOnClockStart;  // 0x0009, size 0x1
};
