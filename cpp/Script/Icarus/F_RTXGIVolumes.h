// /Script/Icarus.RTXGIVolumes
// size 0xE0, declared in Icarus/Source/Icarus/IcarusGenerated/RTXGIVolumes/RTXGIVolumesTable.h

USTRUCT()
struct FRTXGIVolumes : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere) FTransform BoxTransform;  // 0x0020, size 0x30
    UPROPERTY(EditAnywhere) bool EnableVolume;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere) float UpdatePriority;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) int32 LightingPriority;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere) float BlendingDistance;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere) float BlendingCutoffDistance;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere) bool RuntimeStatic;  // 0x0064, size 0x1
    UPROPERTY(EditAnywhere) FVector LastOrigin;  // 0x0068, size 0xC
    UPROPERTY(EditAnywhere) EDDGIRaysPerProbe RaysPerProbe;  // 0x0074, size 0x4
    UPROPERTY(EditAnywhere) FIntVector ProbeCounts;  // 0x0078, size 0xC
    UPROPERTY(EditAnywhere) float ProbeMaxRayDistance;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere) float ProbeHistoryWeight;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere) FProbeRelocation ProbeRelocation;  // 0x008C, size 0xC
    UPROPERTY(EditAnywhere) bool ScrollProbesInfinitely;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere) float ScrollingVolumeZOffset;  // 0x009C, size 0x4
    UPROPERTY(EditAnywhere) bool VisualizeProbes;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere) FIntVector ProbeScrollOffset;  // 0x00A4, size 0xC
    UPROPERTY(EditAnywhere) float probeDistanceExponent;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere) float probeIrradianceEncodingGamma;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere) float probeChangeThreshold;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere) float probeBrightnessThreshold;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere) EDDGISkyLightType SkyLightTypeOnRayMiss;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere) float ViewBias;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere) float NormalBias;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere) float LightMultiplier;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere) float EmissiveMultiplier;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere) float IrradianceScalar;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FLightingChannels LightingChannels;  // 0x00D8, size 0x1
};
