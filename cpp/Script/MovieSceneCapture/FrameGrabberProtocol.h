// /Script/MovieSceneCapture.FrameGrabberProtocol
// Derives from: UMovieSceneImageCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0x68, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/FrameGrabberProtocol.h

UCLASS(Abstract, Config=EditorPerProjectUserSettings)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:

    // Not reflected: the engine's scripting cannot see these.
    EPixelFormat DesiredPixelFormat;  // 0x0058
    uint32 RingBufferSize;  // 0x005C
    TUniquePtr<FFrameGrabber,TDefaultDelete<FFrameGrabber> > FrameGrabber;  // 0x0060, private

    // Virtual functions that start here:
    //   GetFramePayload, ProcessFrame
};
