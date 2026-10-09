// /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
// size 0x60, declared in Engine/Source/Runtime/AudioMixer/Classes/SubmixEffects/AudioMixerSubmixEffectDynamicsProcessor.h

USTRUCT()
struct FSubmixEffectDynamicsProcessorSettings
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESubmixEffectDynamicsProcessorType DynamicsProcessorType;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESubmixEffectDynamicsPeakMode PeakMode;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESubmixEffectDynamicsChannelLinkMode LinkMode;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InputGainDb;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ThresholdDb;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Ratio;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float KneeBandwidthDb;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookAheadMsec;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AttackTimeMsec;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReleaseTimeMsec;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESubmixEffectDynamicsKeySource KeySource;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAudioBus* ExternalAudioBus;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) USoundSubmix* ExternalSubmix;  // 0x0030, size 0x8
    UPROPERTY(Deprecated) uint8 bChannelLinked : 1;  // 0x0038, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAnalogMode : 1;  // 0x0038, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bBypass : 1;  // 0x0038, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bKeyAudition : 1;  // 0x0038, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float KeyGainDb;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutputGainDb;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;  // 0x0044, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;  // 0x0050, size 0xC
};
