// /Script/Niagara.NiagaraDataSetProperties
// size 0x20, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraDataSetProperties
{
public:
    UPROPERTY(EditAnywhere) FNiagaraDataSetID ID;  // 0x0000, size 0xC
    UPROPERTY() TArray<FNiagaraVariable> Variables;  // 0x0010, size 0x10
};
