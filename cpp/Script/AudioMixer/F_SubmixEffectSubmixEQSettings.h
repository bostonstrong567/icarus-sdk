// /Script/AudioMixer.SubmixEffectSubmixEQSettings
// size 0x10, declared in Engine/Source/Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectEQ.h

USTRUCT()
struct FSubmixEffectSubmixEQSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSubmixEffectEQBand> EQBands;  // 0x0000, size 0x10
};
