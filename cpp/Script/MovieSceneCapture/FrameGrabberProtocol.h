// /Script/MovieSceneCapture.FrameGrabberProtocol
// Derives from: UMovieSceneImageCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0x68, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/FrameGrabberProtocol.h

UCLASS(Abstract, Config=EditorPerProjectUserSettings)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:
    EPixelFormat DesiredPixelFormat;  // 0x0058, not reflected
    uint32 RingBufferSize;  // 0x005C, not reflected
private:
    TUniquePtr<FFrameGrabber,TDefaultDelete<FFrameGrabber> > FrameGrabber;  // 0x0060, not reflected

    // Virtual functions that start here:
    //   GetFramePayload, ProcessFrame
};
