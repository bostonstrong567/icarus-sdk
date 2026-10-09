// /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
// size 0x30, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraCompileHashVisitorDebugInfo
{
public:
    UPROPERTY() FString Object;  // 0x0000, size 0x10
    UPROPERTY() TArray<FString> PropertyKeys;  // 0x0010, size 0x10
    UPROPERTY() TArray<FString> PropertyValues;  // 0x0020, size 0x10
};
