// /Script/ControlRig.RigUnit_SetControlTransform
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlTransform.h

USTRUCT()
struct FRigUnit_SetControlTransform : public FRigUnitMutable
{
public:
    UPROPERTY() FName Control;  // 0x0068, size 0x8
    UPROPERTY() float Weight;  // 0x0070, size 0x4
    UPROPERTY() FTransform Transform;  // 0x0080, size 0x30
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x00B0, size 0x1
    UPROPERTY() FCachedRigElement CachedControlIndex;  // 0x00B4, size 0x14
};
