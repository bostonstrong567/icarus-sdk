// /Script/MovieSceneCapture.CompressedImageSequenceProtocol
// Derives from: UImageSequenceProtocol > UFrameGrabberProtocol > UMovieSceneImageCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0xE0, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/ImageSequenceProtocol.h

UCLASS(Abstract, Config=EditorPerProjectUserSettings)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) int32 CompressionQuality;  // 0x00D8, size 0x4
};
