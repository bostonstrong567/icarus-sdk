// /Script/AugmentedReality.ARSkyLight
// Derives from: ASkyLight > AInfo > AActor > UObject
// size 0x240, declared in Engine/Source/Runtime/AugmentedReality/Public/ARSkyLight.h

UCLASS(Config=Engine)
class AARSkyLight : public ASkyLight
{
public:
    UPROPERTY() UAREnvironmentCaptureProbe* CaptureProbe;  // 0x0230, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    float LastUpdateTimestamp;  // 0x0238, private

    UFUNCTION(BlueprintCallable) void SetEnvironmentCaptureProbe(UAREnvironmentCaptureProbe* InCaptureProbe);  // parameters 0x8
};
