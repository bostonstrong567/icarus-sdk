// /Script/Niagara.NiagaraOutlinerWorldData
// size 0x68, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraOutlinerWorldData
{
public:
    UPROPERTY(EditAnywhere) TMap<FString, FNiagaraOutlinerSystemData> Systems;  // 0x0000, size 0x50
    UPROPERTY(EditAnywhere) bool bHasBegunPlay;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere) uint8 WorldType;  // 0x0051, size 0x1
    UPROPERTY(EditAnywhere) uint8 NetMode;  // 0x0052, size 0x1
    UPROPERTY(EditAnywhere) FNiagaraOutlinerTimingData AveragePerFrameTime;  // 0x0054, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraOutlinerTimingData MaxPerFrameTime;  // 0x005C, size 0x8
};
