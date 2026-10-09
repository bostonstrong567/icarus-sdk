// /Script/ControlRig.RigUnit_SetMultiControlVector2D
// size 0x90, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_SetControlTransform.h

USTRUCT()
struct FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{
public:
    UPROPERTY() TArray<FRigUnit_SetMultiControlVector2D_Entry> Entries;  // 0x0068, size 0x10
    UPROPERTY() float Weight;  // 0x0078, size 0x4
    UPROPERTY() TArray<FCachedRigElement> CachedControlIndices;  // 0x0080, size 0x10
};
