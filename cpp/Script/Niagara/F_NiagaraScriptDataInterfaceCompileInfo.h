// /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
// size 0x38, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraScriptDataInterfaceCompileInfo
{
public:
    UPROPERTY() FName Name;  // 0x0000, size 0x8
    UPROPERTY() int32 UserPtrIdx;  // 0x0008, size 0x4
    UPROPERTY() FNiagaraTypeDefinition Type;  // 0x0010, size 0x10
    UPROPERTY() FName RegisteredParameterMapRead;  // 0x0020, size 0x8
    UPROPERTY() FName RegisteredParameterMapWrite;  // 0x0028, size 0x8
    UPROPERTY() bool bIsPlaceholder;  // 0x0030, size 0x1
};
