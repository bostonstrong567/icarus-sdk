// /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// size 0x30, declared in Engine/Plugins/FX/Niagara/Source/NiagaraShader/Public/NiagaraShared.h

USTRUCT()
struct FNiagaraDataInterfaceGPUParamInfo
{
public:
    UPROPERTY() FString DataInterfaceHLSLSymbol;  // 0x0000, size 0x10
    UPROPERTY() FString DIClassName;  // 0x0010, size 0x10
    UPROPERTY() TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;  // 0x0020, size 0x10
};
