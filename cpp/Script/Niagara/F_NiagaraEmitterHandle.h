// /Script/Niagara.NiagaraEmitterHandle
// size 0x30, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitterInstance.h

USTRUCT()
struct FNiagaraEmitterHandle
{
    UPROPERTY(EditAnywhere) FGuid Id;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FName IdName;  // 0x0010, size 0x8
    UPROPERTY() bool bIsEnabled;  // 0x0018, size 0x1
    UPROPERTY() FName Name;  // 0x001C, size 0x8
    UPROPERTY() UNiagaraEmitter* Instance;  // 0x0028, size 0x8
};
