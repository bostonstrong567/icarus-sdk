// /Script/ControlRig.RigUnit_SetControlBool
// size 0x88, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlTransform.h

USTRUCT()
struct FRigUnit_SetControlBool : public FRigUnitMutable
{
    UPROPERTY() FName Control;  // 0x0068, size 0x8
    UPROPERTY() bool BoolValue;  // 0x0070, size 0x1
    UPROPERTY() FCachedRigElement CachedControlIndex;  // 0x0074, size 0x14
};
