// /Script/MovieSceneCapture.MovieSceneCapture
// Derives from: UObject
// size 0x220, declared in Engine/Source/Runtime/MovieSceneCapture/Public/MovieSceneCapture.h

UCLASS(Config=EditorPerProjectUserSettings)
class UMovieSceneCapture : public UObject, public IMovieSceneCaptureInterface
{
public:
    UPROPERTY(EditAnywhere, Config) FSoftClassPath ImageCaptureProtocolType;  // 0x0038, size 0x18
    UPROPERTY(EditAnywhere, Config) FSoftClassPath AudioCaptureProtocolType;  // 0x0050, size 0x18
    UPROPERTY(EditAnywhere, Transient, Instanced) UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere, Transient, Instanced) UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol;  // 0x0070, size 0x8
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FMovieSceneCaptureSettings Settings;  // 0x0078, size 0x70
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bUseSeparateProcess;  // 0x00E8, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bCloseEditorWhenCaptureStarts;  // 0x00E9, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) FString AdditionalCommandLineArguments;  // 0x00F0, size 0x10
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) FString InheritedCommandLineArguments;  // 0x0100, size 0x10
protected:
    TSharedPtr<ICaptureStrategy,0> CaptureStrategy;  // 0x0110, not reflected
    TOptional<FCaptureProtocolInitSettings> InitSettings;  // 0x0120, not reflected
    bool bFinalizeWhenReady;  // 0x0140, not reflected
    FMovieSceneCaptureHandle Handle;  // 0x0144, not reflected
    FCachedMetrics CachedMetrics;  // 0x0148, not reflected
    TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0> > FormatMappings;  // 0x0160, not reflected
    bool bCapturing;  // 0x01B0, not reflected
    bool bIsAudioCapturePass;  // 0x01B1, not reflected
    int32 FrameNumberOffset;  // 0x01B4, not reflected
    UMovieSceneCapture::FOnCaptureFinished OnCaptureFinishedDelegate;  // 0x01B8, not reflected
    Scalability::FQualityLevels CachedQualityLevels;  // 0x01D0, not reflected
public:
    UFUNCTION(BlueprintCallable) UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol();  // parameters 0x8
    UFUNCTION(BlueprintCallable) UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetAudioCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetImageCaptureProtocolType(TSubclassOf<UMovieSceneCaptureProtocolBase> ProtocolType);  // parameters 0x8

    // Virtual functions that start here:
    //   AddFormatMappings, DeserializeAdditionalJson, IsAudioPassIfNeeded, LoadFromConfig, OnTick
    //   SaveToConfig, SerializeAdditionalJson
};
