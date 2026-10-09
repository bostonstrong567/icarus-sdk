// /Script/Engine.SoundWaveSpectralData
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundWave.h

USTRUCT()
struct FSoundWaveSpectralData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FrequencyHz;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Magnitude;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NormalizedMagnitude;  // 0x0008, size 0x4
};
