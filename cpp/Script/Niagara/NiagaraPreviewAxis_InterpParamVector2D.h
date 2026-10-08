// /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Derives from: UNiagaraPreviewAxis_InterpParamBase > UNiagaraPreviewAxis > UObject
// size 0x48, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraPreviewGrid.h

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
    UPROPERTY(EditAnywhere) FVector2D Min;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) FVector2D Max;  // 0x0040, size 0x8
};
