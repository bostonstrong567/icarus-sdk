// /Script/Niagara.NiagaraUserRedirectionParameterStore
// size 0xC8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraUserRedirectionParameterStore.h

USTRUCT()
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
    UPROPERTY() TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects;  // 0x0078, size 0x50
};
