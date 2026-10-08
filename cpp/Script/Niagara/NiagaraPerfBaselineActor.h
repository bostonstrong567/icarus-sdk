// /Script/Niagara.NiagaraPerfBaselineActor
// Derives from: AActor > UObject
// size 0x230, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraPerfBaseline.h

UCLASS(Config=Engine)
class ANiagaraPerfBaselineActor : public AActor
{
public:
    UPROPERTY(EditAnywhere) UNiagaraBaselineController* Controller;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UTextRenderComponent* Label;  // 0x0228, size 0x8
};
