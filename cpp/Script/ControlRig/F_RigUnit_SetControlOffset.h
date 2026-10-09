// /Script/ControlRig.RigUnit_SetControlOffset
// size 0xC0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlOffset.h

USTRUCT()
struct FRigUnit_SetControlOffset : public FRigUnitMutable
{
public:
    UPROPERTY() FName Control;  // 0x0068, size 0x8
    UPROPERTY() FTransform Offset;  // 0x0070, size 0x30
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x00A0, size 0x1
    UPROPERTY() FCachedRigElement CachedControlIndex;  // 0x00A4, size 0x14
};
