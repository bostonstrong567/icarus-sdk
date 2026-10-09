// /Script/Engine.WorldPSCPool
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/Particles/WorldPSCPool.h

USTRUCT()
struct FWorldPSCPool
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools;  // 0x0000, size 0x50
    float LastParticleSytemPoolCleanTime;  // 0x0050, not reflected
    float CachedWorldTime;  // 0x0054, not reflected
};
