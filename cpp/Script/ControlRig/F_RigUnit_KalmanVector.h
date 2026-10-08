// /Script/ControlRig.RigUnit_KalmanVector
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Simulation/RigUnit_Kalman.h

USTRUCT()
struct FRigUnit_KalmanVector : public FRigUnit_SimBase
{
    UPROPERTY() FVector Value;  // 0x0008, size 0xC
    UPROPERTY() int32 BufferSize;  // 0x0014, size 0x4
    UPROPERTY() FVector Result;  // 0x0018, size 0xC
    UPROPERTY() TArray<FVector> Buffer;  // 0x0028, size 0x10
    UPROPERTY() int32 LastInsertIndex;  // 0x0038, size 0x4
};
