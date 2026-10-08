// /Script/Niagara.NiagaraDataInterfaceArrayFloat3
// Derives from: UNiagaraDataInterfaceArray > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x60, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceArrayFloat.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> FloatData;  // 0x0050, size 0x10
};
