// /Script/RTXGI.RTXGIPluginSettings
// Derives from: UDeveloperSettings > UObject
// size 0x50, declared in Engine/Plugins/Runtime/Nvidia/RTXGI/Source/RTXGI/Private/RTXGIPluginSettings.h

UCLASS(Config=Engine)
class URTXGIPluginSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) EDDGIIrradianceBits IrradianceBits;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, Config) EDDGIDistanceBits DistanceBits;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere, Config) float DebugProbeRadius;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 ProbeUpdateRayBudget;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, Config) EDDGIProbesVisulizationMode ProbesVisualization;  // 0x0044, size 0x1
    UPROPERTY(EditAnywhere, Config) float ProbesDepthScale;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, Config) bool SerializeProbes;  // 0x004C, size 0x1
};
