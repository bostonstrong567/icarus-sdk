// /Script/Niagara.NiagaraSpawnInfo
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraSpawnInfo
{
public:
    UPROPERTY(BlueprintReadWrite) int32 Count;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) float InterpStartDt;  // 0x0004, size 0x4
    UPROPERTY(BlueprintReadWrite) float IntervalDt;  // 0x0008, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 SpawnGroup;  // 0x000C, size 0x4
};
