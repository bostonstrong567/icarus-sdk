// /Script/GameplayCameras.FOscillator
// size 0xC, declared in Engine/Plugins/Cameras/GameplayCameras/Source/GameplayCameras/Public/MatineeCameraShake.h

USTRUCT()
struct FFOscillator
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Amplitude;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Frequency;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EInitialOscillatorOffset> InitialOffset;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EOscillatorWaveform Waveform;  // 0x0009, size 0x1
};
