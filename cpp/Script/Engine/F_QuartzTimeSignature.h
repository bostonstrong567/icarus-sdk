// /Script/Engine.QuartzTimeSignature
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h

USTRUCT()
struct FQuartzTimeSignature
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumBeats;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EQuartzTimeSignatureQuantization BeatType;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuartzPulseOverrideStep> OptionalPulseOverride;  // 0x0008, size 0x10
};
