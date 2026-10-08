// /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
// Derives from: UNiagaraPreviewAxis_InterpParamBase > UNiagaraPreviewAxis > UObject
// size 0x50, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraPreviewGrid.h

UCLASS(EditInlineNew)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
    UPROPERTY(EditAnywhere) FVector Min;  // 0x0038, size 0xC
    UPROPERTY(EditAnywhere) FVector Max;  // 0x0044, size 0xC
};
