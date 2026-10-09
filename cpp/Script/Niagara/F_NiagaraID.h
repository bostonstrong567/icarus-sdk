// /Script/Niagara.NiagaraID
// size 0x8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraID
{
public:
    UPROPERTY(BlueprintReadWrite) int32 Index;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) int32 AcquireTag;  // 0x0004, size 0x4
};
