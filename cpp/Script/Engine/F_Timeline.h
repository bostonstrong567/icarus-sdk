// /Script/Engine.Timeline
// size 0x98, declared in Engine/Source/Runtime/Engine/Classes/Components/TimelineComponent.h

USTRUCT()
struct FTimeline
{
    UPROPERTY() TEnumAsByte<ETimelineLengthMode> LengthMode;  // 0x0000, size 0x1
    UPROPERTY() uint8 bLooping : 1;  // 0x0001, mask 0x01
    UPROPERTY() uint8 bReversePlayback : 1;  // 0x0001, mask 0x02
    UPROPERTY() uint8 bPlaying : 1;  // 0x0001, mask 0x04
    UPROPERTY() float Length;  // 0x0004, size 0x4
    UPROPERTY() float PlayRate;  // 0x0008, size 0x4
    UPROPERTY() float Position;  // 0x000C, size 0x4
    UPROPERTY() TArray<FTimelineEventEntry> Events;  // 0x0010, size 0x10
    UPROPERTY() TArray<FTimelineVectorTrack> InterpVectors;  // 0x0020, size 0x10
    UPROPERTY() TArray<FTimelineFloatTrack> InterpFloats;  // 0x0030, size 0x10
    UPROPERTY() TArray<FTimelineLinearColorTrack> InterpLinearColors;  // 0x0040, size 0x10
    UPROPERTY() FOnTimelineEvent TimelinePostUpdateFunc;  // 0x0050, size 0x10
    UPROPERTY() FOnTimelineEvent TimelineFinishedFunc;  // 0x0060, size 0x10
    UPROPERTY() TWeakObjectPtr<UObject> PropertySetObject;  // 0x0070, size 0x8
    UPROPERTY() FName DirectionPropertyName;  // 0x0078, size 0x8

    // Not reflected:
    TDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> TimelineFinishFuncStatic;  // 0x0080
    FProperty * DirectionProperty;  // 0x0090
};
