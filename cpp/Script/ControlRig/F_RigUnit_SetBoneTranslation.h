// /Script/ControlRig.RigUnit_SetBoneTranslation
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetBoneTranslation.h

USTRUCT()
struct FRigUnit_SetBoneTranslation : public FRigUnitMutable
{
public:
    UPROPERTY() FName Bone;  // 0x0068, size 0x8
    UPROPERTY() FVector Translation;  // 0x0070, size 0xC
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x007C, size 0x1
    UPROPERTY() float Weight;  // 0x0080, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x0084, size 0x1
    UPROPERTY(Transient) FCachedRigElement CachedBone;  // 0x0088, size 0x14
};
