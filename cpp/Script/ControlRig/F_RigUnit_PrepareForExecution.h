// /Script/ControlRig.RigUnit_PrepareForExecution
// size 0x68, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_PrepareForExecution.h

USTRUCT()
struct FRigUnit_PrepareForExecution : public FRigUnit
{
    UPROPERTY(EditAnywhere, Transient) FControlRigExecuteContext ExecuteContext;  // 0x0008, size 0x60
};
