// /Script/Niagara.NiagaraScalabilityManager
// size 0x70, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraScalabilityManager.h

USTRUCT()
struct FNiagaraScalabilityManager
{
    UPROPERTY(Transient) UNiagaraEffectType* EffectType;  // 0x0000, size 0x8
    UPROPERTY(Transient) TArray<UNiagaraComponent*> ManagedComponents;  // 0x0008, size 0x10

    // Not reflected:
    TArray<FNiagaraScalabilityState,TSizedDefaultAllocator<32> > State;  // 0x0018
    float LastUpdateTime;  // 0x0028
    FComponentIterationContext DefaultContext;  // 0x0030
};
