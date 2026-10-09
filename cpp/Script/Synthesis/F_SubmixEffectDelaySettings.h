// /Script/Synthesis.SubmixEffectDelaySettings
// size 0xC, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SubmixEffects/SubmixEffectDelay.h

USTRUCT()
struct FSubmixEffectDelaySettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaximumDelayLength;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InterpolationTime;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DelayLength;  // 0x0008, size 0x4
};
