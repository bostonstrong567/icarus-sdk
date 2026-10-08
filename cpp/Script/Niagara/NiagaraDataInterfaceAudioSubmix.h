// /Script/Niagara.NiagaraDataInterfaceAudioSubmix
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x40, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceAudio.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) USoundSubmix* Submix;  // 0x0038, size 0x8
};
