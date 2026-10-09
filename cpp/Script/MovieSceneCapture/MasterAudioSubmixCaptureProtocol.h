// /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Derives from: UMovieSceneAudioCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0x90, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/AudioCaptureProtocol.h

UCLASS(Config=EditorPerProjectUserSettings)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString FileName;  // 0x0058, size 0x10
    double TotalGameRecordingTime;  // 0x0068, not reflected
    double TotalPlatformRecordingTime;  // 0x0070, not reflected
    double GameRecordingStartTime;  // 0x0078, not reflected
    double PlatformRecordingStartTime;  // 0x0080, not reflected
    bool bHasSetup;  // 0x0088, not reflected
};
