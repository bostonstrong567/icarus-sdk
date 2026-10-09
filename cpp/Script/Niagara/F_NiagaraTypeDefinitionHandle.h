// /Script/Niagara.NiagaraTypeDefinitionHandle
// size 0x4, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraTypeDefinitionHandle
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() int32 RegisteredTypeIndex;  // 0x0000, size 0x4
};
