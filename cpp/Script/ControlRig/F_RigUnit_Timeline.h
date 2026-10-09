// /Script/ControlRig.RigUnit_Timeline
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Timeline.h

USTRUCT()
struct FRigUnit_Timeline : public FRigUnit_SimBase
{
public:
    UPROPERTY() float Speed;  // 0x0008, size 0x4
    UPROPERTY() float Time;  // 0x000C, size 0x4
    UPROPERTY() float AccumulatedValue;  // 0x0010, size 0x4
};
