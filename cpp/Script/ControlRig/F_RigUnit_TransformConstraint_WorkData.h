// /Script/ControlRig.RigUnit_TransformConstraint_WorkData
// size 0x60, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_TransformConstraint.h

USTRUCT()
struct FRigUnit_TransformConstraint_WorkData
{
    UPROPERTY() TArray<FConstraintData> ConstraintData;  // 0x0000, size 0x10
    UPROPERTY() TMap<int32, int32> ConstraintDataToTargets;  // 0x0010, size 0x50
};
