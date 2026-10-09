// /Script/NiagaraCore.NiagaraCompileHash
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/NiagaraCore/Public/NiagaraCompileHash.h

USTRUCT()
struct FNiagaraCompileHash
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<uint8> DataHash;  // 0x0000, size 0x10
};
