// /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
// Derives from: UUserDefinedCaptureProtocol > UMovieSceneImageCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0xE0, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/UserDefinedCaptureProtocol.h

UCLASS(Abstract, Config=EditorPerProjectUserSettings)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) EDesiredImageFormat Format;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) bool bEnableCompression;  // 0x00D9, size 0x1
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) int32 CompressionQuality;  // 0x00DC, size 0x4

    UFUNCTION(BlueprintCallable) FString GenerateFilenameForBuffer(UTexture* Buffer, const FCapturedPixelsID& StreamID);  // parameters 0x68
    UFUNCTION(BlueprintCallable) FString GenerateFilenameForCurrentFrame();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void WriteImageToDisk(const FCapturedPixels& PixelData, const FCapturedPixelsID& StreamID, const FFrameMetrics& FrameMetrics, bool bCopyImageData);  // parameters 0x71
};
