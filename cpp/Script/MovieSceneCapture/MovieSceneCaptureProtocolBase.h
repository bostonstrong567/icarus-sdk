// /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
// Derives from: UObject
// size 0x58, declared in Engine/Source/Runtime/MovieSceneCapture/Public/MovieSceneCaptureProtocolBase.h

UCLASS(Abstract, Config=EditorPerProjectUserSettings)
class UMovieSceneCaptureProtocolBase : public UObject
{
public:
    UPROPERTY(Transient) EMovieSceneCaptureProtocolState State;  // 0x0050, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TOptional<FCaptureProtocolInitSettings> InitSettings;  // 0x0028, protected
    const ICaptureProtocolHost * CaptureHost;  // 0x0048, protected
    bool[2] bFrameRequested;  // 0x0051, private

    UFUNCTION(BlueprintCallable, BlueprintPure) EMovieSceneCaptureProtocolState GetState() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCapturing() const;  // parameters 0x1

    // Virtual functions that start here:
    //   AddFormatMappingsImpl, BeginFinalizeImpl, CanWriteToFileImpl, CaptureFrameImpl, FinalizeImpl
    //   GenerateFilenameImpl, HasFinishedProcessingImpl, OnLoadConfigImpl, OnReleaseConfigImpl
    //   PauseCaptureImpl, PreTickImpl, SetupImpl, StartCaptureImpl, TickImpl, WarmUpImpl
};
