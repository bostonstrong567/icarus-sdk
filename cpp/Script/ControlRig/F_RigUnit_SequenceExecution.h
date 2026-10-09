// /Script/ControlRig.RigUnit_SequenceExecution
// size 0x1E8, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Execution/RigUnit_SequenceExecution.h

USTRUCT()
struct FRigUnit_SequenceExecution : public FRigUnit
{
public:
    UPROPERTY(EditAnywhere, Transient) FControlRigExecuteContext ExecuteContext;  // 0x0008, size 0x60
    UPROPERTY(EditAnywhere, Transient) FControlRigExecuteContext A;  // 0x0068, size 0x60
    UPROPERTY(EditAnywhere, Transient) FControlRigExecuteContext B;  // 0x00C8, size 0x60
    UPROPERTY(EditAnywhere, Transient) FControlRigExecuteContext C;  // 0x0128, size 0x60
    UPROPERTY(EditAnywhere, Transient) FControlRigExecuteContext D;  // 0x0188, size 0x60
};
