// /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
// Derives from: UNiagaraPreviewAxis_InterpParamBase > UNiagaraPreviewAxis > UObject
// size 0x60, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraPreviewGrid.h

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
    UPROPERTY(EditAnywhere) FVector4 Min;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) FVector4 Max;  // 0x0050, size 0x10
};
