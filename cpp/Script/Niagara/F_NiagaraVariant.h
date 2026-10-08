// /Script/Niagara.NiagaraVariant
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraVariant.h

USTRUCT()
struct FNiagaraVariant
{
    UPROPERTY(EditAnywhere, Instanced) UObject* Object;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UNiagaraDataInterface* DataInterface;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) TArray<uint8> Bytes;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) ENiagaraVariantMode CurrentMode;  // 0x0020, size 0x4
};
