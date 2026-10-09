// /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlTransform.h

USTRUCT()
struct FRigUnit_SetMultiControlRotator_Entry
{
public:
    UPROPERTY() FName Control;  // 0x0000, size 0x8
    UPROPERTY() FRotator Rotator;  // 0x0008, size 0xC
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x0014, size 0x1
};
