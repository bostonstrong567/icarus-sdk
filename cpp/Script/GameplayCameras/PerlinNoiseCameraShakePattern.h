// /Script/GameplayCameras.PerlinNoiseCameraShakePattern
// Derives from: USimpleCameraShakePattern > UCameraShakePattern > UObject
// size 0xB8, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/PerlinNoiseCameraShakePattern.h

UCLASS(EditInlineNew)
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LocationAmplitudeMultiplier;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LocationFrequencyMultiplier;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPerlinNoiseShaker X;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPerlinNoiseShaker Y;  // 0x0048, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPerlinNoiseShaker Z;  // 0x0050, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationAmplitudeMultiplier;  // 0x0058, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationFrequencyMultiplier;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPerlinNoiseShaker Pitch;  // 0x0060, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPerlinNoiseShaker Yaw;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPerlinNoiseShaker Roll;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPerlinNoiseShaker FOV;  // 0x0078, size 0x8
private:
    FVector InitialLocationOffset;  // 0x0080, not reflected
    FVector CurrentLocationOffset;  // 0x008C, not reflected
    FVector InitialRotationOffset;  // 0x0098, not reflected
    FVector CurrentRotationOffset;  // 0x00A4, not reflected
    float InitialFOVOffset;  // 0x00B0, not reflected
    float CurrentFOVOffset;  // 0x00B4, not reflected
};
