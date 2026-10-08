// /Script/ControlRig.RigUnit_SetControlFloat
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlTransform.h

USTRUCT()
struct FRigUnit_SetControlFloat : public FRigUnitMutable
{
    UPROPERTY() FName Control;  // 0x0068, size 0x8
    UPROPERTY() float Weight;  // 0x0070, size 0x4
    UPROPERTY() float FloatValue;  // 0x0074, size 0x4
    UPROPERTY() FCachedRigElement CachedControlIndex;  // 0x0078, size 0x14
};
