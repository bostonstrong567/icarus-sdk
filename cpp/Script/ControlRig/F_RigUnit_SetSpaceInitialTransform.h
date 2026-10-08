// /Script/ControlRig.RigUnit_SetSpaceInitialTransform
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetSpaceInitialTransform.h

USTRUCT()
struct FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{
    UPROPERTY() FName SpaceName;  // 0x0068, size 0x8
    UPROPERTY() FTransform Transform;  // 0x0070, size 0x30
    UPROPERTY() FTransform Result;  // 0x00A0, size 0x30
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x00D0, size 0x1
    UPROPERTY() FCachedRigElement CachedSpaceIndex;  // 0x00D4, size 0x14
};
