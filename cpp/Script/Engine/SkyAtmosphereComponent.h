// /Script/Engine.SkyAtmosphereComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x2D0, declared in Engine/Source/Runtime/Engine/Classes/Components/SkyAtmosphereComponent.h

UCLASS(EditInlineNew, MinimalAPI, Config=Engine)
class USkyAtmosphereComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) ESkyAtmosphereTransformMode TransformMode;  // 0x01F8, size 0x1
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float BottomRadius;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FColor GroundAlbedo;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float AtmosphereHeight;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float MultiScatteringFactor;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float TraceSampleCountScale;  // 0x020C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float RayleighScatteringScale;  // 0x0210, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FLinearColor RayleighScattering;  // 0x0214, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float RayleighExponentialDistribution;  // 0x0224, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float MieScatteringScale;  // 0x0228, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FLinearColor MieScattering;  // 0x022C, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float MieAbsorptionScale;  // 0x023C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FLinearColor MieAbsorption;  // 0x0240, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float MieAnisotropy;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float MieExponentialDistribution;  // 0x0254, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float OtherAbsorptionScale;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FLinearColor OtherAbsorption;  // 0x025C, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTentDistribution OtherTentDistribution;  // 0x026C, size 0xC
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FLinearColor SkyLuminanceFactor;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float AerialPespectiveViewDistanceScale;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float HeightFogContribution;  // 0x028C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float TransmittanceMinLightElevationAngle;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float AerialPerspectiveStartDepth;  // 0x0294, size 0x4
    UPROPERTY() FGuid bStaticLightingBuiltGUID;  // 0x02BC, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FSkyAtmosphereSceneProxy * SkyAtmosphereSceneProxy;  // 0x0298, private
    bool[2] OverrideAtmosphericLight;  // 0x02A0, private
    FVector[2] OverrideAtmosphericLightDirection;  // 0x02A4, private

    UFUNCTION(BlueprintCallable) FLinearColor GetAtmosphereTransmitanceOnGroundAtPlanetTop(UDirectionalLightComponent* DirectionalLight);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OverrideAtmosphereLightDirection(int32 AtmosphereLightIndex, const FVector& LightDirection);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetAerialPespectiveViewDistanceScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetAtmosphereHeight(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetHeightFogContribution(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMieAbsorption(FLinearColor NewValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetMieAbsorptionScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMieAnisotropy(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMieExponentialDistribution(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMieScattering(FLinearColor NewValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetMieScatteringScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetMultiScatteringFactor(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOtherAbsorption(FLinearColor NewValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetOtherAbsorptionScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRayleighExponentialDistribution(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRayleighScattering(FLinearColor NewValue);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetRayleighScatteringScale(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSkyLuminanceFactor(FLinearColor NewValue);  // parameters 0x10
};
