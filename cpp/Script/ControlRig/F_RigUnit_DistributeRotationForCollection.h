// /Script/ControlRig.RigUnit_DistributeRotationForCollection
// size 0xE0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h

USTRUCT()
struct FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() FRigElementKeyCollection Items;  // 0x0068, size 0x10
    UPROPERTY() TArray<FRigUnit_DistributeRotation_Rotation> Rotations;  // 0x0078, size 0x10
    UPROPERTY() EControlRigAnimEasingType RotationEaseType;  // 0x0088, size 0x1
    UPROPERTY() float Weight;  // 0x008C, size 0x4
    UPROPERTY(Transient) FRigUnit_DistributeRotation_WorkData WorkData;  // 0x0090, size 0x50
};
