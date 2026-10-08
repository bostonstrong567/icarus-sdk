// /Script/Engine.ParticleBurst
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Particles/ParticleEmitter.h

USTRUCT()
struct FParticleBurst
{
    UPROPERTY(EditAnywhere) int32 Count;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 CountLow;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float Time;  // 0x0008, size 0x4
};
