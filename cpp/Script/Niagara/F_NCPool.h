// /Script/Niagara.NCPool
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentPool.h

USTRUCT()
struct FNCPool
{
    UPROPERTY(Transient) TArray<FNCPoolElement> FreeElements;  // 0x0000, size 0x10
};
