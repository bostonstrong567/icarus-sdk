// /Script/Niagara.NiagaraCompileDependency
// size 0x50, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraCompileDependency
{
public:
    UPROPERTY() FString LinkerErrorMessage;  // 0x0000, size 0x10
    UPROPERTY() FGuid NodeGuid;  // 0x0010, size 0x10
    UPROPERTY() FGuid PinGuid;  // 0x0020, size 0x10
    UPROPERTY() TArray<FGuid> StackGuids;  // 0x0030, size 0x10
    UPROPERTY() FNiagaraVariableBase DependentVariable;  // 0x0040, size 0xC
};
