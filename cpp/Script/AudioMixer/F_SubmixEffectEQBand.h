// /Script/AudioMixer.SubmixEffectEQBand
// size 0x10, declared in Engine/Source/Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h

USTRUCT()
struct FSubmixEffectEQBand
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Frequency;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Bandwidth;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GainDb;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnabled : 1;  // 0x000C, mask 0x01
};
