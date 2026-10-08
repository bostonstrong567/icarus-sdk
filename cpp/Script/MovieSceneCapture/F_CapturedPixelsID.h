// /Script/MovieSceneCapture.CapturedPixelsID
// size 0x50, declared in Engine/Source/Runtime/MovieSceneCapture/Public/Protocols/UserDefinedCaptureProtocol.h

USTRUCT()
struct FCapturedPixelsID
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName, FName> Identifiers;  // 0x0000, size 0x50
};
