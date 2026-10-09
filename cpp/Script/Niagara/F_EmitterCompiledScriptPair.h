// /Script/Niagara.EmitterCompiledScriptPair
// size 0x90, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraSystem.h

USTRUCT()
struct FEmitterCompiledScriptPair
{
public:
    bool bResultsReady;  // 0x0000, not reflected
    UNiagaraEmitter * Emitter;  // 0x0008, not reflected
    UNiagaraScript * CompiledScript;  // 0x0010, not reflected
    uint32 PendingJobID;  // 0x0018, not reflected
    FNiagaraVMExecutableDataId CompileId;  // 0x0020, not reflected
    TSharedPtr<FNiagaraVMExecutableData,0> CompileResults;  // 0x0078, not reflected
    int32 ParentIndex;  // 0x0088, not reflected
};
