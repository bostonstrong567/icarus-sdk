// /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
// Derives from: UNiagaraPreviewAxis > UObject
// size 0x38, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraPreviewGrid.h

UCLASS(Abstract, EditInlineNew)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FName Param;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) int32 Count;  // 0x0030, size 0x4
};
