// /Script/RigVM.RigVMCopyOp
// size 0xE, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMCopyOp : public FRigVMBaseOp
{
public:
    FRigVMOperand Source;  // 0x0002, not reflected
    FRigVMOperand Target;  // 0x0008, not reflected
};
