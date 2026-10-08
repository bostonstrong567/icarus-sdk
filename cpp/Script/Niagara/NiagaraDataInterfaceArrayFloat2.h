// /Script/Niagara.NiagaraDataInterfaceArrayFloat2
// Derives from: UNiagaraDataInterfaceArray > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x60, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceArrayFloat.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector2D> FloatData;  // 0x0050, size 0x10
};
