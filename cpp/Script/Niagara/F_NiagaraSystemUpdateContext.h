// /Script/Niagara.NiagaraSystemUpdateContext
// size 0x68, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraSystemUpdateContext
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) TArray<UNiagaraComponent*> ComponentsToReset;  // 0x0000, size 0x10
    UPROPERTY(Transient) TArray<UNiagaraComponent*> ComponentsToReInit;  // 0x0010, size 0x10
    UPROPERTY(Transient) TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy;  // 0x0020, size 0x10
    UPROPERTY(Transient) TArray<UNiagaraSystem*> SystemSimsToDestroy;  // 0x0030, size 0x10
    bool bDestroyOnAdd;  // 0x0040, not reflected
    bool bOnlyActive;  // 0x0041, not reflected
    bool bDestroySystemSim;  // 0x0042, not reflected
    TDelegate<void __cdecl(UNiagaraComponent *),FDefaultDelegateUserPolicy> PreWork;  // 0x0048, not reflected
    TDelegate<void __cdecl(UNiagaraComponent *),FDefaultDelegateUserPolicy> PostWork;  // 0x0058, not reflected
};
