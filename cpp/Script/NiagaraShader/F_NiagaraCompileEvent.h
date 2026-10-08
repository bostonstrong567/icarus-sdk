// /Script/NiagaraShader.NiagaraCompileEvent
// size 0x60, declared in Engine/Plugins/FX/Niagara/Source/NiagaraShader/Public/NiagaraShared.h

USTRUCT()
struct FNiagaraCompileEvent
{
    UPROPERTY() FNiagaraCompileEventSeverity Severity;  // 0x0000, size 0x1
    UPROPERTY() FString Message;  // 0x0008, size 0x10
    UPROPERTY() FString ShortDescription;  // 0x0018, size 0x10
    UPROPERTY() bool bDismissable;  // 0x0028, size 0x1
    UPROPERTY() FGuid NodeGuid;  // 0x002C, size 0x10
    UPROPERTY() FGuid PinGuid;  // 0x003C, size 0x10
    UPROPERTY() TArray<FGuid> StackGuids;  // 0x0050, size 0x10
};
