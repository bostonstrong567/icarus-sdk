// /Script/Engine.ParticleEmitterReplayFrame
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystemReplay.h

USTRUCT()
struct FParticleEmitterReplayFrame
{
public:
    int32 EmitterType;  // 0x0000, not reflected
    int32 OriginalEmitterIndex;  // 0x0004, not reflected
    FDynamicEmitterReplayDataBase * FrameState;  // 0x0008, not reflected
};
