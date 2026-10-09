// /Script/ControlRig.RigUnit_EndProfilingTimer
// size 0x88, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_ProfilingBracket.h

USTRUCT()
struct FRigUnit_EndProfilingTimer : public FRigUnit_DebugBaseMutable
{
public:
    UPROPERTY() int32 NumberOfMeasurements;  // 0x0068, size 0x4
    UPROPERTY() FString Prefix;  // 0x0070, size 0x10
    UPROPERTY() float AccumulatedTime;  // 0x0080, size 0x4
    UPROPERTY() int32 MeasurementsLeft;  // 0x0084, size 0x4
};
