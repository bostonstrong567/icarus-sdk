// /Script/Landscape.LandscapeSplineSegmentConnection
// size 0x18, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeSplineSegment.h

USTRUCT()
struct FLandscapeSplineSegmentConnection
{
public:
    UPROPERTY() ULandscapeSplineControlPoint* ControlPoint;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) float TangentLen;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) FName SocketName;  // 0x000C, size 0x8
};
