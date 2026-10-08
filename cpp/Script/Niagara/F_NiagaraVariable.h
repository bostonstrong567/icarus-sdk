// /Script/Niagara.NiagaraVariable
// size 0x20, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraVariable : public FNiagaraVariableBase
{
    UPROPERTY() TArray<uint8> VarData;  // 0x0010, size 0x10
};
