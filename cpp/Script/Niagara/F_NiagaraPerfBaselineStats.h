// /Script/Niagara.NiagaraPerfBaselineStats
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraPerfBaseline.h

USTRUCT()
struct FNiagaraPerfBaselineStats
{
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float PerInstanceAvg_GT;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float PerInstanceAvg_RT;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float PerInstanceMax_GT;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float PerInstanceMax_RT;  // 0x000C, size 0x4
};
