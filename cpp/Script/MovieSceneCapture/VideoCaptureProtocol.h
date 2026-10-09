// /Script/MovieSceneCapture.VideoCaptureProtocol
// Derives from: UFrameGrabberProtocol > UMovieSceneImageCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0x80, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/VideoCaptureProtocol.h

UCLASS(Config=EditorPerProjectUserSettings)
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:
    UPROPERTY(EditAnywhere, Config) bool bUseCompression;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere, Config) float CompressionQuality;  // 0x006C, size 0x4
private:
    TArray<TUniquePtr<FAVIWriter,TDefaultDelete<FAVIWriter> >,TSizedDefaultAllocator<32> > AVIWriters;  // 0x0070, not reflected
};
