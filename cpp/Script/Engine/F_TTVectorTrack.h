// /Script/Engine.TTVectorTrack
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Engine/TimelineTemplate.h

USTRUCT()
struct FTTVectorTrack : public FTTPropertyTrack
{
    UPROPERTY() UCurveVector* CurveVector;  // 0x0020, size 0x8
};
