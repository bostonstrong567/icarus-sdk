// /Script/Niagara.NiagaraDataInterfaceArrayInt32
// Derives from: UNiagaraDataInterfaceArray > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x60, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceArrayInt.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> IntData;  // 0x0050, size 0x10
};
