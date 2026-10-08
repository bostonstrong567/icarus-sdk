// /Script/Engine.TimeStretchCurve
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Animation/TimeStretchCurve.h

USTRUCT()
struct FTimeStretchCurve
{
    UPROPERTY(EditAnywhere) float SamplingRate;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float CurveValueMinPrecision;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) TArray<FTimeStretchCurveMarker> Markers;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) float Sum_dT_i_by_C_i;  // 0x0018, size 0x4
};
