// /Script/GameplayCameras.WaveOscillator
// size 0xC, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/WaveOscillatorCameraShakePattern.h

USTRUCT()
struct FWaveOscillator
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Amplitude;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Frequency;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInitialWaveOscillatorOffsetType InitialOffsetType;  // 0x0008, size 0x1
};
