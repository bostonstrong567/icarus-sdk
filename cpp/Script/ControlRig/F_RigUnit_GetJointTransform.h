// /Script/ControlRig.RigUnit_GetJointTransform
// size 0xF0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Deprecated/RigUnit_GetJointTransform.h

USTRUCT()
struct FRigUnit_GetJointTransform : public FRigUnitMutable
{
    UPROPERTY() FName Joint;  // 0x0068, size 0x8
    UPROPERTY() ETransformGetterType Type;  // 0x0070, size 0x1
    UPROPERTY() ETransformSpaceMode TransformSpace;  // 0x0071, size 0x1
    UPROPERTY() FTransform BaseTransform;  // 0x0080, size 0x30
    UPROPERTY() FName BaseJoint;  // 0x00B0, size 0x8
    UPROPERTY() FTransform Output;  // 0x00C0, size 0x30
};
