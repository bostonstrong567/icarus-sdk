// /Script/Engine.SkyLightComponent
// Derives from: ULightComponentBase > USceneComponent > UActorComponent > UObject
// size 0x400, declared in Engine/Source/Runtime/Engine/Classes/Components/SkyLightComponent.h

UCLASS(Config=Engine)
class USkyLightComponent : public ULightComponentBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bRealTimeCapture;  // 0x0228, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ESkyLightSourceType> SourceType;  // 0x0229, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UTextureCube* Cubemap;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SourceCubemapAngle;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CubemapResolution;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SkyDistanceThreshold;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bCaptureEmissiveOnly;  // 0x0244, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bLowerHemisphereIsBlack;  // 0x0245, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor LowerHemisphereColor;  // 0x0248, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float OcclusionMaxDistance;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float Contrast;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float OcclusionExponent;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float MinOcclusion;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FColor OcclusionTint;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCloudAmbientOcclusion : 1;  // 0x026C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CloudAmbientOcclusionStrength;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CloudAmbientOcclusionExtent;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CloudAmbientOcclusionMapResolutionScale;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CloudAmbientOcclusionApertureScale;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EOcclusionCombineMode> OcclusionCombineMode;  // 0x0280, size 0x1
protected:
    bool bSavedConstructionScriptValuesValid;  // 0x0281, not reflected
    bool bHasEverCaptured;  // 0x0282, not reflected
    TRefCountPtr<FSkyTextureCubeResource> ProcessedSkyTexture;  // 0x0288, not reflected
    TSHVectorRGB<3> IrradianceEnvironmentMap;  // 0x0290, not reflected
    float AverageBrightness;  // 0x0320, not reflected
    float BlendFraction;  // 0x0324, not reflected
    UPROPERTY(Transient) UTextureCube* BlendDestinationCubemap;  // 0x0328, size 0x8
    TRefCountPtr<FSkyTextureCubeResource> BlendDestinationProcessedSkyTexture;  // 0x0330, not reflected
    TSHVectorRGB<3> BlendDestinationIrradianceEnvironmentMap;  // 0x0340, not reflected
    float BlendDestinationAverageBrightness;  // 0x03D0, not reflected
    FRenderCommandFence IrradianceMapFence;  // 0x03D8, not reflected
    FRenderCommandFence ReleaseResourcesFence;  // 0x03E8, not reflected
    FSkyLightSceneProxy * SceneProxy;  // 0x03F8, not reflected
public:
    UFUNCTION(BlueprintCallable) void RecaptureSky();
    UFUNCTION(BlueprintCallable) void SetCubemap(UTextureCube* NewCubemap);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetCubemapBlend(UTextureCube* SourceCubemap, UTextureCube* DestinationCubemap, float InBlendFraction);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetIndirectLightingIntensity(float NewIntensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetIntensity(float NewIntensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLightColor(FLinearColor NewLightColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetLowerHemisphereColor(const FLinearColor& InLowerHemisphereColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetMinOcclusion(float InMinOcclusion);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOcclusionContrast(float InOcclusionContrast);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOcclusionExponent(float InOcclusionExponent);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOcclusionTint(const FColor& InTint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVolumetricScatteringIntensity(float NewIntensity);  // parameters 0x4
};
