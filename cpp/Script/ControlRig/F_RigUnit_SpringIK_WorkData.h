// /Script/ControlRig.RigUnit_SpringIK_WorkData
// size 0xB0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Highlevel/Hierarchy/RigUnit_SpringIK.h

USTRUCT()
struct FRigUnit_SpringIK_WorkData
{
public:
    UPROPERTY(Transient) TArray<FCachedRigElement> CachedBones;  // 0x0000, size 0x10
    UPROPERTY() FCachedRigElement CachedPoleVector;  // 0x0010, size 0x14
    UPROPERTY() TArray<FTransform> Transforms;  // 0x0028, size 0x10
    UPROPERTY() FCRSimPointContainer Simulation;  // 0x0038, size 0x78
};
