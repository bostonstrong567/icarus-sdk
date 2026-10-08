// /Script/Engine.VolumetricCloudComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x240, declared in Engine/Source/Runtime/Engine/Classes/Components/VolumetricCloudComponent.h

UCLASS(EditInlineNew, MinimalAPI, Config=Engine)
class UVolumetricCloudComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float LayerBottomAltitude;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float LayerHeight;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float TracingStartMaxDistance;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float TracingMaxDistance;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float PlanetRadius;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FColor GroundAlbedo;  // 0x020C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* Material;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUsePerSampleAtmosphericLightTransmittance : 1;  // 0x0218, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SkyLightCloudBottomOcclusion;  // 0x021C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ViewSampleCountScale;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ReflectionSampleCountScale;  // 0x0224, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShadowViewSampleCountScale;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShadowReflectionSampleCountScale;  // 0x022C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ShadowTracingDistance;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float StopTracingTransmittanceThreshold;  // 0x0234, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FVolumetricCloudSceneProxy * VolumetricCloudSceneProxy;  // 0x0238, private

    UFUNCTION(BlueprintCallable) void SetGroundAlbedo(FColor NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLayerBottomAltitude(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLayerHeight(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMaterial(UMaterialInterface* NewValue);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetPlanetRadius(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetReflectionSampleCountScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetShadowReflectionSampleCountScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetShadowTracingDistance(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetShadowViewSampleCountScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSkyLightCloudBottomOcclusion(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetStopTracingTransmittanceThreshold(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTracingMaxDistance(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTracingStartMaxDistance(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetViewSampleCountScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetbUsePerSampleAtmosphericLightTransmittance(bool NewValue);  // parameters 0x1
};
