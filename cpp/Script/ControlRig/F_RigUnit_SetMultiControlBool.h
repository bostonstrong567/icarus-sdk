// /Script/ControlRig.RigUnit_SetMultiControlBool
// size 0x88, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlTransform.h

USTRUCT()
struct FRigUnit_SetMultiControlBool : public FRigUnitMutable
{
    UPROPERTY() TArray<FRigUnit_SetMultiControlBool_Entry> Entries;  // 0x0068, size 0x10
    UPROPERTY() TArray<FCachedRigElement> CachedControlIndices;  // 0x0078, size 0x10
};
