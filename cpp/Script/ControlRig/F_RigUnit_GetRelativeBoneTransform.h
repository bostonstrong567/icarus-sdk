// /Script/ControlRig.RigUnit_GetRelativeBoneTransform
// size 0x80, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_GetRelativeBoneTransform.h

USTRUCT()
struct FRigUnit_GetRelativeBoneTransform : public FRigUnit
{
public:
    UPROPERTY() FName Bone;  // 0x0008, size 0x8
    UPROPERTY() FName Space;  // 0x0010, size 0x8
    UPROPERTY() FTransform Transform;  // 0x0020, size 0x30
    UPROPERTY(Transient) FCachedRigElement CachedBone;  // 0x0050, size 0x14
    UPROPERTY(Transient) FCachedRigElement CachedSpace;  // 0x0064, size 0x14
};
