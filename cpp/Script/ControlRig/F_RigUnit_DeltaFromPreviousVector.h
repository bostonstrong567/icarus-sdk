// /Script/ControlRig.RigUnit_DeltaFromPreviousVector
// size 0x38, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_DeltaFromPrevious.h

USTRUCT()
struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase
{
public:
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() FVector Delta;  // 0x0014, size 0xC
    UPROPERTY() FVector PreviousValue;  // 0x0020, size 0xC
    UPROPERTY() FVector Cache;  // 0x002C, size 0xC
};
