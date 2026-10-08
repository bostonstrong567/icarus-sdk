// /Script/AudioCapture.AudioCaptureDeviceInfo
// size 0x10, declared in Engine/Plugins/Runtime/AudioCapture/Source/AudioCapture/Public/AudioCapture.h

USTRUCT()
struct FAudioCaptureDeviceInfo
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName DeviceName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 NumInputChannels;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 SampleRate;  // 0x000C, size 0x4
};
