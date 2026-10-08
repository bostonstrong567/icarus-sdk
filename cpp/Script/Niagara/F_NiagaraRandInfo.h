// /Script/Niagara.NiagaraRandInfo
// size 0xC, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraRandInfo
{
    UPROPERTY(EditAnywhere) int32 Seed1;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) int32 Seed2;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) int32 Seed3;  // 0x0008, size 0x4
};
