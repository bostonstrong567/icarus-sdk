// /Script/ControlRig.RigUnit_GetControlFloat
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_GetControlTransform.h

USTRUCT()
struct FRigUnit_GetControlFloat : public FRigUnit
{
    UPROPERTY() FName Control;  // 0x0008, size 0x8
    UPROPERTY() float FloatValue;  // 0x0010, size 0x4
    UPROPERTY() float Minimum;  // 0x0014, size 0x4
    UPROPERTY() float Maximum;  // 0x0018, size 0x4
    UPROPERTY() FCachedRigElement CachedControlIndex;  // 0x001C, size 0x14
};
