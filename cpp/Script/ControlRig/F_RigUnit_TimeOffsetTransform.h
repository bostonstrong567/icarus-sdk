// /Script/ControlRig.RigUnit_TimeOffsetTransform
// size 0xB0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_TimeOffset.h

USTRUCT()
struct FRigUnit_TimeOffsetTransform : public FRigUnit_SimBase
{
public:
    UPROPERTY() FTransform Value;  // 0x0010, size 0x30
    UPROPERTY() float SecondsAgo;  // 0x0040, size 0x4
    UPROPERTY() int32 BufferSize;  // 0x0044, size 0x4
    UPROPERTY() float TimeRange;  // 0x0048, size 0x4
    UPROPERTY() FTransform Result;  // 0x0050, size 0x30
    UPROPERTY() TArray<FTransform> Buffer;  // 0x0080, size 0x10
    UPROPERTY() TArray<float> DeltaTimes;  // 0x0090, size 0x10
    UPROPERTY() int32 LastInsertIndex;  // 0x00A0, size 0x4
    UPROPERTY() int32 UpperBound;  // 0x00A4, size 0x4
};
