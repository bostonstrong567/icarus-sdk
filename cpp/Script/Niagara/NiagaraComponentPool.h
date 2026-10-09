// /Script/Niagara.NiagaraComponentPool
// Derives from: UObject
// size 0x80, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentPool.h

UCLASS(Transient)
class UNiagaraComponentPool : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools;  // 0x0028, size 0x50
    float LastParticleSytemPoolCleanTime;  // 0x0078, not reflected
};
