// /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
// Derives from: UObject
// size 0x58, declared in Engine/Source/Runtime/MovieSceneCapture/Public/MovieSceneCaptureProtocolBase.h

UCLASS(Abstract, Config=EditorPerProjectUserSettings)
class UMovieSceneCaptureProtocolBase : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    TOptional<FCaptureProtocolInitSettings> InitSettings;  // 0x0028, not reflected
    const ICaptureProtocolHost * CaptureHost;  // 0x0048, not reflected
private:
    UPROPERTY(Transient) EMovieSceneCaptureProtocolState State;  // 0x0050, size 0x1
    bool[2] bFrameRequested;  // 0x0051, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) EMovieSceneCaptureProtocolState GetState() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCapturing() const;  // parameters 0x1

    // Virtual functions that start here:
    //   AddFormatMappingsImpl, BeginFinalizeImpl, CanWriteToFileImpl, CaptureFrameImpl, FinalizeImpl
    //   GenerateFilenameImpl, HasFinishedProcessingImpl, OnLoadConfigImpl, OnReleaseConfigImpl
    //   PauseCaptureImpl, PreTickImpl, SetupImpl, StartCaptureImpl, TickImpl, WarmUpImpl
};
