// /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_ModifyTransforms.h

USTRUCT()
struct FRigUnit_ModifyTransforms_PerItem
{
    UPROPERTY(EditAnywhere) FRigElementKey Item;  // 0x0000, size 0xC
    UPROPERTY(EditAnywhere) FTransform Transform;  // 0x0010, size 0x30
};
