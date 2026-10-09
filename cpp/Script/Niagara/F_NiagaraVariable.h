// /Script/Niagara.NiagaraVariable
// size 0x20, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraVariable : public FNiagaraVariableBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<uint8> VarData;  // 0x0010, size 0x10
};
