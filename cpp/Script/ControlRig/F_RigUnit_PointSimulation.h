// /Script/ControlRig.RigUnit_PointSimulation
// size 0x200, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_PointSimulation.h

USTRUCT()
struct FRigUnit_PointSimulation : public FRigUnit_SimBaseMutable
{
public:
    UPROPERTY() TArray<FCRSimPoint> Points;  // 0x0068, size 0x10
    UPROPERTY() TArray<FCRSimLinearSpring> Links;  // 0x0078, size 0x10
    UPROPERTY() TArray<FCRSimPointForce> Forces;  // 0x0088, size 0x10
    UPROPERTY() TArray<FCRSimSoftCollision> CollisionVolumes;  // 0x0098, size 0x10
    UPROPERTY() float SimulatedStepsPerSecond;  // 0x00A8, size 0x4
    UPROPERTY() ECRSimPointIntegrateType IntegratorType;  // 0x00AC, size 0x1
    UPROPERTY() float VerletBlend;  // 0x00B0, size 0x4
    UPROPERTY() TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets;  // 0x00B8, size 0x10
    UPROPERTY() bool bLimitLocalPosition;  // 0x00C8, size 0x1
    UPROPERTY() bool bPropagateToChildren;  // 0x00C9, size 0x1
    UPROPERTY() FVector PrimaryAimAxis;  // 0x00CC, size 0xC
    UPROPERTY() FVector SecondaryAimAxis;  // 0x00D8, size 0xC
    UPROPERTY() FRigUnit_PointSimulation_DebugSettings DebugSettings;  // 0x00F0, size 0x50
    UPROPERTY() FCRFourPointBezier Bezier;  // 0x0140, size 0x30
    UPROPERTY(Transient) FRigUnit_PointSimulation_WorkData WorkData;  // 0x0170, size 0x88
};
