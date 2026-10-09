// /Script/Niagara.NiagaraScriptExecutionParameterStore
// size 0x98, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraScriptExecutionParameterStore.h

USTRUCT()
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
public:
    UPROPERTY() int32 ParameterSize;  // 0x0078, size 0x4
    UPROPERTY() uint32 PaddedParameterSize;  // 0x007C, size 0x4
    UPROPERTY() TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo;  // 0x0080, size 0x10
    UPROPERTY() uint8 bInitialized : 1;  // 0x0090, mask 0x01
};
