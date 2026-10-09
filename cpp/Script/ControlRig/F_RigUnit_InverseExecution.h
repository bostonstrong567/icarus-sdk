// /Script/ControlRig.RigUnit_InverseExecution
// size 0x68, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_InverseExecution.h

USTRUCT()
struct FRigUnit_InverseExecution : public FRigUnit
{
public:
    UPROPERTY(EditAnywhere, Transient) FControlRigExecuteContext ExecuteContext;  // 0x0008, size 0x60
};
