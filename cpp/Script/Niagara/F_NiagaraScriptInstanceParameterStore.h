// /Script/Niagara.NiagaraScriptInstanceParameterStore
// size 0x88, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraScriptExecutionParameterStore.h

USTRUCT()
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{

    // Not reflected:
    FNiagaraCompiledDataReference<FNiagaraScriptExecutionParameterStore> ScriptParameterStore;  // 0x0078
    uint8 : 1 bInitialized;  // 0x0080
};
