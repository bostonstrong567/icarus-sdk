// /Script/Niagara.NiagaraScriptSourceBase
// Derives from: UObject
// size 0x48, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScriptSourceBase.h

UCLASS(MinimalAPI)
class UNiagaraScriptSourceBase : public UObject
{
public:
    TArray<TSharedPtr<EditorExposedVectorConstant,0>,TSizedDefaultAllocator<32> > ExposedVectorConstants;  // 0x0028, not reflected
    TArray<TSharedPtr<EditorExposedVectorCurveConstant,0>,TSizedDefaultAllocator<32> > ExposedVectorCurveConstants;  // 0x0038, not reflected

    // Virtual functions that start here:
    //   AddModuleIfMissing, ComputeVMCompilationId, GetChangeID, GetCompileBaseId, GetCompileHash
    //   IsSynchronized, MarkNotSynchronized, PostLoadFromEmitter, PreCompile
};
