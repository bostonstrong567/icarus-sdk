// /Script/Engine.SoundWaveSpectralTimeData
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundWave.h

USTRUCT()
struct FSoundWaveSpectralTimeData
{
    UPROPERTY() TArray<FSoundWaveSpectralDataEntry> Data;  // 0x0000, size 0x10
    UPROPERTY() float TimeSec;  // 0x0010, size 0x4
};
