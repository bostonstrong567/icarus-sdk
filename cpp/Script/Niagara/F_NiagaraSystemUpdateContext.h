// /Script/Niagara.NiagaraSystemUpdateContext
// size 0x68, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraSystemUpdateContext
{
    UPROPERTY(Transient) TArray<UNiagaraComponent*> ComponentsToReset;  // 0x0000, size 0x10
    UPROPERTY(Transient) TArray<UNiagaraComponent*> ComponentsToReInit;  // 0x0010, size 0x10
    UPROPERTY(Transient) TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy;  // 0x0020, size 0x10
    UPROPERTY(Transient) TArray<UNiagaraSystem*> SystemSimsToDestroy;  // 0x0030, size 0x10

    // Not reflected:
    bool bDestroyOnAdd;  // 0x0040
    bool bOnlyActive;  // 0x0041
    bool bDestroySystemSim;  // 0x0042
    TDelegate<void __cdecl(UNiagaraComponent *),FDefaultDelegateUserPolicy> PreWork;  // 0x0048
    TDelegate<void __cdecl(UNiagaraComponent *),FDefaultDelegateUserPolicy> PostWork;  // 0x0058
};
