// /Script/ControlRig.RigUnit_KalmanTransform
// size 0xA0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Kalman.h

USTRUCT()
struct FRigUnit_KalmanTransform : public FRigUnit_SimBase
{
    UPROPERTY() FTransform Value;  // 0x0010, size 0x30
    UPROPERTY() int32 BufferSize;  // 0x0040, size 0x4
    UPROPERTY() FTransform Result;  // 0x0050, size 0x30
    UPROPERTY() TArray<FTransform> Buffer;  // 0x0080, size 0x10
    UPROPERTY() int32 LastInsertIndex;  // 0x0090, size 0x4
};
