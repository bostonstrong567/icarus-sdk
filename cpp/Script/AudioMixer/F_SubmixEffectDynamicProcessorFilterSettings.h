// /Script/AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// size 0xC, declared in Engine/Source/Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h

USTRUCT()
struct FSubmixEffectDynamicProcessorFilterSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnabled : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Cutoff;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float GainDb;  // 0x0008, size 0x4
};
