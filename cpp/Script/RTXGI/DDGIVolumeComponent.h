// /Script/RTXGI.DDGIVolumeComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x350, declared in Engine/Plugins/Runtime/Nvidia/RTXGI/Source/RTXGI/Public/DDGIVolumeComponent.h

UCLASS(Config=Engine)
class UDDGIVolumeComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere) bool EnableVolume;  // 0x0200, size 0x1
    UPROPERTY(EditAnywhere) float UpdatePriority;  // 0x0204, size 0x4
    UPROPERTY(EditAnywhere) int32 LightingPriority;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere) float BlendingDistance;  // 0x020C, size 0x4
    UPROPERTY(EditAnywhere) float BlendingCutoffDistance;  // 0x0210, size 0x4
    UPROPERTY(EditAnywhere) bool RuntimeStatic;  // 0x0214, size 0x1
    UPROPERTY(EditAnywhere) FVector LastOrigin;  // 0x0218, size 0xC
    UPROPERTY(EditAnywhere) EDDGIRaysPerProbe RaysPerProbe;  // 0x0224, size 0x4
    UPROPERTY(EditAnywhere) FIntVector ProbeCounts;  // 0x0228, size 0xC
    UPROPERTY(EditAnywhere) float ProbeMaxRayDistance;  // 0x0234, size 0x4
    UPROPERTY(EditAnywhere) float ProbeHistoryWeight;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere) FProbeRelocation ProbeRelocation;  // 0x023C, size 0xC
    UPROPERTY(EditAnywhere) bool ScrollProbesInfinitely;  // 0x0248, size 0x1
    UPROPERTY(EditAnywhere) float ScrollingVolumeZOffset;  // 0x024C, size 0x4
    UPROPERTY(EditAnywhere) bool VisualizeProbes;  // 0x0250, size 0x1
    UPROPERTY(EditAnywhere) FIntVector ProbeScrollOffset;  // 0x0254, size 0xC
    UPROPERTY(EditAnywhere) float probeDistanceExponent;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere) float probeIrradianceEncodingGamma;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere) float probeChangeThreshold;  // 0x0268, size 0x4
    UPROPERTY(EditAnywhere) float probeBrightnessThreshold;  // 0x026C, size 0x4
    UPROPERTY(EditAnywhere) EDDGISkyLightType SkyLightTypeOnRayMiss;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere) float ViewBias;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere) float NormalBias;  // 0x0278, size 0x4
    UPROPERTY(EditAnywhere) float LightMultiplier;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere) float EmissiveMultiplier;  // 0x0280, size 0x4
    UPROPERTY(EditAnywhere) float IrradianceScalar;  // 0x0284, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLightingChannels LightingChannels;  // 0x0288, size 0x1
    FDDGIVolumeSceneProxy * SceneProxy;  // 0x0290, not reflected
    FDDGITextureLoadContext LoadContext;  // 0x0298, not reflected
    FIntVector PrevProbeScrollOffsets;  // 0x0340, not reflected

    UFUNCTION(BlueprintCallable) void ClearProbeData();
    UFUNCTION(Exec) void DDGIClearVolumes();
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetEmissiveMultiplier() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetIrradianceScalar() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLightMultiplier() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetEmissiveMultiplier(float NewEmissiveMultiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetIrradianceScalar(float NewIrradianceScalar);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLightMultiplier(float NewLightMultiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetProbesVisualization(bool IsProbesVisualized);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleVolume(bool IsVolumeEnabled);  // parameters 0x1
};
