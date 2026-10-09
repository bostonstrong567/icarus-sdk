// /Script/Niagara.NiagaraSystemCompileRequest
// size 0x80, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraSystem.h

USTRUCT()
struct FNiagaraSystemCompileRequest
{
public:
    double StartTime;  // 0x0000, not reflected
    UPROPERTY() TArray<UObject*> RootObjects;  // 0x0008, size 0x10
    TArray<FEmitterCompiledScriptPair,TSizedDefaultAllocator<32> > EmitterCompiledScriptPairs;  // 0x0018, not reflected
    TMap<UNiagaraScript *,TSharedPtr<FNiagaraCompileRequestDataBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNiagaraScript *,TSharedPtr<FNiagaraCompileRequestDataBase,1>,0> > MappedData;  // 0x0028, not reflected
    bool bIsValid;  // 0x0078, not reflected
    bool bForced;  // 0x0079, not reflected
};
