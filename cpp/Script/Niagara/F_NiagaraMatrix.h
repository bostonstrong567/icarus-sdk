// /Script/Niagara.NiagaraMatrix
// size 0x40, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraMatrix
{
    UPROPERTY(EditAnywhere) FVector4 Row0;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) FVector4 Row1;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) FVector4 Row2;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) FVector4 Row3;  // 0x0030, size 0x10
};
