// /Script/Engine.SoundWaveSpectralDataPerSound
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundWave.h

USTRUCT()
struct FSoundWaveSpectralDataPerSound
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSoundWaveSpectralData> SpectralData;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlaybackTime;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundWave* SoundWave;  // 0x0018, size 0x8
};
