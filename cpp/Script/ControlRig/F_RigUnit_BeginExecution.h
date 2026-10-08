// /Script/ControlRig.RigUnit_BeginExecution
// size 0x68, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_BeginExecution.h

USTRUCT()
struct FRigUnit_BeginExecution : public FRigUnit
{
    UPROPERTY(EditAnywhere, Transient) FControlRigExecuteContext ExecuteContext;  // 0x0008, size 0x60
};
