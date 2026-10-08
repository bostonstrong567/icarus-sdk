// /Script/Engine.ExponentialHeightFogComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x2A0, declared in Engine/Source/Runtime/Engine/Classes/Components/ExponentialHeightFogComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UExponentialHeightFogComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float FogDensity;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float FogHeightFalloff;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FExponentialHeightFogData SecondFogData;  // 0x0200, size 0xC
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FLinearColor FogInscatteringColor;  // 0x020C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UTextureCube* InscatteringColorCubemap;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InscatteringColorCubemapAngle;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor InscatteringTextureTint;  // 0x022C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FullyDirectionalInscatteringColorDistance;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float NonDirectionalInscatteringColorDistance;  // 0x0240, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float DirectionalInscatteringExponent;  // 0x0244, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float DirectionalInscatteringStartDistance;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FLinearColor DirectionalInscatteringColor;  // 0x024C, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float FogMaxOpacity;  // 0x025C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float StartDistance;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FogCutoffDistance;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bEnableVolumetricFog;  // 0x0268, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VolumetricFogScatteringDistribution;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FColor VolumetricFogAlbedo;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLinearColor VolumetricFogEmissive;  // 0x0274, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VolumetricFogExtinctionScale;  // 0x0284, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VolumetricFogDistance;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float VolumetricFogStaticLightingScatteringIntensity;  // 0x028C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bOverrideLightColorsWithFogInscatteringColors;  // 0x0290, size 0x1

    UFUNCTION(BlueprintCallable) void SetDirectionalInscatteringColor(FLinearColor Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetDirectionalInscatteringExponent(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDirectionalInscatteringStartDistance(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFogCutoffDistance(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFogDensity(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFogHeightFalloff(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFogInscatteringColor(FLinearColor Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetFogMaxOpacity(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFullyDirectionalInscatteringColorDistance(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetInscatteringColorCubemap(UTextureCube* Value);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetInscatteringColorCubemapAngle(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetInscatteringTextureTint(FLinearColor Value);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetNonDirectionalInscatteringColorDistance(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetStartDistance(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVolumetricFog(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetVolumetricFogAlbedo(FColor NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVolumetricFogDistance(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVolumetricFogEmissive(FLinearColor NewValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetVolumetricFogExtinctionScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetVolumetricFogScatteringDistribution(float NewValue);  // parameters 0x4
};
