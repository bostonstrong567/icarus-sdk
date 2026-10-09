// /Script/Niagara.NiagaraComponentPropertyBinding
// size 0xE8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentRendererProperties.h

USTRUCT()
struct FNiagaraComponentPropertyBinding
{
public:
    UPROPERTY() FNiagaraVariableAttributeBinding AttributeBinding;  // 0x0000, size 0x58
    UPROPERTY() FName PropertyName;  // 0x0058, size 0x8
    UPROPERTY() FNiagaraTypeDefinition PropertyType;  // 0x0060, size 0x10
    UPROPERTY() FName MetadataSetterName;  // 0x0070, size 0x8
    UPROPERTY() TMap<FString, FString> PropertySetterParameterDefaults;  // 0x0078, size 0x50
    UPROPERTY(Transient) FNiagaraVariable WritableValue;  // 0x00C8, size 0x20
};
