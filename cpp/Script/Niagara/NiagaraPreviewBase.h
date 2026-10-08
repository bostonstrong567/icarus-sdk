// /Script/Niagara.NiagaraPreviewBase
// Derives from: AActor > UObject
// size 0x220, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraPreviewGrid.h

UCLASS(Abstract, Transient, Config=Engine)
class ANiagaraPreviewBase : public AActor
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetLabelText(const FText& InXAxisText, const FText& InYAxisText);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetSystem(UNiagaraSystem* InSystem);  // parameters 0x8
};
