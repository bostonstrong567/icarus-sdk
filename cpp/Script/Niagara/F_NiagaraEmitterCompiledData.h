// /Script/Niagara.NiagaraEmitterCompiledData
// size 0x130, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraSystem.h

USTRUCT()
struct FNiagaraEmitterCompiledData
{
    UPROPERTY() TArray<FName> SpawnAttributes;  // 0x0000, size 0x10
    UPROPERTY() FNiagaraVariable EmitterSpawnIntervalVar;  // 0x0010, size 0x20
    UPROPERTY() FNiagaraVariable EmitterInterpSpawnStartDTVar;  // 0x0030, size 0x20
    UPROPERTY() FNiagaraVariable EmitterSpawnGroupVar;  // 0x0050, size 0x20
    UPROPERTY() FNiagaraVariable EmitterAgeVar;  // 0x0070, size 0x20
    UPROPERTY() FNiagaraVariable EmitterRandomSeedVar;  // 0x0090, size 0x20
    UPROPERTY() FNiagaraVariable EmitterInstanceSeedVar;  // 0x00B0, size 0x20
    UPROPERTY() FNiagaraVariable EmitterTotalSpawnedParticlesVar;  // 0x00D0, size 0x20
    UPROPERTY() FNiagaraDataSetCompiledData DataSetCompiledData;  // 0x00F0, size 0x40
};
