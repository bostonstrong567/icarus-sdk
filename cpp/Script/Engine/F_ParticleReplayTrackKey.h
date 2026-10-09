// /Script/Engine.ParticleReplayTrackKey
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackParticleReplay.h

USTRUCT()
struct FParticleReplayTrackKey
{
public:
    UPROPERTY() float Time;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float Duration;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) int32 ClipIDNumber;  // 0x0008, size 0x4
};
