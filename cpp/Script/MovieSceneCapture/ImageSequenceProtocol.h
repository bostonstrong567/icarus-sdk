// /Script/MovieSceneCapture.ImageSequenceProtocol
// Derives from: UFrameGrabberProtocol > UMovieSceneImageCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0xD8, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/ImageSequenceProtocol.h

UCLASS(Abstract, Config=EditorPerProjectUserSettings)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
protected:
    EImageFormat Format;  // 0x0068, not reflected
private:
    TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0> > StringFormatMap;  // 0x0070, not reflected
    IImageWriteQueue * ImageWriteQueue;  // 0x00C0, not reflected
    TFuture<void> FinalizeFence;  // 0x00C8, not reflected

    // Virtual functions that start here:
    //   GetCompressionQuality
};
