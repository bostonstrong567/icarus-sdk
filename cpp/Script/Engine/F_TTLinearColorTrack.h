// /Script/Engine.TTLinearColorTrack
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/TimelineTemplate.h

USTRUCT()
struct FTTLinearColorTrack : public FTTPropertyTrack
{
    UPROPERTY() UCurveLinearColor* CurveLinearColor;  // 0x0020, size 0x8
};
