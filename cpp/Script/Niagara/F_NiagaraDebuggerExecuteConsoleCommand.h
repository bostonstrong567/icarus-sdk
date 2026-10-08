// /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand
// size 0x18, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraDebuggerExecuteConsoleCommand
{
    UPROPERTY(EditAnywhere) FString Command;  // 0x0000, size 0x10
    UPROPERTY() bool bRequiresWorld;  // 0x0010, size 0x1
};
