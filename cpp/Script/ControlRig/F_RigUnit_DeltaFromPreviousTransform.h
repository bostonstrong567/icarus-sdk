// /Script/ControlRig.RigUnit_DeltaFromPreviousTransform
// size 0xD0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_DeltaFromPrevious.h

USTRUCT()
struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase
{
public:
    UPROPERTY() FTransform Value;  // 0x0010, size 0x30
    UPROPERTY() FTransform Delta;  // 0x0040, size 0x30
    UPROPERTY() FTransform PreviousValue;  // 0x0070, size 0x30
    UPROPERTY() FTransform Cache;  // 0x00A0, size 0x30
};
