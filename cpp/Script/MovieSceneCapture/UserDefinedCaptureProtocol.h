// /Script/MovieSceneCapture.UserDefinedCaptureProtocol
// Derives from: UMovieSceneImageCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0xD8, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/UserDefinedCaptureProtocol.h

UCLASS(Abstract)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
    UPROPERTY(Transient, BlueprintReadOnly) UWorld* World;  // 0x0058, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TUniquePtr<FFrameGrabber,TDefaultDelete<FFrameGrabber> > FinalPixelsFrameGrabber;  // 0x0060, protected
    TAtomic<int> NumOutstandingOperations;  // 0x0068, protected
    FFrameMetrics CachedFrameMetrics;  // 0x006C, protected
    FCapturedPixelsID FinalPixelsID;  // 0x0080, protected
    const FCapturedPixelsID * CurrentStreamID;  // 0x00D0, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) FString GenerateFilename(const FFrameMetrics& InFrameMetrics) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) FFrameMetrics GetCurrentFrameMetrics() const;  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnBeginFinalize();
    UFUNCTION(BlueprintNativeEvent) bool OnCanFinalize() const;  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnCaptureFrame();
    UFUNCTION(BlueprintImplementableEvent) void OnFinalize();
    UFUNCTION(BlueprintImplementableEvent) void OnPauseCapture();
    UFUNCTION(BlueprintImplementableEvent) void OnPixelsReceived(const FCapturedPixels& Pixels, const FCapturedPixelsID& ID, FFrameMetrics FrameMetrics);  // parameters 0x70
    UFUNCTION(BlueprintImplementableEvent) void OnPreTick();
    UFUNCTION(BlueprintNativeEvent) bool OnSetup();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnStartCapture();
    UFUNCTION(BlueprintImplementableEvent) void OnTick();
    UFUNCTION(BlueprintImplementableEvent) void OnWarmUp();
    UFUNCTION(BlueprintCallable) void ResolveBuffer(UTexture* Buffer, const FCapturedPixelsID& BufferID);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void StartCapturingFinalPixels(const FCapturedPixelsID& StreamID);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void StopCapturingFinalPixels();

    // Virtual functions that start here:
    //   GenerateFilename, OnCanFinalize_Implementation, OnSetup_Implementation
};
