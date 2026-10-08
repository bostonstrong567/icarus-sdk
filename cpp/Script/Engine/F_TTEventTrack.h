// /Script/Engine.TTEventTrack
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/TimelineTemplate.h

USTRUCT()
struct FTTEventTrack : public FTTTrackBase
{
    UPROPERTY() FName FunctionName;  // 0x0018, size 0x8
    UPROPERTY() UCurveFloat* CurveKeys;  // 0x0020, size 0x8
};
