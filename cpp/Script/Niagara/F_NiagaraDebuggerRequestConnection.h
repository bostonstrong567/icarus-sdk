// /Script/Niagara.NiagaraDebuggerRequestConnection
// size 0x20, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraDebuggerRequestConnection
{
    UPROPERTY(EditAnywhere) FGuid SessionId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FGuid InstanceId;  // 0x0010, size 0x10
};
