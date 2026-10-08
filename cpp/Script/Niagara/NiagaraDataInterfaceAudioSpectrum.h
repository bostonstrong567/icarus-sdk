// /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
// Derives from: UNiagaraDataInterfaceAudioSubmix > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x50, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceAudioSpectrum.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
public:
    UPROPERTY(EditAnywhere) int32 Resolution;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float MinimumFrequency;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) float MaximumFrequency;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) float NoiseFloorDb;  // 0x004C, size 0x4
};
