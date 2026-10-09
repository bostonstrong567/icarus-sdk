// /Script/Engine.TTTrackBase
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/TimelineTemplate.h

USTRUCT()
struct FTTTrackBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() bool bIsExternalCurve;  // 0x0010, size 0x1
private:
    UPROPERTY() FName TrackName;  // 0x0008, size 0x8
};
