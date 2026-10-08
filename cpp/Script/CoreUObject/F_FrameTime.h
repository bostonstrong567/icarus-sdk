// /Script/CoreUObject.FrameTime
// size 0x8, declared in Engine/Source/Runtime/Core/Public/Misc/FrameTime.h

USTRUCT()
struct FFrameTime
{
    UPROPERTY(BlueprintReadWrite) FFrameNumber FrameNumber;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadWrite) float SubFrame;  // 0x0004, size 0x4
};
