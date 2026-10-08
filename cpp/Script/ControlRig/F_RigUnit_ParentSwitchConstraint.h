// /Script/ControlRig.RigUnit_ParentSwitchConstraint
// size 0x160, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_ParentSwitchConstraint.h

USTRUCT()
struct FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{
    UPROPERTY() FRigElementKey Subject;  // 0x0068, size 0xC
    UPROPERTY() int32 ParentIndex;  // 0x0074, size 0x4
    UPROPERTY() FRigElementKeyCollection Parents;  // 0x0078, size 0x10
    UPROPERTY() FTransform InitialGlobalTransform;  // 0x0090, size 0x30
    UPROPERTY() float Weight;  // 0x00C0, size 0x4
    UPROPERTY() FTransform Transform;  // 0x00D0, size 0x30
    UPROPERTY() bool Switched;  // 0x0100, size 0x1
    UPROPERTY() FCachedRigElement CachedSubject;  // 0x0104, size 0x14
    UPROPERTY() FCachedRigElement CachedParent;  // 0x0118, size 0x14
    UPROPERTY() FTransform RelativeOffset;  // 0x0130, size 0x30
};
