// /Script/ControlRig.RigUnit_SetTranslation
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Units/Hierarchy/RigUnit_SetTransform.h

USTRUCT()
struct FRigUnit_SetTranslation : public FRigUnitMutable
{
public:
    UPROPERTY() FRigElementKey Item;  // 0x0068, size 0xC
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x0074, size 0x1
    UPROPERTY() FVector Translation;  // 0x0078, size 0xC
    UPROPERTY() float Weight;  // 0x0084, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x0088, size 0x1
    UPROPERTY() FCachedRigElement CachedIndex;  // 0x008C, size 0x14
};
