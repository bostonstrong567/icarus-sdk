// /Script/Synthesis.SourceEffectWaveShaperSettings
// size 0x8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectWaveShaper.h

USTRUCT()
struct FSourceEffectWaveShaperSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Amount;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutputGainDb;  // 0x0004, size 0x4
};
