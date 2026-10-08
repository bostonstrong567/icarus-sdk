// /Script/ControlRig.RigUnit_SetControlRotator
// size 0x98, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlTransform.h

USTRUCT()
struct FRigUnit_SetControlRotator : public FRigUnitMutable
{
    UPROPERTY() FName Control;  // 0x0068, size 0x8
    UPROPERTY() float Weight;  // 0x0070, size 0x4
    UPROPERTY() FRotator Rotator;  // 0x0074, size 0xC
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x0080, size 0x1
    UPROPERTY() FCachedRigElement CachedControlIndex;  // 0x0084, size 0x14
};
