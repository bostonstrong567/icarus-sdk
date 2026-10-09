// /Script/ControlRig.RigUnit_SetSpaceTransform
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetSpaceTransform.h

USTRUCT()
struct FRigUnit_SetSpaceTransform : public FRigUnitMutable
{
public:
    UPROPERTY() FName Space;  // 0x0068, size 0x8
    UPROPERTY() float Weight;  // 0x0070, size 0x4
    UPROPERTY() FTransform Transform;  // 0x0080, size 0x30
    UPROPERTY() EBoneGetterSetterMode SpaceType;  // 0x00B0, size 0x1
    UPROPERTY() FCachedRigElement CachedSpaceIndex;  // 0x00B4, size 0x14
};
