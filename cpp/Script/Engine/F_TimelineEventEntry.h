// /Script/Engine.TimelineEventEntry
// size 0x14, declared in Engine/Source/Runtime/Engine/Classes/Components/TimelineComponent.h

USTRUCT()
struct FTimelineEventEntry
{
    UPROPERTY() float Time;  // 0x0000, size 0x4
    UPROPERTY() FOnTimelineEvent EventFunc;  // 0x0004, size 0x10
};
