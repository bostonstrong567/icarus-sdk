// /Script/RTXGI.ProbeRelocation
// size 0xC, declared in Engine/Plugins/Runtime/Nvidia/RTXGI/Source/RTXGI/Public/DDGIVolumeComponent.h

USTRUCT()
struct FProbeRelocation
{
    UPROPERTY(EditAnywhere) bool AutomaticProbeRelocation;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) float ProbeMinFrontfaceDistance;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float ProbeBackfaceThreshold;  // 0x0008, size 0x4
};
