// /Script/Engine.TTPropertyTrack
// size 0x20, declared in Engine/Source/Runtime/Engine/Classes/Engine/TimelineTemplate.h

USTRUCT()
struct FTTPropertyTrack : public FTTTrackBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() FName PropertyName;  // 0x0018, size 0x8
};
