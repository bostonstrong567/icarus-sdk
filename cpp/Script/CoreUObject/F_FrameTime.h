// /Script/CoreUObject.FrameTime
// size 0x8, declared in Engine/Source/Runtime/Core/Public/Misc/FrameTime.h

USTRUCT()
struct FFrameTime
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintReadWrite) FFrameNumber FrameNumber;  // 0x0000, size 0x4
private:
    UPROPERTY(BlueprintReadWrite) float SubFrame;  // 0x0004, size 0x4
};
