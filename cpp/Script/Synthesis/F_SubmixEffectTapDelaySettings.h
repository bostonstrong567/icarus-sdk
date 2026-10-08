// /Script/Synthesis.SubmixEffectTapDelaySettings
// size 0x18, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectTapDelay.h

USTRUCT()
struct FSubmixEffectTapDelaySettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaximumDelayLength;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpolationTime;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTapDelayInfo> Taps;  // 0x0008, size 0x10
};
