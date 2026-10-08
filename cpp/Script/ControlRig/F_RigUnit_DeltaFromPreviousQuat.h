// /Script/ControlRig.RigUnit_DeltaFromPreviousQuat
// size 0x50, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_DeltaFromPrevious.h

USTRUCT()
struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase
{
    UPROPERTY() FQuat Value;  // 0x0010, size 0x10
    UPROPERTY() FQuat Delta;  // 0x0020, size 0x10
    UPROPERTY() FQuat PreviousValue;  // 0x0030, size 0x10
    UPROPERTY() FQuat Cache;  // 0x0040, size 0x10
};
