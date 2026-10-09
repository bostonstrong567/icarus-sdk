// /Script/Landscape.LandscapeSplineInterpPoint
// size 0x70, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeSplineSegment.h

USTRUCT()
struct FLandscapeSplineInterpPoint
{
public:
    UPROPERTY() FVector Center;  // 0x0000, size 0xC
    UPROPERTY() FVector Left;  // 0x000C, size 0xC
    UPROPERTY() FVector Right;  // 0x0018, size 0xC
    UPROPERTY() FVector FalloffLeft;  // 0x0024, size 0xC
    UPROPERTY() FVector FalloffRight;  // 0x0030, size 0xC
    UPROPERTY() FVector LayerLeft;  // 0x003C, size 0xC
    UPROPERTY() FVector LayerRight;  // 0x0048, size 0xC
    UPROPERTY() FVector LayerFalloffLeft;  // 0x0054, size 0xC
    UPROPERTY() FVector LayerFalloffRight;  // 0x0060, size 0xC
    UPROPERTY() float StartEndFalloff;  // 0x006C, size 0x4
};
