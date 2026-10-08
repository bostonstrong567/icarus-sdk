// /Script/Niagara.NiagaraOutlinerSystemInstanceData
// size 0x48, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraOutlinerSystemInstanceData
{
    UPROPERTY(EditAnywhere) FString ComponentName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) TArray<FNiagaraOutlinerEmitterInstanceData> Emitters;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) ENiagaraExecutionState ActualExecutionState;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) ENiagaraExecutionState RequestedExecutionState;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) FNiagaraScalabilityState ScalabilityState;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere) uint8 bPendingKill : 1;  // 0x0030, mask 0x01
    UPROPERTY(EditAnywhere) ENCPoolMethod PoolMethod;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere) FNiagaraOutlinerTimingData AverageTime;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraOutlinerTimingData MaxTime;  // 0x0040, size 0x8
};
