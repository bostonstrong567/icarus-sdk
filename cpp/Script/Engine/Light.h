// /Script/Engine.Light
// Derives from: AActor > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Engine/Light.h

UCLASS(Abstract, Config=Engine)
class ALight : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadOnly) ULightComponent* LightComponent;  // 0x0220, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing) uint8 bEnabled : 1;  // 0x0228, mask 0x01

    UFUNCTION(BlueprintCallable, BlueprintPure) float GetBrightness() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetLightColor() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsEnabled() const;  // parameters 0x1
    UFUNCTION() void OnRep_bEnabled();
    UFUNCTION(BlueprintCallable) void SetAffectTranslucentLighting(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBrightness(float NewBrightness);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCastShadows(bool bNewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetEnabled(bool bSetEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetLightColor(FLinearColor NewLightColor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetLightFunctionFadeDistance(float NewLightFunctionFadeDistance);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLightFunctionMaterial(UMaterialInterface* NewLightFunctionMaterial);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLightFunctionScale(FVector NewLightFunctionScale);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ToggleEnabled();

    // Virtual functions that start here:
    //   OnRep_bEnabled
};
