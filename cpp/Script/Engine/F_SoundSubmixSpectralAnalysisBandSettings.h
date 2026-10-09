// /Script/Engine.SoundSubmixSpectralAnalysisBandSettings
// size 0x10, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Engine/SoundSubmix.generated.h

USTRUCT()
struct FSoundSubmixSpectralAnalysisBandSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BandFrequency;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AttackTimeMsec;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ReleaseTimeMsec;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float QFactor;  // 0x000C, size 0x4
};
