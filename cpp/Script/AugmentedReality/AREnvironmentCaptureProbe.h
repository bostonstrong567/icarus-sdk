// /Script/AugmentedReality.AREnvironmentCaptureProbe
// Derives from: UARTrackedGeometry > UObject
// size 0x110, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTrackable.h

UCLASS()
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() FVector Extent;  // 0x00F8, size 0xC
    UPROPERTY() UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture;  // 0x0108, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetExtent() const;  // parameters 0xC
};
