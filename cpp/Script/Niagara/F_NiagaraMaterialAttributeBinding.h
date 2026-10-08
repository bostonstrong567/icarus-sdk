// /Script/Niagara.NiagaraMaterialAttributeBinding
// size 0x2C, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraMaterialAttributeBinding
{
    UPROPERTY(EditAnywhere) FName MaterialParameterName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraVariableBase NiagaraVariable;  // 0x0008, size 0xC
    UPROPERTY() FNiagaraVariableBase ResolvedNiagaraVariable;  // 0x0014, size 0xC
    UPROPERTY(EditAnywhere) FNiagaraVariableBase NiagaraChildVariable;  // 0x0020, size 0xC
};
