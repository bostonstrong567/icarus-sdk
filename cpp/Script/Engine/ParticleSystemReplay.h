// /Script/Engine.ParticleSystemReplay
// Derives from: UObject
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystemReplay.h

UCLASS()
class UParticleSystemReplay : public UObject
{
public:
    UPROPERTY(EditAnywhere, Transient) int32 ClipIDNumber;  // 0x0028, size 0x4
    TArray<FParticleSystemReplayFrame,TSizedDefaultAllocator<32> > Frames;  // 0x0030, not reflected
};
