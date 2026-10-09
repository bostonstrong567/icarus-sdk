// /Script/Engine.TimeStretchCurveInstance
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Animation/TimeStretchCurve.h

USTRUCT()
struct FTimeStretchCurveInstance
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) bool bHasValidData;  // 0x0000, size 0x1
    float T_Original;  // 0x0004, not reflected
    float T_Target;  // 0x0008, not reflected
    TArray<float,TSizedDefaultAllocator<32> > P_Marker_Original;  // 0x0010, not reflected
    TArray<float,TSizedDefaultAllocator<32> > P_Marker_Target;  // 0x0020, not reflected
};
