// /Script/ControlRig.RigUnit_SetCurveValue
// size 0x88, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Units/Hierarchy/RigUnit_SetCurveValue.h

USTRUCT()
struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() FName Curve;  // 0x0068, size 0x8
    UPROPERTY() float Value;  // 0x0070, size 0x4
private:
    UPROPERTY() FCachedRigElement CachedCurveIndex;  // 0x0074, size 0x14
};
