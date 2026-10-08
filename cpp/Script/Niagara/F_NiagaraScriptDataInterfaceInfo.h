// /Script/Niagara.NiagaraScriptDataInterfaceInfo
// size 0x38, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraScriptDataInterfaceInfo
{
    UPROPERTY() UNiagaraDataInterface* DataInterface;  // 0x0000, size 0x8
    UPROPERTY() FName Name;  // 0x0008, size 0x8
    UPROPERTY() int32 UserPtrIdx;  // 0x0010, size 0x4
    UPROPERTY() FNiagaraTypeDefinition Type;  // 0x0018, size 0x10
    UPROPERTY() FName RegisteredParameterMapRead;  // 0x0028, size 0x8
    UPROPERTY() FName RegisteredParameterMapWrite;  // 0x0030, size 0x8
};
