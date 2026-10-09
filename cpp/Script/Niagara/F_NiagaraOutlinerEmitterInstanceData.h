// /Script/Niagara.NiagaraOutlinerEmitterInstanceData
// size 0x20, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraOutlinerEmitterInstanceData
{
public:
    UPROPERTY(EditAnywhere) FString EmitterName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) ENiagaraSimTarget SimTarget;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere) ENiagaraExecutionState ExecState;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) int32 NumParticles;  // 0x0018, size 0x4
};
