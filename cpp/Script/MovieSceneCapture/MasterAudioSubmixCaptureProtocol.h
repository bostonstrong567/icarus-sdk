// /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Derives from: UMovieSceneAudioCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0x90, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/AudioCaptureProtocol.h

UCLASS(Config=EditorPerProjectUserSettings)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString FileName;  // 0x0058, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    double TotalGameRecordingTime;  // 0x0068, protected
    double TotalPlatformRecordingTime;  // 0x0070, protected
    double GameRecordingStartTime;  // 0x0078, protected
    double PlatformRecordingStartTime;  // 0x0080, protected
    bool bHasSetup;  // 0x0088, protected
};
