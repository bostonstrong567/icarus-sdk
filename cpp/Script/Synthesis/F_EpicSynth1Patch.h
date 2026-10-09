// /Script/Synthesis.EpicSynth1Patch
// size 0x18, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SynthComponents/EpicSynth1Component.h

USTRUCT()
struct FEpicSynth1Patch
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynth1PatchSource PatchSource;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSynth1PatchCable> PatchCables;  // 0x0008, size 0x10
};
