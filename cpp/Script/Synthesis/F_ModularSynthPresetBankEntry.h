// /Script/Synthesis.ModularSynthPresetBankEntry
// size 0xF0, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SynthComponents/EpicSynth1Component.h

USTRUCT()
struct FModularSynthPresetBankEntry
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString PresetName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModularSynthPreset Preset;  // 0x0010, size 0xE0
};
