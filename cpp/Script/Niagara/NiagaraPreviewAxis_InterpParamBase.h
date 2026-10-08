// /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
// Derives from: UNiagaraPreviewAxis > UObject
// size 0x38, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraPreviewGrid.h

UCLASS(Abstract, EditInlineNew)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
    UPROPERTY(EditAnywhere) FName Param;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) int32 Count;  // 0x0030, size 0x4
};
