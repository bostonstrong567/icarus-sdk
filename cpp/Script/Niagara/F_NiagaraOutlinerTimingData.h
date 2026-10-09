// /Script/Niagara.NiagaraOutlinerTimingData
// size 0x8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraOutlinerTimingData
{
public:
    UPROPERTY(EditAnywhere) float GameThread;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float RenderThread;  // 0x0004, size 0x4
};
