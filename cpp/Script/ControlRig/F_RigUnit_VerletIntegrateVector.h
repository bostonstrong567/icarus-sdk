// /Script/ControlRig.RigUnit_VerletIntegrateVector
// size 0x80, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Verlet.h

USTRUCT()
struct FRigUnit_VerletIntegrateVector : public FRigUnit_SimBase
{
    UPROPERTY() FVector Target;  // 0x0008, size 0xC
    UPROPERTY() float Strength;  // 0x0014, size 0x4
    UPROPERTY() float Damp;  // 0x0018, size 0x4
    UPROPERTY() float Blend;  // 0x001C, size 0x4
    UPROPERTY() FVector Force;  // 0x0020, size 0xC
    UPROPERTY() float MaxAcceleration;  // 0x002C, size 0x4
    UPROPERTY() FVector Position;  // 0x0030, size 0xC
    UPROPERTY() FVector Velocity;  // 0x003C, size 0xC
    UPROPERTY() FVector Acceleration;  // 0x0048, size 0xC
    UPROPERTY(Transient) FCRSimPoint Point;  // 0x0054, size 0x28
    UPROPERTY(Transient) bool bInitialized;  // 0x007C, size 0x1
};
