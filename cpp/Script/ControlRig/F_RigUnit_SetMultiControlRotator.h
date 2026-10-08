// /Script/ControlRig.RigUnit_SetMultiControlRotator
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlTransform.h

USTRUCT()
struct FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{
    UPROPERTY() TArray<FRigUnit_SetMultiControlRotator_Entry> Entries;  // 0x0068, size 0x10
    UPROPERTY() float Weight;  // 0x0078, size 0x4
    UPROPERTY() TArray<FCachedRigElement> CachedControlIndices;  // 0x0080, size 0x10
};
