// /Script/Niagara.NiagaraDataInterfacePlatformSet
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x68, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfacePlatformSet.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) FNiagaraPlatformSet Platforms;  // 0x0038, size 0x30
};
