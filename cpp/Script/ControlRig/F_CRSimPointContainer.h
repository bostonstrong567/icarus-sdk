// /Script/ControlRig.CRSimPointContainer
// size 0x78, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Public/Math/Simulation/CRSimPointContainer.h

USTRUCT()
struct FCRSimPointContainer : public FCRSimContainer
{
    UPROPERTY() TArray<FCRSimPoint> Points;  // 0x0018, size 0x10
    UPROPERTY() TArray<FCRSimLinearSpring> Springs;  // 0x0028, size 0x10
    UPROPERTY() TArray<FCRSimPointForce> Forces;  // 0x0038, size 0x10
    UPROPERTY() TArray<FCRSimSoftCollision> CollisionVolumes;  // 0x0048, size 0x10
    UPROPERTY() TArray<FCRSimPointConstraint> Constraints;  // 0x0058, size 0x10
    UPROPERTY() TArray<FCRSimPoint> PreviousStep;  // 0x0068, size 0x10
};
