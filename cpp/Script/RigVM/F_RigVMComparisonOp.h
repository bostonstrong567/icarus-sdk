// /Script/RigVM.RigVMComparisonOp
// size 0x14, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMComparisonOp : public FRigVMBaseOp
{

    // Not reflected:
    FRigVMOperand A;  // 0x0002
    FRigVMOperand B;  // 0x0008
    FRigVMOperand Result;  // 0x000E
};
