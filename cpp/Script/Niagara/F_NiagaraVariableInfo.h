// /Script/Niagara.NiagaraVariableInfo
// size 0x40, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraVariableInfo
{
public:
    UPROPERTY() FNiagaraVariable Variable;  // 0x0000, size 0x20
    UPROPERTY() FText Definition;  // 0x0020, size 0x18
    UPROPERTY() UNiagaraDataInterface* DataInterface;  // 0x0038, size 0x8
};
