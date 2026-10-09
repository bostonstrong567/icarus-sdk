// /Script/Synthesis.SourceEffectPhaserSettings
// size 0x10, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectPhaser.h

USTRUCT()
struct FSourceEffectPhaserSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WetLevel;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Frequency;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Feedback;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPhaserLFOType LFOType;  // 0x000C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseQuadraturePhase;  // 0x000D, size 0x1
};
