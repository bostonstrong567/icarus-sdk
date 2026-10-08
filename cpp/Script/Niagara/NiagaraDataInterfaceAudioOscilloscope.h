// /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x48, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceAudioOscilloscope.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) USoundSubmix* Submix;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) int32 Resolution;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float ScopeInMilliseconds;  // 0x0044, size 0x4
};
