// /Script/ControlRig.RigUnit_PropagateTransform
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_PropagateTransform.h

USTRUCT()
struct FRigUnit_PropagateTransform : public FRigUnitMutable
{
    UPROPERTY() FRigElementKey Item;  // 0x0068, size 0xC
    UPROPERTY() bool bRecomputeGlobal;  // 0x0074, size 0x1
    UPROPERTY() bool bApplyToChildren;  // 0x0075, size 0x1
    UPROPERTY() bool bRecursive;  // 0x0076, size 0x1
    UPROPERTY(Transient) FCachedRigElement CachedIndex;  // 0x0078, size 0x14
};
