// /Script/Niagara.NiagaraSimpleClientInfo
// size 0x40, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraSimpleClientInfo
{
public:
    UPROPERTY(EditAnywhere) TArray<FString> Systems;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) TArray<FString> Actors;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) TArray<FString> Components;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) TArray<FString> Emitters;  // 0x0030, size 0x10
};
