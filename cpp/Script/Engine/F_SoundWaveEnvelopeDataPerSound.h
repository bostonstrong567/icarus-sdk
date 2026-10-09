// /Script/Engine.SoundWaveEnvelopeDataPerSound
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundWave.h

USTRUCT()
struct FSoundWaveEnvelopeDataPerSound
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Envelope;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlaybackTime;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundWave* SoundWave;  // 0x0008, size 0x8
};
