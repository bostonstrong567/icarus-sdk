// /Script/Engine.SoundWaveSpectralDataEntry
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundWave.h

USTRUCT()
struct FSoundWaveSpectralDataEntry
{
public:
    UPROPERTY() float Magnitude;  // 0x0000, size 0x4
    UPROPERTY() float NormalizedMagnitude;  // 0x0004, size 0x4
};
