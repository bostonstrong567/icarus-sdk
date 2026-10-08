// /Script/ControlRig.RigUnit_TimeOffsetFloat
// size 0x48, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_TimeOffset.h

USTRUCT()
struct FRigUnit_TimeOffsetFloat : public FRigUnit_SimBase
{
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() float SecondsAgo;  // 0x000C, size 0x4
    UPROPERTY() int32 BufferSize;  // 0x0010, size 0x4
    UPROPERTY() float TimeRange;  // 0x0014, size 0x4
    UPROPERTY() float Result;  // 0x0018, size 0x4
    UPROPERTY() TArray<float> Buffer;  // 0x0020, size 0x10
    UPROPERTY() TArray<float> DeltaTimes;  // 0x0030, size 0x10
    UPROPERTY() int32 LastInsertIndex;  // 0x0040, size 0x4
    UPROPERTY() int32 UpperBound;  // 0x0044, size 0x4
};
