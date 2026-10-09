// /Script/Engine.ParticleSystemReplayFrame
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystemReplay.h

USTRUCT()
struct FParticleSystemReplayFrame
{
public:
    TArray<FParticleEmitterReplayFrame,TSizedDefaultAllocator<32> > Emitters;  // 0x0000, not reflected
};
