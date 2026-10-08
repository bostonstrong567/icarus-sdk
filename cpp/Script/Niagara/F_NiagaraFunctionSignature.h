// /Script/Niagara.NiagaraFunctionSignature
// size 0x90, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraFunctionSignature
{
    UPROPERTY() FName Name;  // 0x0000, size 0x8
    UPROPERTY() TArray<FNiagaraVariable> Inputs;  // 0x0008, size 0x10
    UPROPERTY() TArray<FNiagaraVariable> Outputs;  // 0x0018, size 0x10
    UPROPERTY() FName OwnerName;  // 0x0028, size 0x8
    UPROPERTY() uint8 bRequiresContext : 1;  // 0x0030, mask 0x01
    UPROPERTY() uint8 bRequiresExecPin : 1;  // 0x0030, mask 0x02
    UPROPERTY() uint8 bMemberFunction : 1;  // 0x0030, mask 0x04
    UPROPERTY() uint8 bExperimental : 1;  // 0x0030, mask 0x08
    UPROPERTY() uint8 bSupportsCPU : 1;  // 0x0030, mask 0x10
    UPROPERTY() uint8 bSupportsGPU : 1;  // 0x0030, mask 0x20
    UPROPERTY() uint8 bWriteFunction : 1;  // 0x0030, mask 0x40
    UPROPERTY() uint8 bSoftDeprecatedFunction : 1;  // 0x0030, mask 0x80
    UPROPERTY() uint8 bIsCompileTagGenerator : 1;  // 0x0031, mask 0x01
    UPROPERTY(Transient) uint8 bHidden : 1;  // 0x0031, mask 0x02
    UPROPERTY() int32 ModuleUsageBitmask;  // 0x0034, size 0x4
    UPROPERTY() int32 ContextStageMinIndex;  // 0x0038, size 0x4
    UPROPERTY() int32 ContextStageMaxIndex;  // 0x003C, size 0x4
    UPROPERTY() TMap<FName, FName> FunctionSpecifiers;  // 0x0040, size 0x50
};
