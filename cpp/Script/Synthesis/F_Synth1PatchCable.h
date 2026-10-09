// /Script/Synthesis.Synth1PatchCable
// size 0x8, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Public/EpicSynth1Types.h

USTRUCT()
struct FSynth1PatchCable
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Depth;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESynth1PatchDestination Destination;  // 0x0004, size 0x1
};
