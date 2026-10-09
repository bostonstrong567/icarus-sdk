// /Script/Engine.TimeStretchCurveMarker
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Animation/TimeStretchCurve.h

USTRUCT()
struct FTimeStretchCurveMarker
{
public:
    UPROPERTY(EditAnywhere) float Time;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float Alpha;  // 0x000C, size 0x4
};
