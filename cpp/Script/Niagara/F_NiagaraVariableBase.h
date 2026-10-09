// /Script/Niagara.NiagaraVariableBase
// size 0xC, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraVariableBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraTypeDefinitionHandle TypeDefHandle;  // 0x0008, size 0x4
};
