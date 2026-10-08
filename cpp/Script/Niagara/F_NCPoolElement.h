// /Script/Niagara.NCPoolElement
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentPool.h

USTRUCT()
struct FNCPoolElement
{
    UPROPERTY(Transient, Instanced) UNiagaraComponent* Component;  // 0x0000, size 0x8

    // Not reflected:
    float LastUsedTime;  // 0x0008
};
