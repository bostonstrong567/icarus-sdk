// /Script/Engine.DirectionalLightComponent
// Derives from: ULightComponent > ULightComponentBase > USceneComponent > UActorComponent > UObject
// size 0x3F0, declared in Engine/Source/Runtime/Engine/Classes/Components/DirectionalLightComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UDirectionalLightComponent : public ULightComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShadowCascadeBiasDistribution;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnableLightShaftOcclusion : 1;  // 0x032C, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float OcclusionMaskDarkness;  // 0x0330, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float OcclusionDepthRange;  // 0x0334, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector LightShaftOverrideDirection;  // 0x0338, size 0xC
    UPROPERTY(Deprecated) float WholeSceneDynamicShadowRadius;  // 0x0344, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DynamicShadowDistanceMovableLight;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DynamicShadowDistanceStationaryLight;  // 0x034C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 DynamicShadowCascades;  // 0x0350, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CascadeDistributionExponent;  // 0x0354, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CascadeTransitionFraction;  // 0x0358, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShadowDistanceFadeoutFraction;  // 0x035C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseInsetShadowsForMovableObjects : 1;  // 0x0360, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 FarShadowCascadeCount;  // 0x0364, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FarShadowDistance;  // 0x0368, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DistanceFieldShadowDistance;  // 0x036C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float LightSourceAngle;  // 0x0370, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float LightSourceSoftAngle;  // 0x0374, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float ShadowSourceAngleFactor;  // 0x0378, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TraceDistance;  // 0x037C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsedAsAtmosphereSunLight : 1;  // 0x0380, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 AtmosphereSunLightIndex;  // 0x0384, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor AtmosphereSunDiskColorScale;  // 0x0388, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bPerPixelAtmosphereTransmittance : 1;  // 0x0398, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastShadowsOnClouds : 1;  // 0x0398, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastShadowsOnAtmosphere : 1;  // 0x0398, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastCloudShadows : 1;  // 0x0398, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CloudShadowStrength;  // 0x039C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CloudShadowOnAtmosphereStrength;  // 0x03A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CloudShadowOnSurfaceStrength;  // 0x03A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CloudShadowDepthBias;  // 0x03A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CloudShadowExtent;  // 0x03AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CloudShadowMapResolutionScale;  // 0x03B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CloudShadowRaySampleCountScale;  // 0x03B4, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FLinearColor CloudScatteredLuminanceScale;  // 0x03B8, size 0x10
    UPROPERTY(EditAnywhere) FLightmassDirectionalLightSettings LightmassSettings;  // 0x03C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastModulatedShadows : 1;  // 0x03D8, mask 0x01
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FColor ModulatedShadowColor;  // 0x03DC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float ShadowAmount;  // 0x03E0, size 0x4

    UFUNCTION(BlueprintCallable) void SetAtmosphereSunLight(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAtmosphereSunLightIndex(int32 NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCascadeDistributionExponent(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCascadeTransitionFraction(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDynamicShadowCascades(int32 NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDynamicShadowDistanceMovableLight(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDynamicShadowDistanceStationaryLight(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetEnableLightShaftOcclusion(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLightShaftOverrideDirection(FVector NewValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetOcclusionMaskDarkness(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetShadowAmount(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetShadowDistanceFadeoutFraction(float NewValue);  // parameters 0x4
};
