// /Script/Niagara.NiagaraScript
// Derives from: UNiagaraScriptBase > UObject
// size 0x2E0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScript.h

UCLASS(MinimalAPI)
class UNiagaraScript : public UNiagaraScriptBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() ENiagaraScriptUsage Usage;  // 0x0028, size 0x1
    UPROPERTY() FNiagaraParameterStore RapidIterationParameters;  // 0x0040, size 0x78
private:
    UPROPERTY() FGuid UsageId;  // 0x002C, size 0x10
    UPROPERTY() FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;  // 0x00B8, size 0x98
    UPROPERTY() TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;  // 0x0150, size 0x10
    UPROPERTY() FNiagaraVMExecutableDataId CachedScriptVMId;  // 0x0160, size 0x58
    TUniquePtr<FNiagaraShaderScript,TDefaultDelete<FNiagaraShaderScript> > ScriptResource;  // 0x01B8, not reflected
    TRefCountPtr<FRHIComputeShader> ScriptShader;  // 0x01C0, not reflected
    UPROPERTY() FNiagaraVMExecutableData CachedScriptVM;  // 0x01C8, size 0xF0
    UPROPERTY() TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences;  // 0x02B8, size 0x10
    UPROPERTY() TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;  // 0x02C8, size 0x10
    FThreadSafeBool ReleasedByRT;  // 0x02D8, not reflected
public:
    UFUNCTION() void RaiseOnGPUCompilationComplete();
};
