// /Script/AudioCapture.AudioCaptureComponent
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0x780, declared in Engine/Plugins/Runtime/AudioCapture/Source/AudioCapture/Public/AudioCaptureComponent.h

UCLASS(Config=Engine)
class UAudioCaptureComponent : public USynthComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 JitterLatencyFrames;  // 0x06C0, size 0x4
private:
    Audio::FAudioCaptureSynth CaptureSynth;  // 0x06C8, not reflected
    TArray<float,TSizedDefaultAllocator<32> > CaptureAudioData;  // 0x0750, not reflected
    int32 CapturedAudioDataSamples;  // 0x0760, not reflected
    bool bSuccessfullyInitialized;  // 0x0764, not reflected
    bool bIsCapturing;  // 0x0765, not reflected
    bool bIsStreamOpen;  // 0x0766, not reflected
    int32 CaptureChannels;  // 0x0768, not reflected
    int32 FramesSinceStarting;  // 0x076C, not reflected
    int32 ReadSampleIndex;  // 0x0770, not reflected
    FThreadSafeBool bIsDestroying;  // 0x0774, not reflected
    FThreadSafeBool bIsNotReadyForForFinishDestroy;  // 0x0778, not reflected
};
