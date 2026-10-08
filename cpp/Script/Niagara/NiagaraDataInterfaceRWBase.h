// /Script/Niagara.NiagaraDataInterfaceRWBase
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0xD8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceRW.h

UCLASS(Abstract, EditInlineNew)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) TSet<int32> OutputShaderStages;  // 0x0038, size 0x50
    UPROPERTY(EditAnywhere) TSet<int32> IterationShaderStages;  // 0x0088, size 0x50
};
