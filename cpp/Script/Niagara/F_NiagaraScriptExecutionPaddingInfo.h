// /Script/Niagara.NiagaraScriptExecutionPaddingInfo
// size 0x8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraScriptExecutionParameterStore.h

USTRUCT()
struct FNiagaraScriptExecutionPaddingInfo
{
public:
    UPROPERTY() uint16 SrcOffset;  // 0x0000, size 0x2
    UPROPERTY() uint16 DestOffset;  // 0x0002, size 0x2
    UPROPERTY() uint16 SrcSize;  // 0x0004, size 0x2
    UPROPERTY() uint16 DestSize;  // 0x0006, size 0x2
};
