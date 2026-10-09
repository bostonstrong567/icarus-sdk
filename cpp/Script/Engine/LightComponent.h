// /Script/Engine.LightComponent
// Derives from: ULightComponentBase > USceneComponent > UActorComponent > UObject
// size 0x330, declared in Engine/Source/Runtime/Engine/Classes/Components/LightComponent.h

UCLASS(Abstract, Config=Engine)
class ULightComponent : public ULightComponentBase
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float Temperature;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere) float MaxDrawDistance;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere) float MaxDistanceFadeRange;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseTemperature : 1;  // 0x0234, mask 0x01
    UPROPERTY(Deprecated) int32 ShadowMapChannel;  // 0x0238, size 0x4
    int32 PreviewShadowMapChannel;  // 0x023C, not reflected
    UPROPERTY(Deprecated) float MinRoughness;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SpecularScale;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShadowResolutionScale;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShadowBias;  // 0x024C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShadowSlopeBias;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShadowSharpen;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ContactShadowLength;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 ContactShadowLengthInWS : 1;  // 0x025C, mask 0x01
    UPROPERTY(Deprecated) uint8 InverseSquaredFalloff : 1;  // 0x025C, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 CastTranslucentShadows : 1;  // 0x025C, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastShadowsFromCinematicObjectsOnly : 1;  // 0x025C, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAffectDynamicIndirectLighting : 1;  // 0x025C, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bForceCachedShadowsForMovablePrimitives : 1;  // 0x025C, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLightingChannels LightingChannels;  // 0x0260, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* LightFunctionMaterial;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVector LightFunctionScale;  // 0x0270, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UTextureLightProfile* IESTexture;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseIESBrightness : 1;  // 0x0288, mask 0x01
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float IESBrightnessScale;  // 0x028C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float LightFunctionFadeDistance;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DisabledBrightness;  // 0x0294, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bEnableLightShaftBloom : 1;  // 0x0298, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BloomScale;  // 0x029C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BloomThreshold;  // 0x02A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float BloomMaxBrightness;  // 0x02A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FColor BloomTint;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bUseRayTracedDistanceFieldShadows;  // 0x02AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float RayStartOffsetDepthScale;  // 0x02B0, size 0x4
    FLightSceneProxy * SceneProxy;  // 0x02B8, not reflected
    FStaticShadowDepthMap StaticShadowDepthMap;  // 0x02C0, not reflected
    FRenderCommandFence DestroyFence;  // 0x0310, not reflected
    uint32 : 1 bAddedToSceneVisible;  // 0x0320, not reflected

    UFUNCTION(BlueprintCallable) void SetAffectDynamicIndirectLighting(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAffectTranslucentLighting(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBloomMaxBrightness(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetBloomScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetBloomThreshold(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetBloomTint(FColor NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetEnableLightShaftBloom(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetForceCachedShadowsForMovablePrimitives(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetIESBrightnessScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetIESTexture(UTextureLightProfile* NewValue);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetIndirectLightingIntensity(float NewIntensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetIntensity(float NewIntensity);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLightColor(FLinearColor NewLightColor, bool bSRGB);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetLightFunctionDisabledBrightness(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLightFunctionScale(FVector NewLightFunctionScale);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void SetShadowBias(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetShadowSlopeBias(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSpecularScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTemperature(float NewTemperature);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTransmission(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUseIESBrightness(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUseTemperature(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetVolumetricScatteringIntensity(float NewIntensity);  // parameters 0x4

    // Virtual functions that start here:
    //   AffectsBounds, ComputeLightBrightness, CreateSceneProxy, GetAtmosphereSunDiskColorScale
    //   GetAtmosphereSunLightIndex, GetBoundingBox, GetBoundingSphere, GetLightPosition, GetLightType
    //   GetLightmassSettings, GetMaterial, GetNumMaterials, GetUniformPenumbraSize
    //   IsUsedAsAtmosphereSunLight, SetMaterial
};
