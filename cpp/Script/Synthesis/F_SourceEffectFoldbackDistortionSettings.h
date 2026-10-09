// /Script/Synthesis.SourceEffectFoldbackDistortionSettings
// size 0xC, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectFoldbackDistortion.h

USTRUCT()
struct FSourceEffectFoldbackDistortionSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InputGainDb;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThresholdDb;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutputGainDb;  // 0x0008, size 0x4
};
