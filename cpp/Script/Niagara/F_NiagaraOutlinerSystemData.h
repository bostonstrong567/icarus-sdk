// /Script/Niagara.NiagaraOutlinerSystemData
// size 0x30, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraOutlinerSystemData
{
    UPROPERTY(EditAnywhere) TArray<FNiagaraOutlinerSystemInstanceData> SystemInstances;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FNiagaraOutlinerTimingData AveragePerFrameTime;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraOutlinerTimingData MaxPerFrameTime;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraOutlinerTimingData AveragePerInstanceTime;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraOutlinerTimingData MaxPerInstanceTime;  // 0x0028, size 0x8
};
