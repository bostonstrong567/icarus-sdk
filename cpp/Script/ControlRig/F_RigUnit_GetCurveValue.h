// /Script/ControlRig.RigUnit_GetCurveValue
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_GetCurveValue.h

USTRUCT()
struct FRigUnit_GetCurveValue : public FRigUnit
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() FName Curve;  // 0x0008, size 0x8
    UPROPERTY() float Value;  // 0x0010, size 0x4
private:
    UPROPERTY() FCachedRigElement CachedCurveIndex;  // 0x0014, size 0x14
};
