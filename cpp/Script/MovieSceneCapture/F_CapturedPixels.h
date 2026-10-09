// /Script/MovieSceneCapture.CapturedPixels
// size 0x10, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/UserDefinedCaptureProtocol.h

USTRUCT()
struct FCapturedPixels
{
public:
    TSharedPtr<FImagePixelData,1> ImageData;  // 0x0000, not reflected
};
