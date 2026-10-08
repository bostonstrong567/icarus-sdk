// /Script/Engine.PointLightComponent
// Derives from: ULocalLightComponent > ULightComponent > ULightComponentBase > USceneComponent > UActorComponent > UObject
// size 0x360, declared in Engine/Source/Runtime/Engine/Classes/Components/PointLightComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UPointLightComponent : public ULocalLightComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bUseInverseSquaredFalloff : 1;  // 0x0340, mask 0x01
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) float LightFalloffExponent;  // 0x0344, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SourceRadius;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SoftSourceRadius;  // 0x034C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SourceLength;  // 0x0350, size 0x4

    UFUNCTION(BlueprintCallable) void SetLightFalloffExponent(float NewLightFalloffExponent);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSoftSourceRadius(float bNewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSourceLength(float NewValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSourceRadius(float bNewValue);  // parameters 0x4
};
