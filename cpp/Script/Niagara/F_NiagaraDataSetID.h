// /Script/Niagara.NiagaraDataSetID
// size 0xC, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraDataSetID
{
    UPROPERTY(EditAnywhere) FName Name;  // 0x0000, size 0x8
    UPROPERTY() ENiagaraDataSetType Type;  // 0x0008, size 0x1
};
