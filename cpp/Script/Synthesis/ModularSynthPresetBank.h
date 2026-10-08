// /Script/Synthesis.ModularSynthPresetBank
// Derives from: UObject
// size 0x38, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SynthComponents/EpicSynth1Component.h

UCLASS()
class UModularSynthPresetBank : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FModularSynthPresetBankEntry> Presets;  // 0x0028, size 0x10
};
