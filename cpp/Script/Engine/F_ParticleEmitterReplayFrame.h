// /Script/Engine.ParticleEmitterReplayFrame
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystemReplay.h

USTRUCT()
struct FParticleEmitterReplayFrame
{

    // Not reflected:
    int32 EmitterType;  // 0x0000
    int32 OriginalEmitterIndex;  // 0x0004
    FDynamicEmitterReplayDataBase * FrameState;  // 0x0008
};
