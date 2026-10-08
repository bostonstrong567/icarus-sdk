// /Script/Engine.LightComponentBase
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Components/LightComponentBase.h

UCLASS(Abstract, Config=Engine)
class ULightComponentBase : public USceneComponent
{
public:
    UPROPERTY() FGuid LightGuid;  // 0x01F8, size 0x10
    UPROPERTY(Deprecated) float Brightness;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float Intensity;  // 0x020C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FColor LightColor;  // 0x0210, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAffectsWorld : 1;  // 0x0214, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 CastShadows : 1;  // 0x0214, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 CastStaticShadows : 1;  // 0x0214, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 CastDynamicShadows : 1;  // 0x0214, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAffectTranslucentLighting : 1;  // 0x0214, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bTransmission : 1;  // 0x0214, mask 0x20
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastVolumetricShadow : 1;  // 0x0214, mask 0x40
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastDeepShadow : 1;  // 0x0214, mask 0x80
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bCastRaytracedShadow : 1;  // 0x0215, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAffectReflection : 1;  // 0x0215, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bAffectGlobalIllumination : 1;  // 0x0215, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float DeepShadowLayerDistribution;  // 0x0218, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float IndirectLightingIntensity;  // 0x021C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float VolumetricScatteringIntensity;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SamplesPerPixel;  // 0x0224, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetLightColor() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetAffectGlobalIllumination(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetAffectReflection(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCastDeepShadow(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCastRaytracedShadow(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCastShadows(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCastVolumetricShadow(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetSamplesPerPixel(int32 NewValue);  // parameters 0x4

    // Virtual functions that start here:
    //   UpdateLightGUIDs
};
