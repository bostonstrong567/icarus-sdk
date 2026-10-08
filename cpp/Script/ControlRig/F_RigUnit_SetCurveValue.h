// /Script/ControlRig.RigUnit_SetCurveValue
// size 0x88, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Units/Hierarchy/RigUnit_SetCurveValue.h

USTRUCT()
struct FRigUnit_SetCurveValue : public FRigUnitMutable
{
    UPROPERTY() FName Curve;  // 0x0068, size 0x8
    UPROPERTY() float Value;  // 0x0070, size 0x4
    UPROPERTY() FCachedRigElement CachedCurveIndex;  // 0x0074, size 0x14
};
