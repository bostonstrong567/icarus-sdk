// /Script/ControlRig.RigUnit_KalmanFloat
// size 0x30, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Kalman.h

USTRUCT()
struct FRigUnit_KalmanFloat : public FRigUnit_SimBase
{
public:
    UPROPERTY() float Value;  // 0x0008, size 0x4
    UPROPERTY() int32 BufferSize;  // 0x000C, size 0x4
    UPROPERTY() float Result;  // 0x0010, size 0x4
    UPROPERTY() TArray<float> Buffer;  // 0x0018, size 0x10
    UPROPERTY() int32 LastInsertIndex;  // 0x0028, size 0x4
};
