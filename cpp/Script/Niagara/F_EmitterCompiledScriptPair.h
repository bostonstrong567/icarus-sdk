// /Script/Niagara.EmitterCompiledScriptPair
// size 0x90, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraSystem.h

USTRUCT()
struct FEmitterCompiledScriptPair
{

    // Not reflected:
    bool bResultsReady;  // 0x0000
    UNiagaraEmitter * Emitter;  // 0x0008
    UNiagaraScript * CompiledScript;  // 0x0010
    uint32 PendingJobID;  // 0x0018
    FNiagaraVMExecutableDataId CompileId;  // 0x0020
    TSharedPtr<FNiagaraVMExecutableData,0> CompileResults;  // 0x0078
    int32 ParentIndex;  // 0x0088
};
