// /Script/AudioCapture.AudioCaptureComponent
// Derives from: USynthComponent > USceneComponent > UActorComponent > UObject
// size 0x780, declared in Engine/Plugins/Runtime/AudioCapture/Source/AudioCapture/Public/AudioCaptureComponent.h

UCLASS(Config=Engine)
class UAudioCaptureComponent : public USynthComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 JitterLatencyFrames;  // 0x06C0, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    Audio::FAudioCaptureSynth CaptureSynth;  // 0x06C8, private
    TArray<float,TSizedDefaultAllocator<32> > CaptureAudioData;  // 0x0750, private
    int32 CapturedAudioDataSamples;  // 0x0760, private
    bool bSuccessfullyInitialized;  // 0x0764, private
    bool bIsCapturing;  // 0x0765, private
    bool bIsStreamOpen;  // 0x0766, private
    int32 CaptureChannels;  // 0x0768, private
    int32 FramesSinceStarting;  // 0x076C, private
    int32 ReadSampleIndex;  // 0x0770, private
    FThreadSafeBool bIsDestroying;  // 0x0774, private
    FThreadSafeBool bIsNotReadyForForFinishDestroy;  // 0x0778, private
};
