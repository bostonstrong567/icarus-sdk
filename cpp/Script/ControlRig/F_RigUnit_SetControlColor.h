// /Script/ControlRig.RigUnit_SetControlColor
// size 0x98, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlColor.h

USTRUCT()
struct FRigUnit_SetControlColor : public FRigUnitMutable
{
    UPROPERTY() FName Control;  // 0x0068, size 0x8
    UPROPERTY() FLinearColor Color;  // 0x0070, size 0x10
    UPROPERTY() FCachedRigElement CachedControlIndex;  // 0x0080, size 0x14
};
