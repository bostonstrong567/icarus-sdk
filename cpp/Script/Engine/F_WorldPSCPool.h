// /Script/Engine.WorldPSCPool
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Particles/WorldPSCPool.h

USTRUCT()
struct FWorldPSCPool
{
    UPROPERTY() TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools;  // 0x0000, size 0x50

    // Not reflected:
    float LastParticleSytemPoolCleanTime;  // 0x0050
    float CachedWorldTime;  // 0x0054
};
