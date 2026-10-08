// /Script/Synthesis.SourceEffectChorusBaseSettings
// size 0x18, declared in Engine/Plugins/Runtime/Synthesis/Source/Synthesis/Classes/SourceEffects/SourceEffectChorus.h

USTRUCT()
struct FSourceEffectChorusBaseSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Depth;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Frequency;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Feedback;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WetLevel;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DryLevel;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Spread;  // 0x0014, size 0x4
};
