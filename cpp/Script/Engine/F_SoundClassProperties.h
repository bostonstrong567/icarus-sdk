// /Script/Engine.SoundClassProperties
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundClass.h

USTRUCT()
struct FSoundClassProperties
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Volume;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Pitch;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LowPassFilterFrequency;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float AttenuationDistanceScale;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LFEBleed;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VoiceCenterChannelVolume;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RadioFilterVolume;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RadioFilterVolumeThreshold;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bApplyEffects : 1;  // 0x0020, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAlwaysPlay : 1;  // 0x0020, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIsUISound : 1;  // 0x0020, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIsMusic : 1;  // 0x0020, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCenterChannelOnly : 1;  // 0x0020, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bApplyAmbientVolumes : 1;  // 0x0020, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bReverb : 1;  // 0x0020, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Default2DReverbSendAmount;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FSoundModulationDefaultSettings ModulationSettings;  // 0x0028, size 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EAudioOutputTarget> OutputTarget;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ESoundWaveLoadingBehavior LoadingBehavior;  // 0x0069, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) USoundSubmix* DefaultSubmix;  // 0x0070, size 0x8
};
