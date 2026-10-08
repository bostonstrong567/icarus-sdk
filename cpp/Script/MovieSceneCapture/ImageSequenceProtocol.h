// /Script/MovieSceneCapture.ImageSequenceProtocol
// Derives from: UFrameGrabberProtocol > UMovieSceneImageCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0xD8, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/ImageSequenceProtocol.h

UCLASS(Abstract, Config=EditorPerProjectUserSettings)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:

    // Not reflected: the engine's scripting cannot see these.
    EImageFormat Format;  // 0x0068, protected
    TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0> > StringFormatMap;  // 0x0070, private
    IImageWriteQueue * ImageWriteQueue;  // 0x00C0, private
    TFuture<void> FinalizeFence;  // 0x00C8, private

    // Virtual functions that start here:
    //   GetCompressionQuality
};
