// /Script/Synthesis.SourceEffectFilterSettings
// size 0x20, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectFilter.h

USTRUCT()
struct FSourceEffectFilterSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESourceEffectFilterCircuit FilterCircuit;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESourceEffectFilterType FilterType;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CutoffFrequency;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FilterQ;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;  // 0x0010, size 0x10
};
