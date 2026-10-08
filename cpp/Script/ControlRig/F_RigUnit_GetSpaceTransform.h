// /Script/ControlRig.RigUnit_GetSpaceTransform
// size 0x70, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_GetSpaceTransform.h

USTRUCT()
struct FRigUnit_GetSpaceTransform : public FRigUnit
{
    UPROPERTY() FName Space;  // 0x0008, size 0x8
    UPROPERTY() EBoneGetterSetterMode SpaceType;  // 0x0010, size 0x1
    UPROPERTY() FTransform Transform;  // 0x0020, size 0x30
    UPROPERTY() FCachedRigElement CachedSpaceIndex;  // 0x0050, size 0x14
};
