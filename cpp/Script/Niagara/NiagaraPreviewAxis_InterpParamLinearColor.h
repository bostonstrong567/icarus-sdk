// /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Derives from: UNiagaraPreviewAxis_InterpParamBase > UNiagaraPreviewAxis > UObject
// size 0x58, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraPreviewGrid.h

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
    UPROPERTY(EditAnywhere) FLinearColor Min;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) FLinearColor Max;  // 0x0048, size 0x10
};
