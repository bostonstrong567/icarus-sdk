// /Script/Niagara.NiagaraSimulationStageBase
// Derives from: UNiagaraMergeable > UObject
// size 0x40, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraSimulationStageBase.h

UCLASS()
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
    UPROPERTY() UNiagaraScript* Script;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) FName SimulationStageName;  // 0x0030, size 0x8
    UPROPERTY() uint8 bEnabled : 1;  // 0x0038, mask 0x01

    // Virtual functions that start here:
    //   AppendCompileHash
};
