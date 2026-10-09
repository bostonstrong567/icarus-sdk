// /Script/Engine.TTTrackId
// size 0x8, declared in Engine/Source/Runtime/Engine/Classes/Engine/TimelineTemplate.h

USTRUCT()
struct FTTTrackId
{
public:
    UPROPERTY() int32 TrackType;  // 0x0000, size 0x4
    UPROPERTY() int32 TrackIndex;  // 0x0004, size 0x4
};
