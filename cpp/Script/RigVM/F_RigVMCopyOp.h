// /Script/RigVM.RigVMCopyOp
// size 0xE, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMCopyOp : public FRigVMBaseOp
{

    // Not reflected:
    FRigVMOperand Source;  // 0x0002
    FRigVMOperand Target;  // 0x0008
};
