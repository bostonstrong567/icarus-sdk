// /Script/Niagara.NiagaraActor
// Derives from: AActor > UObject
// size 0x230, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraActor.h

UCLASS(MinimalAPI, Config=Engine)
class ANiagaraActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UNiagaraComponent* NiagaraComponent;  // 0x0220, size 0x8
    UPROPERTY() uint8 bDestroyOnSystemFinish : 1;  // 0x0228, mask 0x01

    UFUNCTION() void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);  // parameters 0x1
};
