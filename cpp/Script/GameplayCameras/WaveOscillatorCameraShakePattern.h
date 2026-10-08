// /Script/GameplayCameras.WaveOscillatorCameraShakePattern
// Derives from: USimpleCameraShakePattern > UCameraShakePattern > UObject
// size 0xD8, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/WaveOscillatorCameraShakePattern.h

UCLASS(EditInlineNew)
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LocationAmplitudeMultiplier;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LocationFrequencyMultiplier;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaveOscillator X;  // 0x0040, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaveOscillator Y;  // 0x004C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaveOscillator Z;  // 0x0058, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationAmplitudeMultiplier;  // 0x0064, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationFrequencyMultiplier;  // 0x0068, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaveOscillator Pitch;  // 0x006C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaveOscillator Yaw;  // 0x0078, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaveOscillator Roll;  // 0x0084, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaveOscillator FOV;  // 0x0090, size 0xC

    // Not reflected: the engine's scripting cannot see these.
    FVector InitialLocationOffset;  // 0x009C, private
    FVector CurrentLocationOffset;  // 0x00A8, private
    FVector InitialRotationOffset;  // 0x00B4, private
    FVector CurrentRotationOffset;  // 0x00C0, private
    float InitialFOVOffset;  // 0x00CC, private
    float CurrentFOVOffset;  // 0x00D0, private
};
