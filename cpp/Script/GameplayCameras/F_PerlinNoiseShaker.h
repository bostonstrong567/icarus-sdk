// /Script/GameplayCameras.PerlinNoiseShaker
// size 0x8, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/PerlinNoiseCameraShakePattern.h

USTRUCT()
struct FPerlinNoiseShaker
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Amplitude;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Frequency;  // 0x0004, size 0x4
};
