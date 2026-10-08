// /Script/ControlRig.RigUnit_TimeOffsetVector
// size 0x58, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_TimeOffset.h

USTRUCT()
struct FRigUnit_TimeOffsetVector : public FRigUnit_SimBase
{
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() float SecondsAgo;  // 0x0014, size 0x4
    UPROPERTY() int32 BufferSize;  // 0x0018, size 0x4
    UPROPERTY() float TimeRange;  // 0x001C, size 0x4
    UPROPERTY() FVector Result;  // 0x0020, size 0xC
    UPROPERTY() TArray<FVector> Buffer;  // 0x0030, size 0x10
    UPROPERTY() TArray<float> DeltaTimes;  // 0x0040, size 0x10
    UPROPERTY() int32 LastInsertIndex;  // 0x0050, size 0x4
    UPROPERTY() int32 UpperBound;  // 0x0054, size 0x4
};
