// /Script/AugmentedReality.ARSkyLight
// Derives from: ASkyLight > AInfo > AActor > UObject
// size 0x240, declared in Engine/Source/Runtime/AugmentedReality/Public/ARSkyLight.h

UCLASS(Config=Engine)
class AARSkyLight : public ASkyLight
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() UAREnvironmentCaptureProbe* CaptureProbe;  // 0x0230, size 0x8
    float LastUpdateTimestamp;  // 0x0238, not reflected
public:
    UFUNCTION(BlueprintCallable) void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe);  // parameters 0x8
};
