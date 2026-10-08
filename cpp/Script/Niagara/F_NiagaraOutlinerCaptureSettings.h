// /Script/Niagara.NiagaraOutlinerCaptureSettings
// size 0xC, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraOutlinerCaptureSettings
{
    UPROPERTY(EditAnywhere) bool bTriggerCapture;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, Config) uint32 CaptureDelayFrames;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bGatherPerfData;  // 0x0008, size 0x1
};
