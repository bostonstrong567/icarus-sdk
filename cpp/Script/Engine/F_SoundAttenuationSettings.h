// /Script/Engine.SoundAttenuationSettings
// size 0x3A0, declared in Engine/Source/Runtime/Engine/Classes/Sound/SoundAttenuation.h

USTRUCT()
struct FSoundAttenuationSettings : public FBaseAttenuationSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAttenuate : 1;  // 0x00B0, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bSpatialize : 1;  // 0x00B0, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAttenuateWithLPF : 1;  // 0x00B0, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableListenerFocus : 1;  // 0x00B0, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableFocusInterpolation : 1;  // 0x00B0, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableOcclusion : 1;  // 0x00B0, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bUseComplexCollisionForOcclusion : 1;  // 0x00B0, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableReverbSend : 1;  // 0x00B0, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnablePriorityAttenuation : 1;  // 0x00B1, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bApplyNormalizationToStereoSounds : 1;  // 0x00B1, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableLogFrequencyScaling : 1;  // 0x00B1, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bEnableSubmixSends : 1;  // 0x00B1, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESoundSpatializationAlgorithm> SpatializationAlgorithm;  // 0x00B2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BinauralRadius;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EAirAbsorptionMethod AbsorptionMethod;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECollisionChannel> OcclusionTraceChannel;  // 0x00B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EReverbSendMethod ReverbSendMethod;  // 0x00BA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EPriorityAttenuationMethod PriorityAttenuationMethod;  // 0x00BB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OmniRadius;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float StereoSpread;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LPFRadiusMin;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LPFRadiusMax;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve;  // 0x00D0, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve;  // 0x0158, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LPFFrequencyAtMin;  // 0x01E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LPFFrequencyAtMax;  // 0x01E4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HPFFrequencyAtMin;  // 0x01E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HPFFrequencyAtMax;  // 0x01EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FocusAzimuth;  // 0x01F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NonFocusAzimuth;  // 0x01F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FocusDistanceScale;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NonFocusDistanceScale;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FocusPriorityScale;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NonFocusPriorityScale;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FocusVolumeAttenuation;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NonFocusVolumeAttenuation;  // 0x020C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FocusAttackInterpSpeed;  // 0x0210, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FocusReleaseInterpSpeed;  // 0x0214, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OcclusionLowPassFilterFrequency;  // 0x0218, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OcclusionVolumeAttenuation;  // 0x021C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OcclusionInterpolationTime;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReverbWetLevelMin;  // 0x0224, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReverbWetLevelMax;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReverbDistanceMin;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReverbDistanceMax;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ManualReverbSendLevel;  // 0x0234, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRuntimeFloatCurve CustomReverbSendCurve;  // 0x0238, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAttenuationSubmixSendSettings> SubmixSendSettings;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PriorityAttenuationMin;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PriorityAttenuationMax;  // 0x02D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PriorityAttenuationDistanceMin;  // 0x02D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PriorityAttenuationDistanceMax;  // 0x02DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ManualPriorityAttenuation;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRuntimeFloatCurve CustomPriorityAttenuationCurve;  // 0x02E8, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoundAttenuationPluginSettings PluginSettings;  // 0x0370, size 0x30
};
