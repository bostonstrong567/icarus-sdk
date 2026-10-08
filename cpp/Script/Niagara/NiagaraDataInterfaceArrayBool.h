// /Script/Niagara.NiagaraDataInterfaceArrayBool
// Derives from: UNiagaraDataInterfaceArray > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x60, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceArrayInt.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<bool> BoolData;  // 0x0050, size 0x10
};
