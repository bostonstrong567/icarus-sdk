// /Script/Niagara.NiagaraVMExecutableDataId
// size 0x58, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScript.h

USTRUCT()
struct FNiagaraVMExecutableDataId
{
    UPROPERTY() FGuid CompilerVersionID;  // 0x0000, size 0x10
    UPROPERTY() ENiagaraScriptUsage ScriptUsageType;  // 0x0010, size 0x1
    UPROPERTY() FGuid ScriptUsageTypeID;  // 0x0014, size 0x10
    UPROPERTY() uint8 bUsesRapidIterationParams : 1;  // 0x0024, mask 0x01
    UPROPERTY() uint8 bInterpolatedSpawn : 1;  // 0x0024, mask 0x02
    UPROPERTY() uint8 bRequiresPersistentIDs : 1;  // 0x0024, mask 0x04
    UPROPERTY(Deprecated) FGuid BaseScriptID;  // 0x0028, size 0x10
    UPROPERTY() FNiagaraCompileHash BaseScriptCompileHash;  // 0x0038, size 0x10
    UPROPERTY() FGuid ScriptVersionID;  // 0x0048, size 0x10
};
