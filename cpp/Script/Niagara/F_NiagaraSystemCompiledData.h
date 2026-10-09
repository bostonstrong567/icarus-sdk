// /Script/Niagara.NiagaraSystemCompiledData
// size 0x218, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraSystem.h

USTRUCT()
struct FNiagaraSystemCompiledData
{
public:
    UPROPERTY() FNiagaraParameterStore InstanceParamStore;  // 0x0000, size 0x78
    UPROPERTY() FNiagaraDataSetCompiledData DataSetCompiledData;  // 0x0078, size 0x40
    UPROPERTY() FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;  // 0x00B8, size 0x40
    UPROPERTY() FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;  // 0x00F8, size 0x40
    UPROPERTY() FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;  // 0x0138, size 0x20
    UPROPERTY() FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;  // 0x0158, size 0x20
    UPROPERTY() FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;  // 0x0178, size 0x20
    UPROPERTY() TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;  // 0x0198, size 0x10
    UPROPERTY() FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;  // 0x01A8, size 0x20
    UPROPERTY() FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;  // 0x01C8, size 0x20
    UPROPERTY() FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;  // 0x01E8, size 0x20
    UPROPERTY() TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;  // 0x0208, size 0x10
};
