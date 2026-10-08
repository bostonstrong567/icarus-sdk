// /Script/ControlRig.RigUnit_GetControlRotator
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_GetControlTransform.h

USTRUCT()
struct FRigUnit_GetControlRotator : public FRigUnit
{
    UPROPERTY() FName Control;  // 0x0008, size 0x8
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x0010, size 0x1
    UPROPERTY() FRotator Rotator;  // 0x0014, size 0xC
    UPROPERTY() FRotator Minimum;  // 0x0020, size 0xC
    UPROPERTY() FRotator Maximum;  // 0x002C, size 0xC
    UPROPERTY() FCachedRigElement CachedControlIndex;  // 0x0038, size 0x14
};
