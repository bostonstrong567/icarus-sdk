// /Script/AugmentedReality.ARBasicLightEstimate
// Derives from: UARLightEstimate > UObject
// size 0x40, declared in Engine/Source/Runtime/AugmentedReality/Public/ARLightEstimate.h

UCLASS()
class UARBasicLightEstimate : public UARLightEstimate
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() float AmbientIntensityLumens;  // 0x0028, size 0x4
    UPROPERTY() float AmbientColorTemperatureKelvin;  // 0x002C, size 0x4
    UPROPERTY() FLinearColor AmbientColor;  // 0x0030, size 0x10
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) FLinearColor GetAmbientColor() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAmbientColorTemperatureKelvin() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAmbientIntensityLumens() const;  // parameters 0x4
};
