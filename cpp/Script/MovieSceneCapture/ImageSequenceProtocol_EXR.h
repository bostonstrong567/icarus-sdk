// /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
// Derives from: UImageSequenceProtocol > UFrameGrabberProtocol > UMovieSceneImageCaptureProtocolBase > UMovieSceneCaptureProtocolBase > UObject
// size 0xE8, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/ImageSequenceProtocol.h

UCLASS(Config=EditorPerProjectUserSettings)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:
    UPROPERTY(EditAnywhere, Config) bool bCompressed;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EHDRCaptureGamut> CaptureGamut;  // 0x00D9, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    int32 RestoreColorGamut;  // 0x00DC, private
    int32 RestoreOutputDevice;  // 0x00E0, private
};
