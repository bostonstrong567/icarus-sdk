// /Script/Niagara.NiagaraComponentPool
// Derives from: UObject
// size 0x80, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentPool.h

UCLASS(Transient)
class UNiagaraComponentPool : public UObject
{
public:
    UPROPERTY() TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools;  // 0x0028, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    float LastParticleSytemPoolCleanTime;  // 0x0078, private
};
