// /Script/Niagara.NiagaraBoundParameter
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraParameterStore.h

USTRUCT()
struct FNiagaraBoundParameter
{
public:
    UPROPERTY() FNiagaraVariable Parameter;  // 0x0000, size 0x20
    UPROPERTY() int32 SrcOffset;  // 0x0020, size 0x4
    UPROPERTY() int32 DestOffset;  // 0x0024, size 0x4
};
