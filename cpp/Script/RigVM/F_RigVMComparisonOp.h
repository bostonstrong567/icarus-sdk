// /Script/RigVM.RigVMComparisonOp
// size 0x14, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMComparisonOp : public FRigVMBaseOp
{
public:
    FRigVMOperand A;  // 0x0002, not reflected
    FRigVMOperand B;  // 0x0008, not reflected
    FRigVMOperand Result;  // 0x000E, not reflected
};
