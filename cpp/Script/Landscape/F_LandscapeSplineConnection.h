// /Script/Landscape.LandscapeSplineConnection
// size 0x10, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeSplineControlPoint.h

USTRUCT()
struct FLandscapeSplineConnection
{
public:
    UPROPERTY() ULandscapeSplineSegment* Segment;  // 0x0000, size 0x8
    UPROPERTY() uint8 End : 1;  // 0x0008, mask 0x01
};
