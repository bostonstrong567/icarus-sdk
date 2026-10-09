// /Script/ControlRig.RigUnit_PointSimulation_WorkData
// size 0x88, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_PointSimulation.h

USTRUCT()
struct FRigUnit_PointSimulation_WorkData
{
public:
    UPROPERTY() FCRSimPointContainer Simulation;  // 0x0000, size 0x78
    UPROPERTY() TArray<FCachedRigElement> BoneIndices;  // 0x0078, size 0x10
};
