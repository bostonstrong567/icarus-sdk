// /Script/ControlRig.RigUnit_DistributeRotation
// size 0xE8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_DistributeRotation.h

USTRUCT()
struct FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{
    UPROPERTY() FName StartBone;  // 0x0068, size 0x8
    UPROPERTY() FName EndBone;  // 0x0070, size 0x8
    UPROPERTY() TArray<FRigUnit_DistributeRotation_Rotation> Rotations;  // 0x0078, size 0x10
    UPROPERTY() EControlRigAnimEasingType RotationEaseType;  // 0x0088, size 0x1
    UPROPERTY() float Weight;  // 0x008C, size 0x4
    UPROPERTY() bool bPropagateToChildren;  // 0x0090, size 0x1
    UPROPERTY(Transient) FRigUnit_DistributeRotation_WorkData WorkData;  // 0x0098, size 0x50
};
