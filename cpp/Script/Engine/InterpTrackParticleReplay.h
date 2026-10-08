// /Script/Engine.InterpTrackParticleReplay
// Derives from: UInterpTrack > UObject
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackParticleReplay.h

UCLASS(MinimalAPI)
class UInterpTrackParticleReplay : public UInterpTrack
{
public:
    UPROPERTY() TArray<FParticleReplayTrackKey> TrackKeys;  // 0x0070, size 0x10
};
