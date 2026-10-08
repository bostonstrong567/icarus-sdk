// /Script/Niagara.NiagaraDataInterfaceAudioPlayer
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x70, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceAudioPlayer.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) USoundBase* SoundToPlay;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) USoundAttenuation* Attenuation;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere) USoundConcurrency* Concurrency;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere) TArray<FName> ParameterNames;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere) bool bLimitPlaysPerTick;  // 0x0060, size 0x1
    UPROPERTY(EditAnywhere) int32 MaxPlaysPerTick;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere) bool bStopWhenComponentIsDestroyed;  // 0x0068, size 0x1

    // Virtual functions that start here:
    //   PlayOneShotAudio, PlayPersistentAudio, SetParameterBool, SetParameterFloat, SetParameterInteger
    //   SetPausedState, UpdateLocation, UpdatePitch, UpdateRotation, UpdateVolume
};
