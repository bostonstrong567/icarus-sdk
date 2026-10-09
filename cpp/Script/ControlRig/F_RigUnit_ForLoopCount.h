// /Script/ControlRig.RigUnit_ForLoopCount
// size 0xD8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_ForLoop.h

USTRUCT()
struct FRigUnit_ForLoopCount : public FRigUnitMutable
{
public:
    UPROPERTY() int32 Count;  // 0x0068, size 0x4
    UPROPERTY() int32 Index;  // 0x006C, size 0x4
    UPROPERTY() float Ratio;  // 0x0070, size 0x4
    UPROPERTY() bool Continue;  // 0x0074, size 0x1
    UPROPERTY(EditAnywhere, Transient) FControlRigExecuteContext Completed;  // 0x0078, size 0x60
};
