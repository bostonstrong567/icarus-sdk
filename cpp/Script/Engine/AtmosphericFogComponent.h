// /Script/Engine.AtmosphericFogComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x300, declared in Engine/Source/Runtime/Engine/Classes/Atmosphere/AtmosphericFogComponent.h

UCLASS(EditInlineNew, MinimalAPI, Config=Engine)
class UAtmosphericFogComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SunMultiplier;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float FogMultiplier;  // 0x01FC, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DensityMultiplier;  // 0x0200, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DensityOffset;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DistanceScale;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float AltitudeScale;  // 0x020C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float DistanceOffset;  // 0x0210, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float GroundOffset;  // 0x0214, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float StartDistance;  // 0x0218, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadWrite) float SunDiscScale;  // 0x021C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float DefaultBrightness;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FColor DefaultLightColor;  // 0x0224, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) uint8 bDisableSunDisk : 1;  // 0x0228, mask 0x01
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) uint8 bAtmosphereAffectsSunIlluminance : 1;  // 0x0228, mask 0x02
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) uint8 bDisableGroundScattering : 1;  // 0x0228, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FAtmospherePrecomputeParameters PrecomputeParams;  // 0x022C, size 0x2C
    UPROPERTY(Deprecated) UTexture2D* TransmittanceTexture;  // 0x0258, size 0x8
    UPROPERTY(Deprecated) UTexture2D* IrradianceTexture;  // 0x0260, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint32 PrecomputeCounter;  // 0x0268
    FThreadSafeCounter GameThreadServiceRequest;  // 0x026C
    FAtmosphereTextureResource * TransmittanceResource;  // 0x0270
    FAtmosphereTextureResource * IrradianceResource;  // 0x0278
    FAtmosphereTextureResource * InscatterResource;  // 0x0280
    FUntypedBulkData2<unsigned char> TransmittanceData;  // 0x0288
    FUntypedBulkData2<unsigned char> IrradianceData;  // 0x02B0
    FUntypedBulkData2<unsigned char> InscatterData;  // 0x02D8

    UFUNCTION(BlueprintCallable) void DisableGroundScattering(bool NewGroundScattering);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DisableSunDisk(bool NewSunDisk);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAltitudeScale(float NewAltitudeScale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDefaultBrightness(float NewBrightness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDefaultLightColor(FLinearColor NewLightColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetDensityMultiplier(float NewDensityMultiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDensityOffset(float NewDensityOffset);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDistanceOffset(float NewDistanceOffset);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetDistanceScale(float NewDistanceScale);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFogMultiplier(float NewFogMultiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetPrecomputeParams(float DensityHeight, int32 MaxScatteringOrder, int32 InscatterAltitudeSampleNum);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SetStartDistance(float NewStartDistance);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSunMultiplier(float NewSunMultiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void StartPrecompute();
};
