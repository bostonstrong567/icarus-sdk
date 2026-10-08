// /Script/Engine.PostProcessSettings
// size 0x560, declared in Engine/Source/Runtime/Engine/Classes/Engine/Scene.h

USTRUCT()
struct FPostProcessSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_TemperatureType : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_WhiteTemp : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_WhiteTint : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorSaturation : 1;  // 0x0000, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorContrast : 1;  // 0x0000, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorGamma : 1;  // 0x0000, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorGain : 1;  // 0x0000, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorOffset : 1;  // 0x0000, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorSaturationShadows : 1;  // 0x0001, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorContrastShadows : 1;  // 0x0001, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorGammaShadows : 1;  // 0x0001, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorGainShadows : 1;  // 0x0001, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorOffsetShadows : 1;  // 0x0001, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorSaturationMidtones : 1;  // 0x0001, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorContrastMidtones : 1;  // 0x0001, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorGammaMidtones : 1;  // 0x0001, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorGainMidtones : 1;  // 0x0002, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorOffsetMidtones : 1;  // 0x0002, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorSaturationHighlights : 1;  // 0x0002, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorContrastHighlights : 1;  // 0x0002, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorGammaHighlights : 1;  // 0x0002, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorGainHighlights : 1;  // 0x0002, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorOffsetHighlights : 1;  // 0x0002, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorCorrectionShadowsMax : 1;  // 0x0002, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorCorrectionHighlightsMin : 1;  // 0x0003, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BlueCorrection : 1;  // 0x0003, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ExpandGamut : 1;  // 0x0003, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ToneCurveAmount : 1;  // 0x0003, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmWhitePoint : 1;  // 0x0003, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmSaturation : 1;  // 0x0003, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmChannelMixerRed : 1;  // 0x0003, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmChannelMixerGreen : 1;  // 0x0003, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmChannelMixerBlue : 1;  // 0x0004, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmContrast : 1;  // 0x0004, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmDynamicRange : 1;  // 0x0004, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmHealAmount : 1;  // 0x0004, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmToeAmount : 1;  // 0x0004, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmShadowTint : 1;  // 0x0004, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmShadowTintBlend : 1;  // 0x0004, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmShadowTintAmount : 1;  // 0x0004, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmSlope : 1;  // 0x0005, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmToe : 1;  // 0x0005, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmShoulder : 1;  // 0x0005, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmBlackClip : 1;  // 0x0005, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_FilmWhiteClip : 1;  // 0x0005, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_SceneColorTint : 1;  // 0x0005, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_SceneFringeIntensity : 1;  // 0x0005, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ChromaticAberrationStartOffset : 1;  // 0x0005, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientCubemapTint : 1;  // 0x0006, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientCubemapIntensity : 1;  // 0x0006, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomMethod : 1;  // 0x0006, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomIntensity : 1;  // 0x0006, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomThreshold : 1;  // 0x0006, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom1Tint : 1;  // 0x0006, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom1Size : 1;  // 0x0006, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom2Size : 1;  // 0x0006, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom2Tint : 1;  // 0x0007, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom3Tint : 1;  // 0x0007, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom3Size : 1;  // 0x0007, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom4Tint : 1;  // 0x0007, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom4Size : 1;  // 0x0007, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom5Tint : 1;  // 0x0007, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom5Size : 1;  // 0x0007, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom6Tint : 1;  // 0x0007, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_Bloom6Size : 1;  // 0x0008, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomSizeScale : 1;  // 0x0008, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomConvolutionTexture : 1;  // 0x0008, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomConvolutionSize : 1;  // 0x0008, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomConvolutionCenterUV : 1;  // 0x0008, mask 0x10
    UPROPERTY(Deprecated) uint8 bOverride_BloomConvolutionPreFilter : 1;  // 0x0008, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomConvolutionPreFilterMin : 1;  // 0x0008, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomConvolutionPreFilterMax : 1;  // 0x0008, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomConvolutionPreFilterMult : 1;  // 0x0009, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomConvolutionBufferScale : 1;  // 0x0009, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomDirtMaskIntensity : 1;  // 0x0009, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomDirtMaskTint : 1;  // 0x0009, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_BloomDirtMask : 1;  // 0x0009, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_CameraShutterSpeed : 1;  // 0x0009, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_CameraISO : 1;  // 0x0009, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AutoExposureMethod : 1;  // 0x0009, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AutoExposureLowPercent : 1;  // 0x000A, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AutoExposureHighPercent : 1;  // 0x000A, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AutoExposureMinBrightness : 1;  // 0x000A, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AutoExposureMaxBrightness : 1;  // 0x000A, mask 0x08
    UPROPERTY(Deprecated) uint8 bOverride_AutoExposureCalibrationConstant : 1;  // 0x000A, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AutoExposureSpeedUp : 1;  // 0x000A, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AutoExposureSpeedDown : 1;  // 0x000A, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AutoExposureBias : 1;  // 0x000A, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AutoExposureBiasCurve : 1;  // 0x000B, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AutoExposureMeterMask : 1;  // 0x000B, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AutoExposureApplyPhysicalCameraExposure : 1;  // 0x000B, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_HistogramLogMin : 1;  // 0x000B, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_HistogramLogMax : 1;  // 0x000B, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LensFlareIntensity : 1;  // 0x000B, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LensFlareTint : 1;  // 0x000B, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LensFlareTints : 1;  // 0x000B, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LensFlareBokehSize : 1;  // 0x000C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LensFlareBokehShape : 1;  // 0x000C, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LensFlareThreshold : 1;  // 0x000C, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_VignetteIntensity : 1;  // 0x000C, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_GrainIntensity : 1;  // 0x000C, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_GrainJitter : 1;  // 0x000C, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionIntensity : 1;  // 0x000C, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionStaticFraction : 1;  // 0x000C, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionRadius : 1;  // 0x000D, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionFadeDistance : 1;  // 0x000D, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionFadeRadius : 1;  // 0x000D, mask 0x04
    UPROPERTY(Deprecated) uint8 bOverride_AmbientOcclusionDistance : 1;  // 0x000D, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionRadiusInWS : 1;  // 0x000D, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionPower : 1;  // 0x000D, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionBias : 1;  // 0x000D, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionQuality : 1;  // 0x000D, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionMipBlend : 1;  // 0x000E, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionMipScale : 1;  // 0x000E, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionMipThreshold : 1;  // 0x000E, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_AmbientOcclusionTemporalBlendWeight : 1;  // 0x000E, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingAO : 1;  // 0x0010, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingAOSamplesPerPixel : 1;  // 0x0010, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingAOIntensity : 1;  // 0x0010, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingAORadius : 1;  // 0x0010, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVIntensity : 1;  // 0x0014, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverride_LPVDirectionalOcclusionIntensity : 1;  // 0x0014, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bOverride_LPVDirectionalOcclusionRadius : 1;  // 0x0014, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bOverride_LPVDiffuseOcclusionExponent : 1;  // 0x0014, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bOverride_LPVSpecularOcclusionExponent : 1;  // 0x0014, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bOverride_LPVDiffuseOcclusionIntensity : 1;  // 0x0014, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bOverride_LPVSpecularOcclusionIntensity : 1;  // 0x0014, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVSize : 1;  // 0x0014, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVSecondaryOcclusionIntensity : 1;  // 0x0015, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVSecondaryBounceIntensity : 1;  // 0x0015, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVGeometryVolumeBias : 1;  // 0x0015, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVVplInjectionBias : 1;  // 0x0015, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVEmissiveInjectionIntensity : 1;  // 0x0015, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVFadeRange : 1;  // 0x0015, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_LPVDirectionalOcclusionFadeRange : 1;  // 0x0015, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_IndirectLightingColor : 1;  // 0x0015, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_IndirectLightingIntensity : 1;  // 0x0016, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorGradingIntensity : 1;  // 0x0016, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ColorGradingLUT : 1;  // 0x0016, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldFocalDistance : 1;  // 0x0016, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldFstop : 1;  // 0x0016, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldMinFstop : 1;  // 0x0016, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldBladeCount : 1;  // 0x0016, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldSensorWidth : 1;  // 0x0016, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldDepthBlurRadius : 1;  // 0x0017, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldDepthBlurAmount : 1;  // 0x0017, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldFocalRegion : 1;  // 0x0017, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldNearTransitionRegion : 1;  // 0x0017, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldFarTransitionRegion : 1;  // 0x0017, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldScale : 1;  // 0x0017, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldNearBlurSize : 1;  // 0x0017, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldFarBlurSize : 1;  // 0x0017, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_MobileHQGaussian : 1;  // 0x0018, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldOcclusion : 1;  // 0x0018, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldSkyFocusDistance : 1;  // 0x0018, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_DepthOfFieldVignetteSize : 1;  // 0x0018, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_MotionBlurAmount : 1;  // 0x0018, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_MotionBlurMax : 1;  // 0x0018, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_MotionBlurTargetFPS : 1;  // 0x0018, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_MotionBlurPerObjectSize : 1;  // 0x0018, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ScreenPercentage : 1;  // 0x0019, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ScreenSpaceReflectionIntensity : 1;  // 0x0019, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ScreenSpaceReflectionQuality : 1;  // 0x0019, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ScreenSpaceReflectionMaxRoughness : 1;  // 0x0019, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ScreenSpaceReflectionRoughnessScale : 1;  // 0x0019, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_ReflectionsType : 1;  // 0x001C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingReflectionsMaxRoughness : 1;  // 0x001C, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingReflectionsMaxBounces : 1;  // 0x001C, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingReflectionsSamplesPerPixel : 1;  // 0x001C, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingReflectionsShadows : 1;  // 0x001C, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingReflectionsTranslucency : 1;  // 0x001C, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_TranslucencyType : 1;  // 0x001C, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingTranslucencyMaxRoughness : 1;  // 0x001C, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingTranslucencyRefractionRays : 1;  // 0x001D, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingTranslucencySamplesPerPixel : 1;  // 0x001D, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingTranslucencyShadows : 1;  // 0x001D, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingTranslucencyRefraction : 1;  // 0x001D, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingGI : 1;  // 0x001D, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingGIMaxBounces : 1;  // 0x001D, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_RayTracingGISamplesPerPixel : 1;  // 0x001D, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_PathTracingMaxBounces : 1;  // 0x001D, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_PathTracingSamplesPerPixel : 1;  // 0x001E, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_PathTracingFilterWidth : 1;  // 0x001E, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_PathTracingEnableEmissive : 1;  // 0x001E, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_PathTracingMaxPathExposure : 1;  // 0x001E, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bOverride_PathTracingEnableDenoiser : 1;  // 0x001E, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bMobileHQGaussian : 1;  // 0x0020, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EBloomMethod> BloomMethod;  // 0x0021, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EAutoExposureMethod> AutoExposureMethod;  // 0x0022, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) TEnumAsByte<ETemperatureMethod> TemperatureType;  // 0x0023, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float WhiteTemp;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float WhiteTint;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorSaturation;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorContrast;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorGamma;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorGain;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorOffset;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorSaturationShadows;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorContrastShadows;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorGammaShadows;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorGainShadows;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorOffsetShadows;  // 0x00C0, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorSaturationMidtones;  // 0x00D0, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorContrastMidtones;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorGammaMidtones;  // 0x00F0, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorGainMidtones;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorOffsetMidtones;  // 0x0110, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorSaturationHighlights;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorContrastHighlights;  // 0x0130, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorGammaHighlights;  // 0x0140, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorGainHighlights;  // 0x0150, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector4 ColorOffsetHighlights;  // 0x0160, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ColorCorrectionHighlightsMin;  // 0x0170, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ColorCorrectionShadowsMax;  // 0x0174, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BlueCorrection;  // 0x0178, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ExpandGamut;  // 0x017C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ToneCurveAmount;  // 0x0180, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmSlope;  // 0x0184, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmToe;  // 0x0188, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmShoulder;  // 0x018C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmBlackClip;  // 0x0190, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmWhiteClip;  // 0x0194, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor FilmWhitePoint;  // 0x0198, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor FilmShadowTint;  // 0x01A8, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmShadowTintBlend;  // 0x01B8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmShadowTintAmount;  // 0x01BC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmSaturation;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor FilmChannelMixerRed;  // 0x01C4, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor FilmChannelMixerGreen;  // 0x01D4, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor FilmChannelMixerBlue;  // 0x01E4, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmContrast;  // 0x01F4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmToeAmount;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmHealAmount;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FilmDynamicRange;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor SceneColorTint;  // 0x0204, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SceneFringeIntensity;  // 0x0214, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ChromaticAberrationStartOffset;  // 0x0218, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BloomIntensity;  // 0x021C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BloomThreshold;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BloomSizeScale;  // 0x0224, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Bloom1Size;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Bloom2Size;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Bloom3Size;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Bloom4Size;  // 0x0234, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Bloom5Size;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float Bloom6Size;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Bloom1Tint;  // 0x0240, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Bloom2Tint;  // 0x0250, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Bloom3Tint;  // 0x0260, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Bloom4Tint;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Bloom5Tint;  // 0x0280, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor Bloom6Tint;  // 0x0290, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BloomConvolutionSize;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* BloomConvolutionTexture;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FVector2D BloomConvolutionCenterUV;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BloomConvolutionPreFilterMin;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BloomConvolutionPreFilterMax;  // 0x02BC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BloomConvolutionPreFilterMult;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BloomConvolutionBufferScale;  // 0x02C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture* BloomDirtMask;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float BloomDirtMaskIntensity;  // 0x02D0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor BloomDirtMaskTint;  // 0x02D4, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor AmbientCubemapTint;  // 0x02E4, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientCubemapIntensity;  // 0x02F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTextureCube* AmbientCubemap;  // 0x02F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CameraShutterSpeed;  // 0x0300, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CameraISO;  // 0x0304, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldFstop;  // 0x0308, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldMinFstop;  // 0x030C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) int32 DepthOfFieldBladeCount;  // 0x0310, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AutoExposureBias;  // 0x0314, size 0x4
    UPROPERTY() float AutoExposureBiasBackup;  // 0x0318, size 0x4
    UPROPERTY() uint8 bOverride_AutoExposureBiasBackup : 1;  // 0x031C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 AutoExposureApplyPhysicalCameraExposure : 1;  // 0x0320, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* AutoExposureBiasCurve;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture* AutoExposureMeterMask;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AutoExposureLowPercent;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AutoExposureHighPercent;  // 0x033C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AutoExposureMinBrightness;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AutoExposureMaxBrightness;  // 0x0344, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AutoExposureSpeedUp;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AutoExposureSpeedDown;  // 0x034C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float HistogramLogMin;  // 0x0350, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float HistogramLogMax;  // 0x0354, size 0x4
    UPROPERTY(Deprecated) float AutoExposureCalibrationConstant;  // 0x0358, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LensFlareIntensity;  // 0x035C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor LensFlareTint;  // 0x0360, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LensFlareBokehSize;  // 0x0370, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LensFlareThreshold;  // 0x0374, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture* LensFlareBokehShape;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere) FLinearColor LensFlareTints;  // 0x0380, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float VignetteIntensity;  // 0x0400, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float GrainJitter;  // 0x0404, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float GrainIntensity;  // 0x0408, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionIntensity;  // 0x040C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionStaticFraction;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionRadius;  // 0x0414, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 AmbientOcclusionRadiusInWS : 1;  // 0x0418, mask 0x01
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionFadeDistance;  // 0x041C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionFadeRadius;  // 0x0420, size 0x4
    UPROPERTY(Deprecated) float AmbientOcclusionDistance;  // 0x0424, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionPower;  // 0x0428, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionBias;  // 0x042C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionQuality;  // 0x0430, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionMipBlend;  // 0x0434, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionMipScale;  // 0x0438, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionMipThreshold;  // 0x043C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AmbientOcclusionTemporalBlendWeight;  // 0x0440, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) uint8 RayTracingAO : 1;  // 0x0444, mask 0x01
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) int32 RayTracingAOSamplesPerPixel;  // 0x0448, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float RayTracingAOIntensity;  // 0x044C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float RayTracingAORadius;  // 0x0450, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) FLinearColor IndirectLightingColor;  // 0x0454, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float IndirectLightingIntensity;  // 0x0464, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) ERayTracingGlobalIlluminationType RayTracingGIType;  // 0x0468, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) int32 RayTracingGIMaxBounces;  // 0x046C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) int32 RayTracingGISamplesPerPixel;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ColorGradingIntensity;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture* ColorGradingLUT;  // 0x0478, size 0x8
    UPROPERTY(BlueprintReadWrite) float DepthOfFieldSensorWidth;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldFocalDistance;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldDepthBlurAmount;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldDepthBlurRadius;  // 0x048C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldFocalRegion;  // 0x0490, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldNearTransitionRegion;  // 0x0494, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldFarTransitionRegion;  // 0x0498, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldScale;  // 0x049C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldNearBlurSize;  // 0x04A0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldFarBlurSize;  // 0x04A4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldOcclusion;  // 0x04A8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldSkyFocusDistance;  // 0x04AC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DepthOfFieldVignetteSize;  // 0x04B0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float MotionBlurAmount;  // 0x04B4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float MotionBlurMax;  // 0x04B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MotionBlurTargetFPS;  // 0x04BC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float MotionBlurPerObjectSize;  // 0x04C0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVIntensity;  // 0x04C4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVVplInjectionBias;  // 0x04C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LPVSize;  // 0x04CC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVSecondaryOcclusionIntensity;  // 0x04D0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVSecondaryBounceIntensity;  // 0x04D4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVGeometryVolumeBias;  // 0x04D8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVEmissiveInjectionIntensity;  // 0x04DC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVDirectionalOcclusionIntensity;  // 0x04E0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVDirectionalOcclusionRadius;  // 0x04E4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVDiffuseOcclusionExponent;  // 0x04E8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVSpecularOcclusionExponent;  // 0x04EC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVDiffuseOcclusionIntensity;  // 0x04F0, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVSpecularOcclusionIntensity;  // 0x04F4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) EReflectionsType ReflectionsType;  // 0x04F8, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ScreenSpaceReflectionIntensity;  // 0x04FC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ScreenSpaceReflectionQuality;  // 0x0500, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ScreenSpaceReflectionMaxRoughness;  // 0x0504, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float RayTracingReflectionsMaxRoughness;  // 0x0508, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) int32 RayTracingReflectionsMaxBounces;  // 0x050C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) int32 RayTracingReflectionsSamplesPerPixel;  // 0x0510, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows;  // 0x0514, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) uint8 RayTracingReflectionsTranslucency : 1;  // 0x0515, mask 0x01
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) ETranslucencyType TranslucencyType;  // 0x0516, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float RayTracingTranslucencyMaxRoughness;  // 0x0518, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) int32 RayTracingTranslucencyRefractionRays;  // 0x051C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) int32 RayTracingTranslucencySamplesPerPixel;  // 0x0520, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows;  // 0x0524, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) uint8 RayTracingTranslucencyRefraction : 1;  // 0x0525, mask 0x01
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) int32 PathTracingMaxBounces;  // 0x0528, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) int32 PathTracingSamplesPerPixel;  // 0x052C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float PathTracingFilterWidth;  // 0x0530, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 PathTracingEnableEmissive : 1;  // 0x0534, mask 0x01
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float PathTracingMaxPathExposure;  // 0x0538, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 PathTracingEnableDenoiser : 1;  // 0x053C, mask 0x01
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVFadeRange;  // 0x0540, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float LPVDirectionalOcclusionFadeRange;  // 0x0544, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float ScreenPercentage;  // 0x0548, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWeightedBlendables WeightedBlendables;  // 0x0550, size 0x10
};
