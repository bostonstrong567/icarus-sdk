// /Script/Niagara.NiagaraSimulationStageGeneric
// Derives from: UNiagaraSimulationStageBase > UNiagaraMergeable > UObject
// size 0x70, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraSimulationStageBase.h

UCLASS()
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:
    UPROPERTY(EditAnywhere) ENiagaraIterationSource IterationSource;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere) int32 Iterations;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) uint8 bSpawnOnly : 1;  // 0x0048, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bDisablePartialParticleUpdate : 1;  // 0x0048, mask 0x02
    UPROPERTY(EditAnywhere) FNiagaraVariableDataInterfaceBinding DataInterface;  // 0x0050, size 0x20
};
