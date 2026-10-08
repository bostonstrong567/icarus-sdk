// /Script/MovieSceneCapture.FrameMetrics
// size 0x10, declared in Engine/Source/Runtime/MovieSceneCapture/Public/MovieSceneCaptureProtocolBase.h

USTRUCT()
struct FFrameMetrics
{
    UPROPERTY(BlueprintReadOnly) float TotalElapsedTime;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadOnly) float FrameDelta;  // 0x0004, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 FrameNumber;  // 0x0008, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 NumDroppedFrames;  // 0x000C, size 0x4
};
