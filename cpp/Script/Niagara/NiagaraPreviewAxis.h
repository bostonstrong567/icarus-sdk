// /Script/Niagara.NiagaraPreviewAxis
// Derives from: UObject
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraPreviewGrid.h

UCLASS(Abstract, EditInlineNew)
class UNiagaraPreviewAxis : public UObject
{
public:
    UFUNCTION(BlueprintNativeEvent) void ApplyToPreview(UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, FString& OutLabelText);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) int32 Num();  // parameters 0x4

    // Virtual functions that start here:
    //   ApplyToPreview_Implementation, Num_Implementation
};
