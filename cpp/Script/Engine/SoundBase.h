// /Script/Engine.SoundBase
// Derives from: UObject
// size 0x170, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundBase.h

UCLASS(Abstract, EditInlineNew, Config=Engine)
class USoundBase : public UObject, public IInterface_AssetUserData
{
public:
    UPROPERTY(EditAnywhere) USoundClass* SoundClassObject;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere) uint8 bDebug : 1;  // 0x0038, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverrideConcurrency : 1;  // 0x0038, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableBusSends : 1;  // 0x0038, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bEnableBaseSubmix : 1;  // 0x0038, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bEnableSubmixSends : 1;  // 0x0038, mask 0x10
    UPROPERTY() uint8 bHasDelayNode : 1;  // 0x0038, mask 0x20
    UPROPERTY() uint8 bHasConcatenatorNode : 1;  // 0x0038, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bBypassVolumeScaleForPriority : 1;  // 0x0038, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EVirtualizationMode VirtualizationMode;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<USoundConcurrency*> ConcurrencySet;  // 0x0090, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundConcurrencySettings ConcurrencyOverrides;  // 0x00E0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Duration;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MaxDistance;  // 0x010C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TotalSamples;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Priority;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere) USoundAttenuation* AttenuationSettings;  // 0x0118, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundSubmixBase* SoundSubmixObject;  // 0x0120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSoundSubmixSendInfo> SoundSubmixSends;  // 0x0128, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundEffectSourcePresetChain* SourceEffectChain;  // 0x0138, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSoundSourceBusSendInfo> BusSends;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FSoundSourceBusSendInfo> PreEffectBusSends;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere) TArray<UAssetUserData*> AssetUserData;  // 0x0160, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMap<unsigned int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned int,int,0> > CurrentPlayCount;  // 0x0040

    // Virtual functions that start here:
    //   CreateSoundGenerator, GetAttenuationSettingsToApply, GetCurveData, GetDuration, GetMaxDistance
    //   GetPitchMultiplier, GetSoundClass, GetSoundSubmix, GetSoundWavesWithCookedAnalysisData
    //   GetSubtitlePriority, GetVolumeMultiplier, HasAttenuationNode, HasCookedAmplitudeEnvelopeData
    //   HasCookedFFTData, IsPlayWhenSilent, IsPlayable, Parse, ShouldApplyInteriorVolumes
    //   SupportsSubtitles
};
