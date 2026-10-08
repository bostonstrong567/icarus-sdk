// /Script/Engine.TimeStretchCurveInstance
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Animation/TimeStretchCurve.h

USTRUCT()
struct FTimeStretchCurveInstance
{
    UPROPERTY(Transient) bool bHasValidData;  // 0x0000, size 0x1

    // Not reflected:
    float T_Original;  // 0x0004
    float T_Target;  // 0x0008
    TArray<float,TSizedDefaultAllocator<32> > P_Marker_Original;  // 0x0010
    TArray<float,TSizedDefaultAllocator<32> > P_Marker_Target;  // 0x0020
};
