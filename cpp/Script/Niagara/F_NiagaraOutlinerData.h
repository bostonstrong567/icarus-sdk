// /Script/Niagara.NiagaraOutlinerData
// size 0x50, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraOutlinerData
{
public:
    UPROPERTY(EditAnywhere) TMap<FString, FNiagaraOutlinerWorldData> WorldData;  // 0x0000, size 0x50
};
