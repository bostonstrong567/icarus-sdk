// /Script/Engine.QuartzPulseOverrideStep
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h

USTRUCT()
struct FQuartzPulseOverrideStep
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumberOfPulses;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EQuartzCommandQuantization PulseDuration;  // 0x0004, size 0x1
};
