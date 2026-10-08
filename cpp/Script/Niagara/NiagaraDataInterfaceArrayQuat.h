// /Script/Niagara.NiagaraDataInterfaceArrayQuat
// Derives from: UNiagaraDataInterfaceArray > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x60, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceArrayFloat.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FQuat> QuatData;  // 0x0050, size 0x10
};
