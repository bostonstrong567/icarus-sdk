// /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
// size 0x28, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectFilter.h

USTRUCT()
struct FSourceEffectFilterAudioBusModulationSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAudioBus* AudioBus;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EnvelopeFollowerAttackTimeMsec;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EnvelopeFollowerReleaseTimeMsec;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EnvelopeGainMultiplier;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) ESourceEffectFilterParam FilterParam;  // 0x0014, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinFrequencyModulation;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxFrequencyModulation;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinResonanceModulation;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxResonanceModulation;  // 0x0024, size 0x4
};
