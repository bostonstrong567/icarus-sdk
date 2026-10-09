// /Script/ControlRig.RigUnit_DeltaFromPreviousFloat
// size 0x18, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_DeltaFromPrevious.h

USTRUCT()
struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase
{
public:
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() float Delta;  // 0x000C, size 0x4
    UPROPERTY() float PreviousValue;  // 0x0010, size 0x4
    UPROPERTY() float Cache;  // 0x0014, size 0x4
};
