// /Script/AudioCapture.AudioCapture
// Derives from: UAudioGenerator > UObject
// size 0xB0, declared in Engine/Plugins/Runtime/AudioCapture/Source/AudioCapture/Public/AudioCapture.h

UCLASS()
class UAudioCapture : public UAudioGenerator
{
protected:
    Audio::FAudioCapture AudioCapture;  // 0x00A8, not reflected
public:
    UFUNCTION(BlueprintCallable) bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool IsCapturingAudio();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartCapturingAudio();
    UFUNCTION(BlueprintCallable) void StopCapturingAudio();
};
