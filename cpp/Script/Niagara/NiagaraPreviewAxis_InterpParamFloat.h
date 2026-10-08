// /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
// Derives from: UNiagaraPreviewAxis_InterpParamBase > UNiagaraPreviewAxis > UObject
// size 0x40, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraPreviewGrid.h

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
    UPROPERTY(EditAnywhere) float Min;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) float Max;  // 0x003C, size 0x4
};
