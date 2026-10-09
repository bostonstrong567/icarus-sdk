// /Script/ControlRig.RigUnit_GetTransform
// size 0x70, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_GetTransform.h

USTRUCT()
struct FRigUnit_GetTransform : public FRigUnit
{
public:
    UPROPERTY() FRigElementKey Item;  // 0x0008, size 0xC
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x0014, size 0x1
    UPROPERTY() bool bInitial;  // 0x0015, size 0x1
    UPROPERTY() FTransform Transform;  // 0x0020, size 0x30
    UPROPERTY() FCachedRigElement CachedIndex;  // 0x0050, size 0x14
};
