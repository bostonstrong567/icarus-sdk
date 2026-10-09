// /Script/Niagara.NiagaraScriptInstanceParameterStore
// size 0x88, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraScriptExecutionParameterStore.h

USTRUCT()
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
private:
    FNiagaraCompiledDataReference<FNiagaraScriptExecutionParameterStore> ScriptParameterStore;  // 0x0078, not reflected
    uint8 : 1 bInitialized;  // 0x0080, not reflected
};
