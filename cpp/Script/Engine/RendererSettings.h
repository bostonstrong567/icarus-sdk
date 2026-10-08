// /Script/Engine.RendererSettings
// Derives from: UDeveloperSettings > UObject
// size 0x148, declared in Engine/Source/Runtime/Engine/Classes/Engine/RendererSettings.h

UCLASS(Config=Engine)
class URendererSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) uint8 bMobileDisableVertexFog : 1;  // 0x0038, mask 0x01
    UPROPERTY(EditAnywhere, Config) int32 MaxMobileCascades;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EMobileMSAASampleCount> MobileMSAASampleCount;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, Config) uint8 bMobileAllowDitheredLODTransition : 1;  // 0x0044, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bMobileAllowSoftwareOcclusionCulling : 1;  // 0x0044, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bMobileVirtualTextures : 1;  // 0x0044, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bDiscardUnusedQualityLevels : 1;  // 0x0044, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bOcclusionCulling : 1;  // 0x0044, mask 0x10
    UPROPERTY(EditAnywhere, Config) float MinScreenRadiusForLights;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, Config) float MinScreenRadiusForEarlyZPass;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere, Config) float MinScreenRadiusForCSMdepth;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bPrecomputedVisibilityWarning : 1;  // 0x0054, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bTextureStreaming : 1;  // 0x0054, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bUseDXT5NormalMaps : 1;  // 0x0054, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bVirtualTextures : 1;  // 0x0054, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bVirtualTextureEnableAutoImport : 1;  // 0x0054, mask 0x10
    UPROPERTY(EditAnywhere, Config) uint8 bVirtualTexturedLightmaps : 1;  // 0x0054, mask 0x20
    UPROPERTY(EditAnywhere, Config) uint32 VirtualTextureTileSize;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, Config) uint32 VirtualTextureTileBorderSize;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, Config) uint32 VirtualTextureFeedbackFactor;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bVirtualTextureEnableCompressZlib : 1;  // 0x0064, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bVirtualTextureEnableCompressCrunch : 1;  // 0x0064, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bClearCoatEnableSecondNormal : 1;  // 0x0064, mask 0x04
    UPROPERTY(EditAnywhere, Config) int32 ReflectionCaptureResolution;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bReflectionCaptureCompression : 1;  // 0x006C, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 ReflectionEnvironmentLightmapMixBasedOnRoughness : 1;  // 0x006C, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bForwardShading : 1;  // 0x006C, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bVertexFoggingForOpaque : 1;  // 0x006C, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bAllowStaticLighting : 1;  // 0x006C, mask 0x10
    UPROPERTY(EditAnywhere, Config) uint8 bUseNormalMapsForStaticLighting : 1;  // 0x006C, mask 0x20
    UPROPERTY(EditAnywhere, Config) uint8 bGenerateMeshDistanceFields : 1;  // 0x006C, mask 0x40
    UPROPERTY(EditAnywhere, Config) uint8 bEightBitMeshDistanceFields : 1;  // 0x006C, mask 0x80
    UPROPERTY(EditAnywhere, Config) uint8 bGenerateLandscapeGIData : 1;  // 0x006D, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bCompressMeshDistanceFields : 1;  // 0x006D, mask 0x02
    UPROPERTY(EditAnywhere, Config) float TessellationAdaptivePixelsPerTriangle;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bSeparateTranslucency : 1;  // 0x0074, mask 0x01
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ETranslucentSortPolicy> TranslucentSortPolicy;  // 0x0078, size 0x1
    UPROPERTY(EditAnywhere, Config) FVector TranslucentSortAxis;  // 0x007C, size 0xC
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EFixedFoveationLevels> HMDFixedFoveationLevel;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ECustomDepthStencil> CustomDepthStencil;  // 0x0089, size 0x1
    UPROPERTY(EditAnywhere, Config) uint8 bCustomDepthTaaJitter : 1;  // 0x008C, mask 0x01
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EAlphaChannelMode> bEnableAlphaChannelInPostProcessing;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere, Config) uint8 bDefaultFeatureBloom : 1;  // 0x0094, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bDefaultFeatureAmbientOcclusion : 1;  // 0x0094, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bDefaultFeatureAmbientOcclusionStaticFraction : 1;  // 0x0094, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bDefaultFeatureAutoExposure : 1;  // 0x0094, mask 0x08
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EAutoExposureMethodUI> DefaultFeatureAutoExposure;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere, Config) float DefaultFeatureAutoExposureBias;  // 0x009C, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bExtendDefaultLuminanceRangeInAutoExposureSettings : 1;  // 0x00A0, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bUsePreExposure : 1;  // 0x00A0, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bEnablePreExposureOnlyInTheEditor : 1;  // 0x00A0, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bDefaultFeatureMotionBlur : 1;  // 0x00A0, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bDefaultFeatureLensFlare : 1;  // 0x00A0, mask 0x10
    UPROPERTY(EditAnywhere, Config) uint8 bTemporalUpsampling : 1;  // 0x00A0, mask 0x20
    UPROPERTY(EditAnywhere, Config) uint8 bSSGI : 1;  // 0x00A0, mask 0x40
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EAntiAliasingMethod> DefaultFeatureAntiAliasing;  // 0x00A4, size 0x1
    UPROPERTY(EditAnywhere, Config) ELightUnits DefaultLightUnits;  // 0x00A5, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EDefaultBackBufferPixelFormat> DefaultBackBufferPixelFormat;  // 0x00A6, size 0x1
    UPROPERTY(EditAnywhere, Config) uint8 bRenderUnbuiltPreviewShadowsInGame : 1;  // 0x00A8, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bStencilForLODDither : 1;  // 0x00A8, mask 0x02
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EEarlyZPass> EarlyZPass;  // 0x00AC, size 0x1
    UPROPERTY(EditAnywhere, Config) uint8 bEarlyZPassOnlyMaterialMasking : 1;  // 0x00B0, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bDBuffer : 1;  // 0x00B0, mask 0x02
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EClearSceneOptions> ClearSceneMethod;  // 0x00B4, size 0x1
    UPROPERTY(EditAnywhere, Config) uint8 bBasePassOutputsVelocity : 1;  // 0x00B8, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bVertexDeformationOutputsVelocity : 1;  // 0x00B8, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bSelectiveBasePassOutputs : 1;  // 0x00B8, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bDefaultParticleCutouts : 1;  // 0x00B8, mask 0x08
    UPROPERTY(EditAnywhere, Config) int32 GPUSimulationTextureSizeX;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 GPUSimulationTextureSizeY;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bGlobalClipPlane : 1;  // 0x00C4, mask 0x01
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EGBufferFormat> GBufferFormat;  // 0x00C8, size 0x1
    UPROPERTY(EditAnywhere, Config) uint8 bUseGPUMorphTargets : 1;  // 0x00CC, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bNvidiaAftermathEnabled : 1;  // 0x00CC, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bMultiView : 1;  // 0x00CC, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bMobilePostProcessing : 1;  // 0x00CC, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bMobileMultiView : 1;  // 0x00CC, mask 0x10
    UPROPERTY(Config) uint8 bMobileUseHWsRGBEncoding : 1;  // 0x00CC, mask 0x20
    UPROPERTY(EditAnywhere, Config) uint8 bRoundRobinOcclusion : 1;  // 0x00CC, mask 0x40
    UPROPERTY(EditAnywhere, Config) uint8 bODSCapture : 1;  // 0x00CC, mask 0x80
    UPROPERTY(EditAnywhere, Config) uint8 bMeshStreaming : 1;  // 0x00CD, mask 0x01
    UPROPERTY(EditAnywhere, Config) float WireframeCullThreshold;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bEnableRayTracing : 1;  // 0x00D4, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bEnableRayTracingTextureLOD : 1;  // 0x00D4, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bSupportStationarySkylight : 1;  // 0x00D4, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bSupportLowQualityLightmaps : 1;  // 0x00D4, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bSupportPointLightWholeSceneShadows : 1;  // 0x00D4, mask 0x10
    UPROPERTY(EditAnywhere, Config) uint8 bSupportAtmosphericFog : 1;  // 0x00D4, mask 0x20
    UPROPERTY(EditAnywhere, Config) uint8 bSupportSkyAtmosphere : 1;  // 0x00D4, mask 0x40
    UPROPERTY(EditAnywhere, Config) uint8 bSupportSkyAtmosphereAffectsHeightFog : 1;  // 0x00D4, mask 0x80
    UPROPERTY(EditAnywhere, Config) uint8 bSupportSkinCacheShaders : 1;  // 0x00D5, mask 0x01
    UPROPERTY(EditAnywhere, Config) ESkinCacheDefaultBehavior DefaultSkinCacheBehavior;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, Config) float SkinCacheSceneMemoryLimitInMB;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bMobileEnableStaticAndCSMShadowReceivers : 1;  // 0x00E0, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bMobileEnableMovableLightCSMShaderCulling : 1;  // 0x00E0, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bMobileAllowDistanceFieldShadows : 1;  // 0x00E0, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bMobileAllowMovableDirectionalLights : 1;  // 0x00E0, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint32 MobileNumDynamicPointLights;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere, Config) uint8 bMobileDynamicPointLightsUseStaticBranch : 1;  // 0x00E8, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bMobileAllowMovableSpotlights : 1;  // 0x00E8, mask 0x02
    UPROPERTY(EditAnywhere, Config) uint8 bMobileAllowMovableSpotlightShadows : 1;  // 0x00E8, mask 0x04
    UPROPERTY(EditAnywhere, Config) uint8 bSupport16BitBoneIndex : 1;  // 0x00E8, mask 0x08
    UPROPERTY(EditAnywhere, Config) uint8 bGPUSkinLimit2BoneInfluences : 1;  // 0x00E8, mask 0x10
    UPROPERTY(EditAnywhere, Config) uint8 bSupportDepthOnlyIndexBuffers : 1;  // 0x00E8, mask 0x20
    UPROPERTY(EditAnywhere, Config) uint8 bSupportReversedIndexBuffers : 1;  // 0x00E8, mask 0x40
    UPROPERTY(EditAnywhere, Config) uint8 bLPV : 1;  // 0x00E8, mask 0x80
    UPROPERTY(EditAnywhere, Config) uint8 bMobileAmbientOcclusion : 1;  // 0x00E9, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bUseUnlimitedBoneInfluences : 1;  // 0x00E9, mask 0x02
    UPROPERTY(EditAnywhere, Config) int32 UnlimitedBonInfluencesThreshold;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, Config) FPerPlatformInt MaxSkinBones;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EMobilePlanarReflectionMode> MobilePlanarReflectionMode;  // 0x00F4, size 0x1
    UPROPERTY(EditAnywhere, Config) uint8 bMobileSupportsGen4TAA : 1;  // 0x00F8, mask 0x01
    UPROPERTY(EditAnywhere, Config) FPerPlatformBool bStreamSkeletalMeshLODs;  // 0x00FC, size 0x1
    UPROPERTY(EditAnywhere, Config) FPerPlatformBool bDiscardSkeletalMeshOptionalLODs;  // 0x00FD, size 0x1
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath VisualizeCalibrationColorMaterialPath;  // 0x0100, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath VisualizeCalibrationCustomMaterialPath;  // 0x0118, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath;  // 0x0130, size 0x18
};
