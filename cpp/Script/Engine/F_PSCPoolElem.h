// /Script/Engine.PSCPoolElem
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Particles/WorldPSCPool.h

USTRUCT()
struct FPSCPoolElem
{
public:
    UPROPERTY(Transient, Instanced) UParticleSystemComponent* PSC;  // 0x0000, size 0x8
    float LastUsedTime;  // 0x0008, not reflected
};
